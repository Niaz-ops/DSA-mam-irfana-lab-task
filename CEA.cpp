#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;
/* ----------------- Patient Structure ----------------- */
struct Patient {
    int id;
    string name;
    int priority; 
};
/* ----------------- Compare for Priority Queue ----------------- */
struct ComparePriority {
    bool operator()(Patient const& p1, Patient const& p2) {
        return p1.priority < p2.priority;
    }
};

/* ----------------- Hospital Class ----------------- */
class Hospital {
private:
    int beds;
    int ventilators;
    int staff;

    queue<Patient> routineQueue;                      // Queue
    priority_queue<Patient, vector<Patient>, ComparePriority> emergencyQueue; // Heap

    unordered_map<int, string> patientRecord;         // Hash Table
    unordered_map<string, vector<string>> workflow;   // Graph

public:
    Hospital(int b, int v, int s) {
        beds = b;
        ventilators = v;
        staff = s;
        createWorkflow();
    }
    /* -------------------- Workflow Graph -------------------- */
    void createWorkflow() {
        workflow["Emergency"] = {"ICU"};
        workflow["ICU"] = {"Ward"};
        workflow["Ward"] = {"Discharge"};
    }
    /* -------------------- Add Patient -------------------- */
    void addPatient(int id, string name, bool emergency) {
        Patient p;
        p.id = id;
        p.name = name;

        if (emergency) {
            p.priority = 10;
            emergencyQueue.push(p);
            cout << "Emergency patient added.\n";
        } else {
            p.priority = 1;
            routineQueue.push(p);
            cout << "Routine patient added.\n";
        }

        patientRecord[id] = name;
    }
    /* -------------------- Allocate Resources -------------------- */
    void allocateResources() {
        if (beds <= 0 || staff <= 0) {
            cout << "No resources available!\n";
            return;
        }if (!emergencyQueue.empty()) {
            Patient p = emergencyQueue.top();
            emergencyQueue.pop();
            beds--;
            staff--;
            ventilators--;
            cout << "Emergency patient treated: " << p.name << endl;
        }else if (!routineQueue.empty()) {
            Patient p = routineQueue.front();
            routineQueue.pop();
            beds--;
            staff--;
            cout << "Routine patient treated: " << p.name << endl;
        }else {
            cout << "No patients waiting.\n";
        }
    }
    /* -------------------- Display Workflow -------------------- */
    void showWorkflow() {
        cout << "\nHospital Workflow:\n";
        for (auto w : workflow) {
            cout << w.first << " -> ";
            for (auto next : w.second)
                cout << next << " ";
            cout << endl;
        }
    }
    /* -------------------- Generate Report -------------------- */
    void generateReport() {
        cout << "\n--- Hospital Report ---\n";
        cout << "Available Beds: " << beds << endl;
        cout << "Available Ventilators: " << ventilators << endl;
        cout << "Available Staff: " << staff << endl;
        cout << "Total Patients Stored: " << patientRecord.size() << endl;
        cout << "Emergency Queue Size: " << emergencyQueue.size() << endl;
        cout << "Routine Queue Size: " << routineQueue.size() << endl;
    }
};
/* -------------------- Main Function -------------------- */
int main() {
    int bed, ven, staff;
    cout<<"Enter number of beds in the hospital : ";
    cin>>bed;
    cout<<"Enter number of ventilaters in the hospital : ";
    cin>>ven;
    cout<<"Enter number of satff in the hospital : ";
    cin>>staff;

    Hospital hospital(bed, ven, staff);

    int choice;
    do {
        cout << "\n--- Smart Hospital System ---\n";
        cout << "1. Add Routine Patient\n";
        cout << "2. Add Emergency Patient\n";
        cout << "3. Allocate Resources\n";
        cout << "4. Show Workflow\n";
        cout << "5. Generate Report\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1) {
            int id;
            string name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            hospital.addPatient(id, name, false);
        }else if (choice == 2) {
            int id;
            string name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            hospital.addPatient(id, name, true);
        }else if (choice == 3) {
            hospital.allocateResources();
        }else if (choice == 4) {
            hospital.showWorkflow();
        }else if (choice == 5) {
            hospital.generateReport();
        }
    } while (choice != 0);
    cout<<"\nExiting...\n";
    return 0;
}

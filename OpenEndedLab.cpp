#include <iostream>
#include <windows.h>
using namespace std;

void setColor(int color) {   // Set console text color
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
// Countdown display for each signal phase
void countdown(string text, int color, int time, string symbol="") {
    for (int i = time; i >= 1; i--) {
        system("cls");
        setColor(color);

        cout << " -----------------" << endl;
        cout << " |   " << text << "   |" << endl;
        cout << " -----------------" << endl;
        cout << "\n     Time: " << i << " sec" << endl;

        if (!symbol.empty()) {
            cout << "\n     " << symbol << endl;
        }

        Sleep(1000); // wait 1 second
    }
    setColor(7); // reset color
}

int main() {
    int choice;
    int time;
    int cycles = 0; 

    while (true) {
        system("cls");
        cout << "====== Traffic Signal System ======\n";
        cout << "1. Start Signal (one cycle)\n";
        cout << "2. Continuous Signal (loop)\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 3) {
            cout << "\nExiting program...\n";
            return 0;
        }

        cout << "\nEnter countdown time (seconds for RED/GREEN): ";
        cin >> time;

        if (choice == 1) {
            countdown("STOP!", 12, time, "X");        // Red
            countdown("GET READY!", 14, 3, "!");      // Yellow
            countdown("GO!", 10, time, "-->");        // Green
            cycles++;
        }
        else if (choice == 2) {
            while (true) {
                countdown("STOP!", 12, time, "X");
                countdown("GET READY!", 14, 3, "!");
                countdown("GO!", 10, time, "-->");
                cycles++;

                cout << "\nCycle " << cycles << " completed." << endl;
                cout << "Reminder: Always wear seatbelts and follow traffic rules!\n";
                cout << "\nPress 'q' to quit continuous mode, any other key to continue: ";
                char c;
                cin >> c;
                if (c == 'q' || c == 'Q') break;
            }
        }
    }
    cout << "\nTotal cycles completed: " << cycles << endl;
    cout << "Stay safe on the road!\n";
    return 0;
}


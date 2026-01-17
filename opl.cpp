#include <bits/stdc++.h>
using namespace std;

// -------------------- Vehicle --------------------
struct Vehicle {
    int id;
    string direction; // "N","E","S","W"
    Vehicle(int i=0, string d="N") : id(i), direction(d) {}
};

// -------------------- Road Queue --------------------
struct RoadQueue {
    string direction;
    queue<Vehicle> q;

    RoadQueue() : direction("Unknown") {}          // default constructor
    RoadQueue(string d) : direction(d) {}

    void addVehicle(Vehicle v) { q.push(v); }
    int size() const { return (int)q.size(); }
    void passVehicles(int count) {
        while (!q.empty() && count--) {
            cout << "Vehicle " << q.front().id
                 << " passed from " << direction << endl;
            q.pop();
        }
    }
};

// -------------------- Traffic Light Phase --------------------
struct Phase {
    vector<string> greenDirections; // which roads are green
    int minGreen; // seconds
    int maxGreen;
    Phase(vector<string> dirs={}, int minG=5, int maxG=15)
        : greenDirections(dirs), minGreen(minG), maxGreen(maxG) {}
};

// -------------------- Intersection --------------------
struct Intersection {
    int id;
    map<string,RoadQueue> roads;
    vector<Phase> phases;
    int currentPhase;
    int elapsed;

    Intersection(int i) : id(i), currentPhase(0), elapsed(0) {
        roads["N"] = RoadQueue("North");
        roads["E"] = RoadQueue("East");
        roads["S"] = RoadQueue("South");
        roads["W"] = RoadQueue("West");
    }

    void addPhase(Phase p) { phases.push_back(p); }

    void addVehicle(Vehicle v) {
        roads[v.direction].addVehicle(v);
    }

    // Calculate pressure score for a phase
    int phaseScore(const Phase& p) {
        int score = 0;
        for (auto& d : p.greenDirections) {
            score += roads[d].size();
        }
        return score;
    }

    // Decide next phase
    void decidePhase() {
        Phase& cur = phases[currentPhase];
        if (elapsed < cur.minGreen) return; // hold min green

        int bestIdx = currentPhase;
        int bestScore = phaseScore(cur);

        for (int i=0;i<(int)phases.size();i++) {
            if (i==currentPhase) continue;
            int s = phaseScore(phases[i]);
            if (s > bestScore) {
                bestScore = s;
                bestIdx = i;
            }
        }
        if (elapsed >= cur.maxGreen) bestIdx = (currentPhase+1)%phases.size();

        if (bestIdx != currentPhase) {
            cout << "Intersection " << id
                 << " switching phase " << currentPhase
                 << " -> " << bestIdx << endl;
            currentPhase = bestIdx;
            elapsed = 0;
        }
    }

    // Simulate one tick (1 second)
    void tick() {
        elapsed++;
        Phase& p = phases[currentPhase];
        for (auto& d : p.greenDirections) {
            roads[d].passVehicles(1); // one vehicle per second
        }
        decidePhase();
    }

    void printStatus() {
        cout << "Intersection " << id << " status:\n";
        for (auto& kv : roads) {
            cout << "  " << kv.second.direction
                 << " queue=" << kv.second.size() << endl;
        }
    }
};

// -------------------- Traffic System --------------------
struct TrafficSystem {
    vector<Intersection> intersections;
    int time;
    int vehicleCounter;

    TrafficSystem() : time(0), vehicleCounter(0) {}

    void addIntersection(Intersection I) {
        intersections.push_back(I);
    }

    // Randomly generate vehicles
    void generateVehicles() {
        static vector<string> dirs = {"N","E","S","W"};
        for (auto& I : intersections) {
            int num = rand()%3; // 0-2 vehicles
            for (int j=0;j<num;j++) {
                string d = dirs[rand()%4];
                I.addVehicle(Vehicle(vehicleCounter++, d));
            }
        }
    }

    void tick() {
        time++;
        cout << "\n=== Time " << time << " ===\n";
        generateVehicles();
        for (auto& I : intersections) {
            I.tick();
            I.printStatus();
        }
    }
};

// -------------------- Main --------------------
int main() {
    srand(time(NULL));

    // Create system with 1 intersection
    TrafficSystem sys;
    Intersection I1(1);

    // Add two phases: NS green, EW green
    I1.addPhase(Phase({"N","S"}, 5, 15));
    I1.addPhase(Phase({"E","W"}, 5, 15));

    sys.addIntersection(I1);

    // Run simulation for 5 seconds
    for (int t=0;t<=5;t++) {
        sys.tick();
    }

    cout << "\nSimulation finished.\n";
    return 0;
}

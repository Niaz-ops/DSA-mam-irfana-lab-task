// //Q:1 Construct a program to create a graph using adjacency matrix representation. 
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter number of vertices: ";    cin >> n;
//     int adj[n][n]; 
//     cout << "Enter adjacency matrix (0 or 1):\n";
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)    cin >> adj[i][j];
//     cout << "\nAdjacency Matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++)    cout << adj[i][j] << " ";
//         cout << endl;
//     }return 0;
// }


// //Q:2 Develop a program to create a graph using adjacency list representation. 
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int n, e;
//     cout << "Enter number of vertices: ";    cin >> n;
//     cout << "Enter number of edges: ";    cin >> e;
//     vector<int> adj[n]; 
//     cout << "Enter edges (u v):\n";
//     for (int i = 0; i < e; i++) {
//         int u, v;    cin >> u >> v;
//         adj[u].push_back(v); 
//         adj[v].push_back(u); 
//     }cout << "\nAdjacency List:\n";
//     for (int i = 0; i < n; i++) {
//         cout << i << ": ";
//         for (int v : adj[i])    cout << v << " ";
//         cout << endl;
//     }return 0;
// }


// //Q:3 Implement Breadth-First Search (BFS) traversal for a graph using a queue.
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
// void BFS(int start, vector<int> adj[], int n) {
//     vector<bool> visited(n, false);
//     queue<int> q;
//     visited[start] = true;
//     q.push(start);
//     cout << "BFS Traversal: ";
//     while (!q.empty()) {
//         int u = q.front();
//         q.pop();
//         cout << u << " ";
//         for (int v : adj[u]) {
//             if (!visited[v]) {
//                 visited[v] = true;
//                 q.push(v);
//             }
//         }
//     }cout << endl;
// }
// int main() {
//     int n, e;
//     cout << "Enter number of vertices: ";    cin >> n;
//     cout << "Enter number of edges: ";    cin >> e;
//     vector<int> adj[n];
//     cout << "Enter edges (u v):\n";
//     for (int i = 0; i < e; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); 
//     }
//     int start;
//     cout << "Enter starting vertex for BFS: ";    cin >> start;
//     BFS(start, adj, n);
//     return 0;
// }



// //Q:4 Implement Depth-First Search (DFS) traversal for a graph using recursion. 
// #include <iostream>
// #include <vector>
// using namespace std;
// void DFS(int u, vector<int> adj[], vector<bool> &visited) {
//     visited[u] = true;    cout << u << " ";
//     for (int v : adj[u]) {
//         if (!visited[v])    DFS(v, adj, visited);
//     }
// }int main() {
//     int n, e;
//     cout << "Enter number of vertices: ";    cin >> n;
//     cout << "Enter number of edges: ";    cin >> e;
//     vector<int> adj[n];
//     cout << "Enter edges (u v):\n";
//     for (int i = 0; i < e; i++) {
//         int u, v;    cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); 
//     }int start;
//     cout << "Enter starting vertex for DFS: ";    cin >> start;
//     vector<bool> visited(n, false);
//     cout << "DFS Traversal: ";
//     DFS(start, adj, visited);    cout << endl;
//     return 0;
// }


// //Q:5 Extend DFS to an iterative version using a stack. 
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;
// void DFS_iterative(int start, vector<int> adj[], int n) {
//     vector<bool> visited(n, false);
//     stack<int> s;
//     s.push(start);
//     cout << "DFS Traversal (Iterative): ";
//     while (!s.empty()) {
//         int u = s.top();
//         s.pop();
//         if (!visited[u]) {
//             visited[u] = true;    cout << u << " ";
//         }
//         for (auto it = adj[u].rbegin(); it != adj[u].rend(); ++it) {
//             if (!visited[*it])    s.push(*it);
//         }
//     }cout << endl;
// }
// int main() {
//     int n, e;
//     cout << "Enter number of vertices: ";    cin >> n;
//     cout << "Enter number of edges: ";    cin >> e;
//     vector<int> adj[n];
//     cout << "Enter edges (u v):\n";
//     for (int i = 0; i < e; i++) {
//         int u, v;    cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); 
//     }int start;
//     cout << "Enter starting vertex for DFS: ";    cin >> start;
//     DFS_iterative(start, adj, n);
//     return 0;
// }



// //Q:6 Apply BFS to search for a specific vertex and return its path. 
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
// int main() {
//     int n, e;    
//     cout << "Enter number of vertices: ";    cin >> n;
//     cout << "Enter number of edges: ";    cin >> e;
//     vector<int> adj[n];
//     for (int i = 0; i < e; i++) {
//         int u, v;   cout << "Enter edges (u v):\n";   cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }int start, target; cout<<"Start vertex : ";   cin >> start;
//     cout<<"Target vertex : ";   cin>>target;
//     vector<int> parent(n, -1);
//     vector<bool> visited(n, false);
//     queue<int> q;
//     visited[start] = true; q.push(start);
//     while (!q.empty()) {
//         int u = q.front(); q.pop();
//         if (u == target) break;
//         for (int v : adj[u]) if (!visited[v]) { visited[v] = true; parent[v] = u; q.push(v); }
//     }
//     if (!visited[target]) { cout << "Not reachable\n"; return 0; }
//     vector<int> path;
//     for (int v = target; v != -1;  v = parent[v])  path.push_back(v);
//     for (auto it = path.rbegin();  it != path.rend(); ++it)  cout << *it << " ";
//     cout << endl;
//     return 0;
// }


// //Q:7 Apply DFS to detect cycles in a graph. 
// #include <iostream>
// #include <vector>
// using namespace std;
// bool DFS_cycle(int u, int parent, vector<int> adj[], vector<bool> &visited) {
//     visited[u] = true;
//     for (int v : adj[u]) {
//         if (!visited[v]) {
//             if (DFS_cycle(v, u, adj, visited)) return true;
//         } else if (v != parent) {
//             return true;
//         }
//     }return false;
// }
// int main() {
//     int n, e;
//     cout << "Enter number of vertices: ";    cin >> n;
//     cout << "Enter number of edges: ";    cin >> e;
//     vector<int> adj[n];
//     for (int i = 0; i < e; i++) {
//         int u, v;   cout << "Enter edges (u v):\n";      cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); 
//     }
//     vector<bool> visited(n, false);
//     bool cycle = false;
//     for (int i = 0; i < n; i++) {
//         if (!visited[i] && DFS_cycle(i, -1, adj, visited)) {
//             cycle = true;    break;
//         }
//     }if (cycle)     cout << "Graph contains a cycle\n";
//     else    cout << "Graph does not contain a cycle\n";
//     return 0;
// }



// //Q:8 Implement a program to count connected components in an undirected graph using BFS/DFS. 
// #include <iostream>
// #include <vector>
// using namespace std;
// void DFS(int u, vector<int> adj[], vector<bool> &visited) {
//     visited[u] = true;
//     for (int v : adj[u])    if (!visited[v])    DFS(v, adj, visited);
// }
// int main() {
//     int n, e;
//     cout << "Enter number of vertices: ";    cin >> n;
//     cout << "Enter number of edges: ";    cin >> e;
//     vector<int> adj[n];
//     for (int i = 0; i < e; i++) {
//         int u, v;   cout << "Enter edges (u v):\n";    cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); 
//     }vector<bool> visited(n, false);
//     int components = 0;
//     for (int i = 0; i < n; i++) {
//         if (!visited[i]) {
//             DFS(i, adj, visited);    components++;
//         }
//     }cout << "Number of connected components: " << components << endl;
//     return 0;
// }



//Q:9 Compare and analyse the time complexity of BFS and DFS for sparse and dense graphs. 
//theory based


//Q:10 Implement BFS to solve the shortest path problem in an unweighted graph.
#include <bits/stdc++.h>
using namespace std;
void BFS_shortestPath(int start, int target, vector<int> adj[], int n) {
    vector<int> dist(n, -1);      
    vector<int> parent(n, -1);    
    queue<int> q;
    dist[start] = 0;
    q.push(start);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {  
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }if (dist[target] == -1) {
        cout << "Target not reachable from start.\n";    return;
    }cout << "Shortest distance: " << dist[target] << endl;
    vector<int> path;
    for (int v = target; v != -1; v = parent[v]) path.push_back(v);
    cout << "Shortest path: ";
    for (auto it = path.rbegin(); it != path.rend(); ++it) cout << *it << " ";
    cout << endl;
}

int main() {
    int n, e;
    cout << "Enter number of vertices: ";    cin >> n;
    cout << "Enter number of edges: ";    cin >> e;
    vector<int> adj[n];
    for (int i = 0; i < e; i++) {
        int u, v;   cout << "Enter edges (u v):\n";      cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }
    int start, target;
    cout<<"Enter start vertex : ";   cin>>start;
    cout<<"Enter Target vertex : ";   cin>>target;
    BFS_shortestPath(start, target, adj, n);
    return 0;
}



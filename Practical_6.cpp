// //Q:1. Implement a program to insert a new node at the 
// //beginning of a doubly linked list and analyze its time 
// //complexity compared to singly linked list insertion.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* prev; Node* next;
//     Node(int val) {
//         data = val;
//         prev = next = nullptr;
// }};
// class DoublyLinkedList {
//     Node* head;
// public:
//     DoublyLinkedList() {
//         head = nullptr;
//     }void insertAtBeginning(int val) {
//         Node* newNode = new Node(val);
//         if (head == nullptr) {  
//             head = newNode;   return;
//         }newNode->next = head;
//         head->prev = newNode;
//         head = newNode;
//     }void display() {
//         Node* temp = head;
//         cout << "List: Null <-> ";
//         while (temp != nullptr) {
//             cout << temp->data << " <-> ";
//             temp = temp->next;
//         }cout << "Null" <<endl;
// }};
// int main() {
//     DoublyLinkedList dll;
//     dll.insertAtBeginning(30);
//     dll.insertAtBeginning(20);
//     dll.insertAtBeginning(10);
//     dll.display();  
//     return 0;
// }



// //Q:2. Develop a program to insert a new node before a given node in a doubly linked 
// //list and test correctness by performing multiple insertions at random positions.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* prev;     Node* next;
//     Node(int val) {
//         data = val;
//         prev = next = nullptr;
// }};
// class DoublyLinkedList {
//     Node* head;
// public:
//     DoublyLinkedList() {
//         head = nullptr;
//     }void insertAtBeginning(int val) {
//         Node* newNode = new Node(val);
//         if (head == nullptr) {
//             head = newNode;     return;
//         }newNode->next = head;
//         head->prev = newNode;
//         head = newNode;
//     }void insertBefore(int target, int val) {
//         if (head == nullptr) {
//             cout << "List is empty, cannot insert before " << target << endl;
//             return;
//         }Node* temp = head;
//         if (head->data == target) {
//             insertAtBeginning(val);    return;
//         }while (temp != nullptr && temp->data != target) {
//             temp = temp->next;
//         }if (temp == nullptr) {
//             cout << "Target " << target << " not found!" << endl;   return;
//         }Node* newNode = new Node(val);
//         newNode->prev = temp->prev;
//         newNode->next = temp;
//         temp->prev->next = newNode;
//         temp->prev = newNode;
//     }void display() {
//         Node* temp = head;
//         cout << "List: Null <-> ";
//         while (temp != nullptr) {
//             cout << temp->data;
//             if (temp->next != nullptr)
//                 cout << " <-> ";
//             temp = temp->next;
//         }cout << " <-> Null" << endl;
// }};
// int main() {
//     DoublyLinkedList dll;
//     dll.insertAtBeginning(30);
//     dll.insertAtBeginning(20);
//     dll.insertAtBeginning(10);
//     cout << "Initial list:" << endl;
//     dll.display(); 
//     dll.insertBefore(20, 15); 
//     dll.insertBefore(30, 25); 
//     dll.insertBefore(10, 5);  
//     dll.insertBefore(100, 50); 
//     cout << "After multiple insertions:" << endl;
//     dll.display(); 
//     return 0;
// }



// //Q:3. Construct and implement a program to insert a new node at the end 
// //of a doubly linkedlist and evaluate the performance for large datasets.
// #include <iostream>
// #include <ctime>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;
// };
// class DoublyLinkedList {
//     Node* head;
//     Node* tail;
// public:
//     DoublyLinkedList() {
//         head = tail = NULL;
//     }void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;
//         if (head == NULL) {
//             newNode->prev = NULL;
//             head = tail = newNode;
//         } else {
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }void display(int limit = 10) {
//         Node* temp = head;
//         int count = 0;
//         while (temp != NULL && count < limit) {
//             cout << temp->data << " <-> ";
//             temp = temp->next;
//             count++;
//         }cout << "NULL\n";    }
// };
// int main() {
//     DoublyLinkedList dll;
//     int n;
//     cout << "Enter number of elements to insert: ";
//     cin >> n;
//     clock_t start = clock();
//     for (int i = 1; i <= n; i++) {
//         dll.insertEnd(i);
//     }clock_t end = clock();
//     double timeTaken = double(end - start) / CLOCKS_PER_SEC;
//     cout << "\nInsertion completed!\n";
//     cout<<"Time taken for "<<n <<" insertions: "<<timeTaken<<" seconds\n";
//     cout << "\nFirst few elements of list:\n";
//     dll.display();
//     return 0;
// }



// //Q:4. Implement a program to delete nodes (from beginning, specific position, and end) 
// //in a doubly linked list and compare deletion efficiency with singly linked list.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;    Node* prev;   Node* next;
// };
// class DoublyLinkedList {
//     Node* head;   Node* tail;
// public:
//     DoublyLinkedList() {
//         head = tail = NULL;
//     }void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;
//         if (head == NULL) {
//             newNode->prev = NULL;
//             head = tail = newNode;
//         } else {
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }void deleteBeginning() {
//         if (head == NULL) {
//             cout << "List is empty!\n";    return;
//         }Node* temp = head;
//         head = head->next;
//         if (head != NULL)    head->prev = NULL;
//         else    tail = NULL;
//         delete temp;
//     }void deleteAtPosition(int pos) {
//         if (head == NULL || pos <= 0) {
//             cout << "Invalid position!\n";    return;
//         }if (pos == 1) {
//             deleteBeginning();    return;
//         }Node* temp = head;
//         for (int i = 1; temp != NULL && i < pos; i++)
//             temp = temp->next;
//         if (temp == NULL) {
//             cout << "Position out of range!\n";    return;
//         }if (temp == tail) {
//             deleteEnd();    return;
//         }
//         temp->prev->next = temp->next;
//         temp->next->prev = temp->prev;    delete temp;
//     }void deleteEnd() {
//         if (tail == NULL) {
//             cout << "List is empty!\n";    return;
//         }Node* temp = tail;
//         tail = tail->prev;
//         if (tail != NULL)    tail->next = NULL;
//         else    head = NULL;
//         delete temp;
//     }void display() {
//         Node* temp = head;
//         cout << "List: ";
//         while (temp != NULL) {
//             cout << temp->data << " <-> ";    temp = temp->next;
//         }cout << "NULL\n";
// }};
// int main() {
//     DoublyLinkedList dll;
//     dll.insertEnd(10);      dll.insertEnd(20);  
//     dll.insertEnd(30);       dll.insertEnd(40);
//     dll.insertEnd(50);
//     cout << "Initial List:\n";    dll.display();
//     cout << "\nDelete from beginning:\n";
//     dll.deleteBeginning();    dll.display();
//     cout << "\nDelete at position 3:\n";
//     dll.deleteAtPosition(3);    dll.display();
//     cout << "\nDelete from end:\n";    dll.deleteEnd();
//     dll.display();
//     return 0;
// }


// //Q:5. Develop a program to traverse and display a doubly linked list in both forward 
// //and reverse order, and analyze the advantages of bi-directional traversal.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;    Node* prev;    Node* next;
// };
// class DoublyLinkedList {
//     Node* head;    Node* tail;
// public:
//     DoublyLinkedList() {
//         head = tail = NULL;
//     }void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;
//         if (head == NULL) {
//             newNode->prev = NULL;
//             head = tail = newNode;
//         } else {
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }void displayForward() {
//         Node* temp = head;
//         cout << "Forward Traversal: NULL <-> ";
//         while (temp != NULL) {
//             cout << temp->data << " <-> ";
//             temp = temp->next;
//         }cout << "NULL\n";
//     }void displayReverse() {
//         Node* temp = tail;
//         cout << "Reverse Traversal: NULL <-> ";
//         while (temp != NULL) {
//             cout << temp->data << " <-> ";
//             temp = temp->prev;
//         }cout << "NULL\n";
// }};
// int main() {
//     DoublyLinkedList dll;
//     dll.insertEnd(10);    dll.insertEnd(20);
//     dll.insertEnd(30);    dll.insertEnd(40);
//     dll.insertEnd(50);
//     dll.displayForward();    dll.displayReverse();
//     return 0;
// }


// //Q:6. Implement a program to count the number of nodes in a doubly 
// //linked list and evaluate the impact of list size on traversal time.
// #include <iostream>
// #include <ctime>
// using namespace std;
// class Node {
// public:
//     int data;    Node* prev;    Node* next;
// };
// class DoublyLinkedList {
//     Node* head;    Node* tail;
// public:
//     DoublyLinkedList() {
//         head = tail = NULL;
//     }void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;
//         if (head == NULL) {
//             newNode->prev = NULL;
//             head = tail = newNode;
//         } else {
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }int countNodes() {
//         int count = 0;
//         Node* temp = head;
//         while (temp != NULL) {      count++;
//             temp = temp->next;
//         }return count;
// }};

// int main() {
//     DoublyLinkedList dll;
//     int n;
//     cout << "Enter number of nodes: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         dll.insertEnd(i);
//     }
//     clock_t start = clock();
//     int totalNodes = dll.countNodes();
//     clock_t end = clock();
//     double timeTaken = double(end - start) / CLOCKS_PER_SEC;
//     cout << "\nTotal Nodes: " << totalNodes << endl;
//     cout << "Traversal Time: " << timeTaken << " seconds\n";
//     return 0;
// }



// //Q:7. Develop a program to search an element in a doubly linked list using both 
// //forward and backward traversal, and compare the performance of each approach.
// #include <iostream>
// #include <ctime>
// using namespace std;
// class Node {
// public:
//     int data;    Node* prev;    Node* next;
// };
// class DoublyLinkedList {
//     Node* head;    Node* tail;
// public:
//     DoublyLinkedList() {
//         head = tail = NULL;
//     }void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;
//         if (head == NULL) {
//             newNode->prev = NULL;
//             head = tail = newNode;
//         } else {
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }int searchForward(int key) {
//         int pos = 1;
//         Node* temp = head;
//         while (temp != NULL) {
//             if (temp->data == key)    return pos;
//             temp = temp->next;    pos++;
//         }return -1;
//     }int searchBackward(int key) {
//         int pos = 1;
//         Node* temp = tail;
//         while (temp != NULL) {
//             if (temp->data == key)        return pos;
//             temp = temp->prev;    pos++;
//         }    return -1;
// }};
// int main() {
//     DoublyLinkedList dll;
//     int n, key;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         dll.insertEnd(i);
//     }
//     cout << "Enter element to search: ";
//     cin >> key;
//     clock_t start = clock();
//     int posF = dll.searchForward(key);
//     clock_t end = clock();
//     double timeForward = double(end - start) / CLOCKS_PER_SEC;
//     start = clock();
//     int posB = dll.searchBackward(key);
//     end = clock();
//     double timeBackward = double(end - start) / CLOCKS_PER_SEC;
//     cout << "\nForward Search Position: " << posF;
//     cout << "\nForward Search Time: " << timeForward << " seconds";
//     cout << "\n\nBackward Search Position from end: " << posB;
//     cout << "\nBackward Search Time: " << timeBackward << " seconds\n";
//     return 0;
// }


// //Q:8. Construct a program to update the data of a given node in a 
// //doubly linked list and validate the update through traversal.
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;
// };

// class DoublyLinkedList {
//     Node* head;
//     Node* tail;

// public:
//     DoublyLinkedList() {
//         head = tail = NULL;
//     }

//     void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;

//         if (head == NULL) {
//             newNode->prev = NULL;
//             head = tail = newNode;
//         } else {
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     // Update data of a given node
//     void updateNode(int oldValue, int newValue) {
//         Node* temp = head;
//         while (temp != NULL) {
//             if (temp->data == oldValue) {
//                 temp->data = newValue;
//                 cout << "Node updated successfully!\n";
//                 return;
//             }
//             temp = temp->next;
//         }
//         cout << "Node not found!\n";
//     }

//     // Display list
//     void display() {
//         Node* temp = head;
//         cout << "List: ";
//         while (temp != NULL) {
//             cout << temp->data << " <-> ";
//             temp = temp->next;
//         }
//         cout << "NULL\n";
//     }
// };

// int main() {
//     DoublyLinkedList dll;

//     dll.insertEnd(10);
//     dll.insertEnd(20);
//     dll.insertEnd(30);
//     dll.insertEnd(40);

//     cout << "Original List:\n";
//     dll.display();

//     cout << "\nUpdating node with value 30 to 35...\n";
//     dll.updateNode(30, 35);

//     cout << "\nList after update:\n";
//     dll.display();

//     return 0;
// }

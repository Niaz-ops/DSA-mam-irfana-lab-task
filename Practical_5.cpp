// //Qno 1: Implement insertion of a node at the beginning of the list.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;       Node* next;
// };
// Node* head = NULL;   
// void insertAtBeginning(int value) {
//     Node* New = new Node();   
//     New->data = value;        
//     New->next = head;         
//     head = New;   
// }            
// void display() {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL";
// }
// int main() {
//     insertAtBeginning(10);
//     insertAtBeginning(20);
//     insertAtBeginning(30);
//     display();
//     return 0;
// }


// //Qno 2: Implement insertion of a node at the end of the list.
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;   Node* next;
// };
// Node* head = NULL;
// void insertAtEnd(int value) {
//     Node* New = new Node();
//     New->data = value;
//     New->next = NULL;
//     if (head == NULL) {
//         head = New;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = New;
// }
// void display() {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL";
// }
// int main() {
//     insertAtEnd(10);
//     insertAtEnd(20);
//     insertAtEnd(30);
//     display();
//     return 0;
// }



// //Qno 3: Develop insertion of a node at a specific position in the list.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;   Node* next;
// };
// Node* head = NULL;
// void insertAtPos(int value, int pos) {
//     Node* New = new Node();
//     New->data = value;  
//     if(pos == 1){
//         New->next = head;
//         head = New;
//     }else{
//     int i  = 1;
//     Node* curr = head;       Node* prev = NULL;  
//     while(i<pos){
//         if(curr == NULL){
//             cout<<"Position out of range! Insertion failed.\n";
//             delete New;
//             return ;
//         }
//         prev = curr;
//         curr = curr->next;    i++;
//     }
//     prev->next = New;      New->next = curr;
// }}
// void display() {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL";
// }
// int main() {
//     insertAtPos(12, 1);
//     insertAtPos(24, 2);
//     insertAtPos(36, 3);
//     insertAtPos(100, 2);
//     insertAtPos(48, 4);

//     display();
//     return 0;
// }


// //Qno 4: Implement deletion of a node from the beginning of the list.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;   Node* next;
// };
// void deleteAtBegning(Node*& head){
//     if (head == nullptr) {
//         cout << "Empty list, cannot delete.\n";
//         return ;
//     }
//         Node *toDelete = head;
//         head = head->next;
//         delete toDelete;
//     }
// void display(Node*& head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL\n";
// }
// int main(){
//     Node *head = new Node;
//     Node *sec = new Node;
//     Node *third = new Node;

//     head->data = 10;      head->next = sec;
//     sec->data = 20;       sec->next = third;
//     third->data = 30;     third->next = NULL;
//     cout<<"Original Linked List : ";
//     display(head);
//     deleteAtBegning(head);
//     cout<<"After deletion operation Linked List : ";
//     display(head);
//     return 0;
// }


//Qno 5: Implement deletion of a node from the end of the list.
#include <iostream>
using namespace std;
class Node {
public:
    int data;   Node* next;
};
void deleteAtEnd(Node*& head){
    if (head == NULL) {
        cout << "Empty list, cannot delete.\n";    return ;
    }
        Node *prev = NULL;
        Node *curr = head;
    while(curr->next != NULL){
        prev = curr;
        curr = curr->next; 
    }
    prev->next = NULL;    delete curr;
    }
void display(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";    temp = temp->next;
    }
    cout << "NULL\n";
}
int main(){
    Node *head = new Node;
    Node *sec = new Node;
    Node *third = new Node;

    head->data = 10;      head->next = sec;
    sec->data = 20;       sec->next = third;
    third->data = 30;     third->next = NULL;
    cout<<"Original Linked List : ";
    display(head);
    deleteAtEnd(head);
    cout<<"After deletion operation Linked List : ";
    display(head);
    return 0;
}




//Qno 6: Develop deletion of a node from a specific position.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;   Node* next;
// };
// void deleteAtPosition(Node*& head, int k){
//     if (head == nullptr) {
//         cout << "Empty list, cannot delete.\n";    return ;
//     }
//         Node *prev = NULL;
//         Node *curr = head;    int i = 1;
//         if(k == 1){
//         Node *toDelete = head;
//         head = head->next;    delete toDelete;
//     }else{
//     while(i<k){
//         if(curr == NULL){
//             cout<<"Error "<<endl;
//             return ;
//         }
//         prev = curr;
//         curr = curr->next;  i++;
//     }
//     prev->next = curr->next;    delete curr;
//     }}
// void display(Node*& head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " -> ";    temp = temp->next;
//     }
//     cout << "NULL\n";
// }
// int main(){
//     Node *head = new Node;
//     Node *sec = new Node;
//     Node *third = new Node;

//     head->data = 10;      head->next = sec;
//     sec->data = 20;       sec->next = third;
//     third->data = 30;     third->next = NULL;
//     cout<<"Original Linked List : ";
//     display(head);
//     deleteAtPosition(head, 2);
//     cout<<"After deletion operation Linked List : ";
//     display(head);
//     return 0;
// }



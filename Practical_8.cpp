// //Q2. Develop a C++ program to implement a queue using linked list and test 
// //enqueue and dequeue operations with multiple data sets.
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;
// };
// class Queue {
//     Node* front;
//     Node* rear;
// public:
//     Queue() {
//         front = rear = NULL;
//     }
//     void enqueue(int value) {
//         Node* temp = new Node();
//         temp->data = value;
//         temp->next = NULL;
//         if(rear == NULL) {
//             front = rear = temp;
//         }else{
//             rear->next = temp;
//             rear = temp;
//         }
//         cout<<value<<" enqueued" <<endl;
//     }
//     void dequeue() {
//         if (front == NULL) {
//             cout<<"Queue Underflow" <<endl;
//             return;
//         }
//         Node* temp = front;
//         cout<<temp->data<<" dequeued"<<endl;
//         front = front->next;
//         if(front == NULL)
//             rear = NULL;
//         delete temp;
//     }
//     void display() {
//         Node* temp = front;
//         cout<<"Queue Elements : ";
//         while (temp != NULL) {
//             cout<<temp->data << " ";
//             temp = temp->next;
//         }   cout<<endl;  }
// };
// int main() {
//     Queue q;
//     q.enqueue(10);   q.enqueue(20);    
//     q.enqueue(30);
//     q.display();    q.dequeue();
//     q.display();
//     return 0;
// }

// //Q3. Construct a program to implement a circular 
// //queue using arrays and evaluate its performance.
// #include <iostream>
// using namespace std;
// #define SIZE 5
// class CircularQueue {
//     int arr[SIZE];
//     int front, rear;
// public:
//     CircularQueue() {
//         front = rear = -1;
//     }
//     void enqueue(int value) {
//         if ((rear + 1) % SIZE == front) {
//             cout<<"Queue Overflow"<<endl;
//             return;
//         }if (front == -1)
//             front = 0;
//         rear = (rear + 1) % SIZE;
//         arr[rear] = value;
//         cout<<value<<" enqueued"<<endl;
//     }

//     void dequeue() {
//         if (front == -1) {
//             cout<<"Queue Underflow"<<endl;
//             return;
//         }cout<<arr[front]<<" dequeued"<<endl;
//         if (front == rear)
//             front = rear = -1;
//         else
//             front = (front + 1) % SIZE;
//     }void showQueue(){
//     if (front == -1) {
//         cout<<"Queue is empty"<<endl;
//         return;
//     }cout<<"Queue elements: ";
//     int i = front;
//     while (true) {
//         cout<<arr[i]<<" ";
//         if (i == rear)
//             break;
//         i = (i + 1) % SIZE;
//     }cout<<endl;
// }};
// int main() {
//     CircularQueue cq;
//     cq.enqueue(1);    
//     cq.enqueue(2);    
//     cq.enqueue(3);
//     cq.showQueue();    
//     cq.dequeue();
//     cq.enqueue(4);     
//     cq.showQueue();
//     return 0;
// }

// //Q4. Implement a program to create a double-ended queue (deque) and 
// //demonstrate insertion and deletion at both ends.
// #include <iostream>
// using namespace std;
// #define SIZE 5
// class Deque {
//     int arr[SIZE];
//     int front, rear;
// public:
//     Deque() {
//         front = -1;
//         rear = 0;
//     }
//     void insertFront(int x) {
//         if (front == 0)
//             cout << "Overflow" << endl;
//         else {
//             if (front == -1) {
//                 front = rear = 0;
//             } else  front--;
//             arr[front] = x;
//     }}
//     void insertRear(int x) {
//         if (rear == SIZE - 1)
//             cout << "Overflow" << endl;
//         else {
//             if (front == -1) {
//                 front = rear = 0;
//             } else
//                 rear++;
//             arr[rear] = x;
//     }}
//     void deleteFront() {
//         if (front == -1) {
//             cout << "Underflow" << endl;
//             return;
//     }cout << arr[front] << " deleted from front" << endl;
//         if (front == rear) 
//             front = rear = -1;
//         else 
//             front++;
//     }
//     void deleteRear() {
//         if (rear == -1) {
//             cout << "Underflow" << endl;
//             return;
//         }cout << arr[rear] << " deleted from rear" << endl;
//         if (front == rear) 
//             front = rear = -1;
//         else    rear--;
//     }
//     void display() {
//         if (front == -1) {
//             cout << "Deque is empty" << endl;
//             return;
//         }cout << "Deque elements: ";
//         for (int i = front; i <= rear; i++) {
//             cout << arr[i] << " ";
//         }cout << endl;
// }};

// int main() {
//     Deque d;
//     d.insertFront(10);   d.insertFront(5);
//     d.insertRear(15);    d.insertRear(20);
//     d.display();
//     d.deleteRear();
//     d.deleteFront();    d.display();
//     return 0;
// }

//Q5. Develop a C++ program to implement a priority queue 
//and compare its performance with a deque implementation.
#include <iostream>
using namespace std;
class PriorityQueue {
    int arr[10];
    int size;
public:
    PriorityQueue() {
        size = 0;
    }
    void enqueue(int value) {
        int i;
        for (i = size - 1; i >= 0 && arr[i] > value; i--) {
            arr[i + 1] = arr[i];
        }arr[i + 1] = value;
        size++;
        cout << value << " enqueued" << endl;
    }void dequeue() {
        if (size == 0) {
            cout << "Queue Underflow" << endl;
            return;
        }cout << arr[0] << " dequeued" << endl;
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }size--;
    }void display() {
        cout << "Priority Queue: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";}
        cout << endl;
}};
int main() {
    PriorityQueue pq;
    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(20);
    pq.display();
    pq.dequeue();
    pq.display();
    return 0;
}



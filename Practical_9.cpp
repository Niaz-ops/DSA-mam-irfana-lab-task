// //Q1. Write a C++ program to implement Linear 
// //Search for an array of integers.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int target;
//     cout<<"Enter value to search: ";
//     cin>>target;
//     for (int i = 0; i < 5; i++) {
//         if (arr[i] == target) {
//             cout<< "Element found at index " << i;
//             return 0;
//         }}
//     cout << "Element not found";
//     return 0;
// }


// //Q2. Modify the Linear Search program to search a 
// //character in a string and display its index if found.
// #include <iostream>
// using namespace std;
// int main() {
//     string str = "COMPUTER";
//     char key;
//     cout << "Enter character to search: ";
//     cin >> key;
//     for (int i = 0; i < str.length(); i++) {
//         if (str[i] == key) {
//             cout << "Character found at index " << i;
//             return 0;
//         }
//     }cout << "Character not found";
//     return 0;
// }


// //Q3. Develop a program to implement Linear Search in an
// // array of structures (student records with roll number and name).
// #include <iostream>
// using namespace std;

// struct Student {
//     int roll;
//     string name;
// };
// int main() {
//     Student s[3] = {{1,"Anaya"}, {2,"Sadia"}, {3,"Ahmed"}};
//     int rollno;
//     cout << "Enter roll number to search: ";
//     cin >> rollno;
//     for (int i = 0; i < 3; i++) {
//         if (s[i].roll == rollno) {
//             cout << "Student Found: " << s[i].name;
//             return 0;
//         }
//     }
//     cout << "Student not found";
//     return 0;
// }


// Question 4 Theoritical


// //Q5. Construct a program to count the number of 
// //comparisons made during Linear Search and compare results 
// //for small, medium, and large input sizes.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int key, comparisons = 0;
//     cout << "Enter element to search: ";
//     cin >> key;
//     for (int i = 0; i < 10; i++) {
//         comparisons++;
//         if (arr[i] == key) {
//             cout << "Element found at index " << i << endl;
//             break;
//         }
//     }cout << "Total comparisons: " << comparisons << endl;
//     return 0;
// }


//Q6. Develop a program that allows the user to enter multiple 
//keys and searches them sequentially in an array using Linear Search.
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int key;
    for (int k = 0; k < 3; k++) {
        cout << "Enter key to search: ";
        cin >> key;
        bool found = false;
        for (int i = 0; i < 5; i++) {
            if (arr[i] == key) {
                cout << "Found at index " << i << endl;
                found = true;
                break;  }
        }if (!found)
            cout << "Not found" << endl;
    }return 0;
}



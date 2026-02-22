// // Q:1 Write a C++ program to implement Binary Search on an integer array.
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int key) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low+high)/2;
//         if (arr[mid] == key)    return mid;
//         else if (arr[mid] < key)    low = mid + 1;
//         else    high = mid - 1;
//     }
//     return -1;
// }
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr)/sizeof(arr[0]), val;
//     cout << "Enter element to search: ";
//     cin >> val;
//     int result = binarySearch(arr, n, val);
//     if (result != -1)
//         cout << "Element found at index " << result;
//     else
//         cout << "Element not found";
//     return 0;
// }


// // Q:2 Modify the program to search for a string element in a sorted list of names.
// #include <iostream>
// #include <string>
// using namespace std;
// int binarySearch(string arr[], int n, string key) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low+high)/2;
//         if (arr[mid] == key)    return mid;
//         else if (arr[mid] < key)    low = mid + 1;
//         else    high = mid - 1;
//     }
//     return -1;
// }
// int main() {
//     string arr[] = {"Ali", "Ayesha", "Bilal", "Sadia", "Zara"};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     string name;
//     cout << "Enter name to search: ";
//     cin >> name;
//     int result = binarySearch(arr, n, name);
//     if (result != -1)
//         cout << "Name found at index " << result;
//     else
//         cout << "Name not found";
//     return 0;
// }


// //Q:3. Compare the number of iterations required in Linear Search 
// //vs Binary Search for the same dataset.
// #include <iostream>
// using namespace std;
// int linearSearch(int arr[], int n, int key, int &linearCount) {
//     for (int i = 0; i < n; i++) {
//         linearCount++;
//         if (arr[i] == key)  return i;
//     }   return -1;
// }
// int binarySearch(int arr[], int n, int key, int &binaryCount) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         binaryCount++;
//         int mid = (low + high) / 2;
//         if (arr[mid] == key)    return mid;
//         else if (arr[mid] < key)    low = mid + 1;
//         else    high = mid - 1;
//     }   return -1;
// }
// int main() {
//     int arr[] = {10, 20, 30, 40, 50, 60, 70};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 60;
//     int linearCount = 0, binaryCount = 0;
//     linearSearch(arr, n, key, linearCount);
//     binarySearch(arr, n, key, binaryCount);
//     cout << "Linear Search iterations: " << linearCount << endl;
//     cout << "Binary Search iterations: " << binaryCount << endl;
//     return 0;
// }


// //Q:4. Develop a program that reads a sorted dataset and applies Binary 
// //Search to find an element. Print the total number of comparisons made.
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int key) {
//     int start = 0, end = n - 1;
//     int comparisons = 0;
//     while (start <= end) {
//         comparisons++;
//         int mid = (start + end) / 2;
//         if (arr[mid] == key) {
//             cout << "Total comparisons made: " << comparisons << endl;
//             return mid;
//         }else if (arr[mid] < key) {
//             start = mid + 1;
//         }else   end = mid - 1;
//     }
//     cout << "Total comparisons made: " << comparisons << endl;
//     return -1;
// }
// int main() {
//     int n, key;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter sorted elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "Enter element to search: ";
//     cin >> key;
//     int result = binarySearch(arr, n, key);
//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found" << endl;
//     return 0;
// }


// Q:5. Construct a program to test Binary Search on large input arrays.
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int comparisons = 0;
    while (start <= end) {
        comparisons++;
        int mid = (end + start) / 2;
        if (arr[mid] == key) {
            cout << "Element found!" << endl;
            cout << "Index: " << mid << endl;
            cout << "Total comparisons: " << comparisons << endl;
            return mid;
        }else if (arr[mid] < key) {
            start = mid + 1;
        }else {
            end = mid - 1;
        }}
    cout << "Element not found" << endl;
    cout << "Total comparisons: " << comparisons << endl;
    return -1;
}
int main() {
    int n = 1000;         
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    binarySearch(arr, n, key);
    return 0;
}



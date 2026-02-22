// //Q:1.Write a C++ program to implement Selection Sort and count the number of comparisons. 
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5] = {64, 25, 12, 22, 11};
//     int n = 5, count = 0;
//     for (int i = 0; i < n - 1; i++) {
//         int min = i;
//         for (int j = i + 1; j < n; j++) {
//             count++;                     
//             if (arr[j] < arr[min]){
//                 min = j;
//             }
//         }int temp = arr[i];
//         arr[i] = arr[min];
//         arr[min] = temp;
//     }
//     cout << "Sorted Array: ";
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }cout << "\nTotal Comparisons: " << count;
//     return 0;
// }


// //Q:2 Write a C++ program to implement Bubble Sort and print the array after each pass.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[6] = {5, 1, 4, 2, 8, 3};
//     int n = 6;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - 1 - i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }cout << "After Pass " << i + 1 << ": ";
//         for (int k = 0; k < n; k++)
//             cout << arr[k] << " ";
//         cout << endl;
//     }return 0;
// }


// //Q:3 Write a C++ program to implement Insertion Sort and display intermediate steps. 
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5] = {8, 3, 5, 2, 6};
//     int n = 5;
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }arr[j + 1] = key;
//         cout << "After Step " << i << ": ";
//         for (int k = 0; k < n; k++)
//             cout << arr[k] << " ";
//         cout << endl;
//     }return 0;
// }


// //Q:4 Implement all three algorithms for the same dataset and record the execution time.
// #include <iostream>
// #include <ctime>
// using namespace std;
// void selectionSort(int a[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//             if (a[j] < a[min]) min = j;
//         swap(a[i], a[min]);
//     }
// }
// void bubbleSort(int a[], int n) {
//     for (int i = 0; i < n - 1; i++)
//         for (int j = 0; j < n - 1 - i; j++)
//             if (a[j] > a[j + 1])
//                 swap(a[j], a[j + 1]);
// }
// void insertionSort(int a[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = a[i], j = i - 1;
//         while (j >= 0 && a[j] > key) {
//             a[j + 1] = a[j];    j--;
//         }a[j + 1] = key;    }
// }
// int main() {
//     int arr1[] = {9, 5, 1, 4, 3};
//     int arr2[] = {9, 5, 1, 4, 3};
//     int arr3[] = {9, 5, 1, 4, 3};
//     int n = 5;
//     clock_t start, end;
//     start = clock();
//     selectionSort(arr1, n);
//     end = clock();
//     cout<<"Selection Sort Time: "<<(double)(end - start)/CLOCKS_PER_SEC<<endl;
//     start = clock();
//     bubbleSort(arr2, n);
//     end = clock();
//     cout<<"Bubble Sort Time: "<<(double)(end - start)/CLOCKS_PER_SEC<<endl;
//     start = clock();
//     insertionSort(arr3, n);
//     end = clock();
//     cout<<"Insertion Sort Time: "<< (double)(end - start)/CLOCKS_PER_SEC<<endl;
//     return 0;
// }


//Q:5.	Construct a program to sort elements in descending order using Bubble Sort. 
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {3, 7, 1, 9, 4};
    int n = 5;
    cout<<"Original array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {   
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }cout << "\nSorted Array (Descending): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}


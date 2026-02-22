// //Q:1 Write a C++ program to implement Merge Sort for an integer array. 
// #include <iostream>
// using namespace std;
// void merge(int a[], int l, int m, int r) {
//     int i = l, j = m + 1, k = l;
//     int temp[50];
//     while (i <= m && j <= r) {
//         if (a[i] < a[j])    temp[k++] = a[i++];
//         else    temp[k++] = a[j++];
//     }
//     while (i <= m) temp[k++] = a[i++];
//     while (j <= r) temp[k++] = a[j++];
//     for (i = l; i <= r; i++)    a[i] = temp[i];
// }void mergeSort(int a[], int l, int r) {
//     if (l < r) {
//         int m = (l + r) / 2;
//         mergeSort(a, l, m);
//         mergeSort(a, m + 1, r);
//         merge(a, l, m, r);
//     }
// }int main() {
//     int n, a[50];
//     cout << "Enter number of elements: ";   cin >> n;
//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++)    cin >> a[i];
//     mergeSort(a, 0, n - 1);
//     cout << "Sorted array:\n";
//     for (int i = 0; i < n; i++)    cout << a[i] << " ";
//     return 0;
// }



// //Q:2 Write a C++ program to implement Quick Sort using the first element as pivot. 
// #include <iostream>
// using namespace std;
// int partition(int a[], int low, int high) {
//     int pivot = a[low];
//     int i = low + 1;    int j = high;
//     while (i <= j) {
//         while (a[i] <= pivot && i <= high) i++;
//         while (a[j] > pivot) j--;
//         if (i < j)    swap(a[i], a[j]);
//     }swap(a[low], a[j]);    return j;
// }void quickSort(int a[], int low, int high) {
//     if (low < high) {
//         int p = partition(a, low, high);
//         quickSort(a, low, p - 1);
//         quickSort(a, p + 1, high);
// }}
// int main() {
//     int n, a[50];
//     cout << "Enter number of elements: ";    cin >> n;
//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++)    cin >> a[i];
//     quickSort(a, 0, n - 1);
//     cout << "Sorted array:\n";
//     for (int i = 0; i < n; i++)    cout << a[i] << " ";
//     return 0;
// }


// //Q:3 Modify Quick Sort to use the last element as pivot and test performance. 
// #include <iostream>
// using namespace std;
// int partition(int a[], int low, int high) {
//     int pivot = a[high];      int i = low - 1;
//     for (int j = low; j < high; j++) {
//         if (a[j] < pivot) {    i++;
//             swap(a[i], a[j]);
//         }
//     }swap(a[i + 1], a[high]);    return i + 1;
// }void quickSort(int a[], int low, int high) {
//     if (low < high) {
//         int p = partition(a, low, high);
//         quickSort(a, low, p - 1);
//         quickSort(a, p + 1, high);
//     }
// }int main() {
//     int n, a[50];
//     cout << "Enter number of elements: ";    cin >> n;
//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++)    cin >> a[i];
//     quickSort(a, 0, n - 1);
//     cout << "Sorted array:\n";
//     for (int i = 0; i < n; i++)    cout << a[i] << " ";
//     return 0;
// }


// //Q:4 Implement Quick Sort with a random pivot selection strategy. 
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int partition(int a[], int low, int high) {
//     int randomIndex = low + rand() % (high - low + 1);
//     swap(a[randomIndex], a[high]);   
//     int pivot = a[high];    int i = low - 1;
//     for (int j = low; j < high; j++) {
//         if (a[j] < pivot) {    i++;    swap(a[i], a[j]);
//         }
//     }swap(a[i + 1], a[high]);    return i + 1;
// }void quickSort(int a[], int low, int high) {
//     if (low < high) {
//         int p = partition(a, low, high);
//         quickSort(a, low, p - 1);
//         quickSort(a, p + 1, high);
//     }
// }int main() {
//     int n, a[50];
//     srand(time(0));   
//     cout << "Enter number of elements: ";    cin >> n;
//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++)    cin >> a[i];
//     quickSort(a, 0, n - 1);
//     cout << "Sorted array:\n";
//     for (int i = 0; i < n; i++)    cout << a[i] << " ";
//     return 0;
// }


//Q:5 Implement Merge Sort to sort an array of strings alphabetically. 
#include <iostream>
#include <string>
using namespace std;
void merge(string a[], int l, int m, int r) {
    int i = l, j = m + 1, k = l;
    string temp[50];
    while (i <= m && j <= r) {
        if (a[i] < a[j])    temp[k++] = a[i++];
        else    temp[k++] = a[j++];
    }
    while (i <= m) temp[k++] = a[i++];
    while (j <= r) temp[k++] = a[j++];
    for (i = l; i <= r; i++)    a[i] = temp[i];
}
void mergeSort(string a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int main() {
    int n;
    string a[50];
    cout << "Enter number of strings: ";    cin >> n;
    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++)    cin >> a[i];
    mergeSort(a, 0, n - 1);
    cout << "Sorted strings:\n";
    for (int i = 0; i < n; i++)    cout << a[i] << endl;
    return 0;
}




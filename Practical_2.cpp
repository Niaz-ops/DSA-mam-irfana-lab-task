// //Qno 1:  Develop a c++ program to find and display 
// //the largest value in a one dimensional array.
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n = 5;
//     int Data[n] = {10, 20, 30, 40, 50};
//     int max = INT_MIN;
//     for(int i = 0; i < n; i++){
//         if(max < Data[i]){
//             max = Data[i];
//         }
//     }
//     cout<<"Largest value : "<<max<<endl;
//     return 0;
// }

// //Qno 2: Implement insertion of a new item from the bigning 
// //of an array and traverse to display all elements
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n = 6;
//     int Data[n] = {10, 20, 30, 40, 50};
//     int newData = 60;
//     for(int i = n-2; i >= 0; i--){
//         Data[i+1] = Data[i];
//     }
//     Data[0] = newData;
//     cout<<"After insertion \n";
//     for(int k = 0; k < n; k++){
//         cout<<Data[k]<<" ";
//     }
//     return 0;
// }

// //Qno 3: Implement insertion of a new item at the end of 
// //the array and traverse to display all elements
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 6;
//     int Data[n] = {10, 20, 30, 40, 50};
//     int newData = 60;
//     Data[n-1] = newData;
//     cout<<"After insertion \n";
//     for(int k = 0; k < n; k++){
//         cout<<Data[k]<<" ";
//     }
//     return 0;
// }


// //Qno 4 : Implement insertion of a new item at the user specified 
// //location in the array and traverse to display all elements
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 6;
//     int Data[n] = {10, 20, 30, 40, 50};
//     int newData = 60, loc;
//     cout<<"Enter location between 0 to 5 : ";
//     cin>>loc;
//      for(int i = n-1; i >= loc; i--){
//         Data[i] = Data[i-1];
//     }
//     Data[loc] = newData;
//     cout<<"After insertion at user specified location \n";
//     for(int k = 0; k < n; k++){
//         cout<<Data[k]<<" ";
//     }
//     return 0;
// }


// //Qno 5: Implement Deletion an item from the bigning of an array and 
// //traverse to display all elements
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int Data[n] = {10, 20, 30, 40, 50};
//     for(int i = 0; i < n; i++){
//         Data[i] = Data[i+1];
//     }
//     cout<<"After Deletion \n";
//     for(int k = 0; k < n-1; k++){
//         cout<<Data[k]<<" ";
//     }
//     return 0;
// }

// //Qno 6: Implement Deletion of an item from the user spacified 
// //loc in the  array and traverse to display all elements
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int Data[n] = {10, 20, 30, 40, 50};
//     int loc;
//     cout<<"Enter location between 0 to 4 : ";
//     cin>>loc;
//     for(int i = loc; i < n-1; i++){
//         Data[i] = Data[i+1];
//     }
//     cout<<"After Deletion \n";
//     for(int k = 0; k < n-1; k++){
//         cout<<Data[k]<<" ";
//     }
//     return 0;
// }


// //Qno 7: Implement Deletion of an item at the end of the  
// //array and traverse to display all elements
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int Data[n] = {10, 20, 30, 40, 50};
//     n--;
//     cout<<"After Deletion \n";
//     for(int k = 0; k < n; k++){
//         cout<<Data[k]<<" ";
//     }
//     return 0;
// }

// //Qno 8: Construct a program to search for an element in an array 
// //using either index of value
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int Data[n] = {10, 20, 30, 40, 50};
//     int ele;
//     cout<<"Enter element : ";
//     cin>>ele;
//     int eleIdx = -1;
//     for(int k = 0; k < n; k++){
//         if (Data[k] == ele){
//             eleIdx = k;
//             break;
//         };
//     }
//     if(eleIdx != -1)
//         cout<<ele<<" value is at index: "<<eleIdx<<endl;
//     else
//         cout<<ele<<" not found in the array."<<endl;
//     return 0;
// }

// //Qno 9: Develop a program to update the value of an element at a given index
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5, idx;
//     int Data[n] = {10, 20, 30, 40, 50};
//     cout<<"Enter index between 0 to 4 : ";
//     cin>>idx;
//     for(int k = 0; k < n; k++){
//         if(idx == k){
//             Data[k] += 5;
//         }
//     }for(int k = 0; k < n; k++){
//         cout<<Data[k]<<" ";
//     }return 0;
// }



// //Qno 10: Implement a program to add two integer arrays 
// //to produce and display the output array
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int Data[n] = {10, 20, 30, 40, 50};
//     int Data2[n] = {10, 20, 30, 40, 50};
//     int res[n];
//     for(int k = 0; k < n; k++){
//         res[k] = Data[k] + Data2[k];
//     }
//     cout<<"After Addition \n";
//     for(int k = 0; k < n; k++){
//         cout<<res[k]<<" ";
//     }
//     return 0;
// }



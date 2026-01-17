
// //Question # 1  initilize and print (2x2) array
// #include<iostream>
// using namespace std;
// int main(){
//     int mat[2][2] = {{1, 2}, {3, 4}};
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// //Question # 2  calculate sum of diagonal elements
// #include<iostream>
// using namespace std;
// int main(){
//     int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int diaSum = 0;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             if(i == j){
//                 diaSum += mat[i][j];
//             }
//         }
//     }cout<<"Sum of diagonal elements : "<<diaSum<<endl;
//     return 0;
// }


// // Question # 3 Find min and max element from 2D array
// #include<iostream>
// #include <climits>
// using namespace std;
// int main(){
    // int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int max = INT_MIN, min = INT_MAX ;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         if(mat[i][j] > max){
    //             max = mat[i][j]; 
    //         }
    //         if(mat[i][j] < min){
    //             min = mat[i][j]; 
    //         }
    //     }
    // }
//     cout<<"Smallest element is : "<<min<<endl;
//     cout<<"Largest element is : "<<max<<endl;
//     return 0;
// }


// //Question # 4  Symmetric or not
// #include<iostream>
// using namespace std;
// int main(){
    // int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int trans[3][3];//  Transpose 
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         trans[i][j] = mat[j][i];
    //     }
    // }// check symmetric or not
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             if(trans[i][j] != mat[i][j]){
//                 cout<<"Not Symmetric"<<endl;
//                 return 0;
//             }
//         }
//     }cout<<"Symmetric";
//     return 0;
// }


// //Question # 5
// #include<iostream>
// using namespace std;
// int main(){
//     int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     for(int i=0; i<3; i++){
//         int sumRow = 0;
//         for(int j=0; j<3; j++){
//             sumRow += mat[i][j];
//         }
//         cout<<"Sum of row "<<i+1<<" is : "<<sumRow<<endl;
//     }cout<<endl;
//     for(int i=0; i<3; i++){
//         int sumCol = 0;
//         for(int j=2; j>=0; j--){
//             sumCol += mat[j][i];
//         }
//         cout<<"Sum of column "<<i+1<<" is : "<<sumCol<<endl;
//     }
//     return 0;
// }


//Question # 6 Rotate by 90 degree
#include<iostream>
using namespace std;
int main(){
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int trans[3][3];//  Transpose 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            trans[i][j] = mat[j][i];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=2; j>=0; j--){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


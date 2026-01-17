// #include <iostream>
// using namespace std;
// int main(){
//     //0110
//     //1010
//     //0010   &   = 2
//     //1110   |   = 14
//     //1100   ^   = 12
    
//     cout<<"(6 & 10) = "<<(6 & 10)<<endl;
//     cout<<"(6 | 10) = "<<(6 | 10)<<endl;
//     cout<<"(6 ^ 10) = "<<(6 ^ 10)<<endl;

//     //  10  <<  2     101000   =  40
//     //  10  >>  1     101      =  5

//     cout<<"(10 << 2) = "<<(10 << 2)<<endl;
//     cout<<"(10 << 2) = "<<(10 >> 1)<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int UB;
    cout<<"Enter length of array : ";
    cin>>UB;
    int arr[UB];
    for(int i = 0; i < UB; i++){
        cin>>arr[i];
    }
    cout<<"Array Size : " <<sizeof(arr);
    cout<<"\nBefore deletion operation \n";
    for(int j = 0; j < UB; j++){
        cout<<arr[j]<<" ";
    }
    for(int k = 0; k < UB; k++){
        arr[k] = arr[k+1];
    }
    UB-=1;
    cout<<"\nAfter deletion operation \n";
    for(int i = 0; i < UB; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Array Size : " <<sizeof(arr);
}
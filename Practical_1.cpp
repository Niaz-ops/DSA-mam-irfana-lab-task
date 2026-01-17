// //Question # 1
// #include <iostream>
// using namespace std;
// class Rectangle{
//     private:
//         int len, wid;
//     public:
//         void InputValues(){
//             cout<<"Enter the length of rectangle : ";
//             cin>>len;
//             cout<<"Enter the width of rectangle : ";
//             cin>>wid;
//         }
//         int calcArea(){     return len * wid;
//         }
//         int calcPerimeter(){    return 2 * (len + wid);
//         }
//         void Display(int a, int p){
//             cout<<"The area of rectangle is : "<<a<<endl;
//             cout<<"The perimeter of rectangle is : "<<p<<endl;
//         }
// };
// int main(){
//     Rectangle r;
//     r.InputValues();
//     float area = r.calcArea();
//     float peri = r.calcPerimeter();
//     r.Display(area, peri);
//     return 0;
// }


// //Question # 2
// #include <iostream>
// using namespace std;
// class Student {
//     private:
//         string name, rollno;
//         int marks[3], totalMarks = 0;
//         float percentage  = 0;
//     public:
//         void inputDetails(){
//             cout<<"Enter name :";
//             cin>>name;
//             cout<<"Enter roll no : ";
//             cin>>rollno;
//             for(int i = 0; i < 3; i++){
//                 cout<<"Enter marks of subject "<<i+1<<" : ";
//                 cin>>marks[i];
//             }
//         }
//         void calculation(){
//             for(int i = 0; i < 3; i++){
//                 totalMarks += marks[i];
//             }
//             percentage = ((totalMarks / 300.00) * 100.0);
//         }
//         void Display(){
//             cout<<"\n===== Student Result =====\n";
//             cout<<"Name : "<<name<<endl;
//             cout<<"roll No : "<<rollno<<endl;
//             for(int i = 0; i < 3; i++){
//                 cout<<"Marks of subject "<<i+1<<" : "<<marks[i]<<endl;
//             }
//             cout<<"Total marks : "<<totalMarks<<endl;
//             cout<<"Percentage : "<<percentage<<endl;
// }};
// int main(){
//     Student s;
//     s.inputDetails();
//     s.calculation();
//     s.Display();
//     return 0;
// }


// //Question # 3
// #include <iostream>
// using namespace std;
// class Bank{
//     private:
//         int accNo;
//         string holderName;
//         double balance;
//     public:
//         void InputDetails(){
//             cout<<"Enter name of Account holder : ";
//             cin>>holderName;
//             cout<<"Enter Account number : ";
//             cin>>accNo;
//             cout<<"Enter initial balance : ";
//             cin>>balance;
//         }
//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             cout << "Successfully deposited: " << amount << endl;
//         } else {
//             cout << "Invalid deposit amount!" << endl;
//         }
//     }
//     void withdraw(double amount) {
//         if (amount <= 0) {
//             cout << "Invalid withdrawal amount!" << endl;
//         } else if (amount > balance) {
//             cout << "Error! Insufficient balance." << endl;
//         } else {
//             balance -= amount;
//             cout << "Successfully withdrawn: " << amount << endl;
//         }
//     }
//     void display() {
//         cout << "\n=== Account Details ===" << endl;
//         cout << "Name: " << holderName << endl;
//         cout << "Account Number: " << accNo << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };
// int main() {
//     Bank acc;
//     acc.InputDetails();
//     acc.display();
//     double amount;
//     cout << "\nEnter amount to deposit: ";
//     cin >> amount;
//     acc.deposit(amount);
//     double withdrawAmount;
//     cout << "\nEnter amount to withdraw: ";
//     cin >> withdrawAmount;
//     acc.withdraw(withdrawAmount);
//     acc.display();
//     return 0;
// }


// //Question # 4
// #include <iostream>
// using namespace std;
// class Temperature{
//     private:
//         float cel, fahr;
//     public:
//         void inputValues(){
//             cout<<"Enter temperature in celcius : ";
//             cin>>cel;
//             cout<<"Enter temperature in fahrenheit : ";
//             cin>>fahr;
//         }float celToFahr(){
//             return (cel * 9.0 / 5.0) + 32;
//         }float fahrToCel(){
//             return (fahr - 32) * 5.0 / 9.0;
//         }void Display(float c, float f){
//             cout<<"Temperature in Degree Celcius : "<<c<<endl;
//             cout<<"Temperature in Degree Fahrenheit : "<<f<<endl;
//         }
// };
// int main(){
//     Temperature t;
//     t.inputValues();
//     float InCel = t.fahrToCel();
//     float InFahr = t.celToFahr();
//     t.Display(InCel, InFahr);
//     return 0;
// }


// //Question # 5
// #include <iostream>
// using namespace std;
// class Calculator {
// public:
//     int calculate(int a, int b) {
//         return a + b;
//     }
//     float calculate(float a, int b) {
//         return a - b;
//     }
//     double calculate(double a, double b) {
//         return a * b;
//     }
//     float calculate(float a, float b) {
//         if ( b != 0){
//             return a / b;
//         }else{
//             cout<<"Error! Division by zero."<<endl;
//             return 0;
//         }  
//     }
// };
// int main() {
//     Calculator calc;
//     cout << "Addition: " << calc.calculate(10, 5) << endl;
//     cout << "Subtraction: " << calc.calculate(10.2f, 7) << endl;
//     cout << "Multiplication: " << calc.calculate(10.254, 4.897) << endl;
//     cout << "Division: " << calc.calculate(10.02f, 5.6f) << endl;
//     return 0;
// }


// //Question # 6
// #include <iostream>
// using namespace std;
// class ComplexNumber{
//     int num1;
//     int num2;
// public:
//     ComplexNumber(int n1, int n2){
//         num1 = n1;
//         num2 = n2;
//     }//For addition
//     ComplexNumber operator+(const ComplexNumber& c2){
//         ComplexNumber n(0,0);
//         n.num1 = num1 + c2.num1;
//         n.num2 = num2 + c2.num2;
//         return n;
//     }// for subtraction
//     ComplexNumber operator-(const ComplexNumber& c2){
//         ComplexNumber n(0,0);
//         n.num1 = num1 - c2.num1;
//         n.num2 = num2 - c2.num2;
//         return n;
//     }// for multiplication
//     ComplexNumber operator*(const ComplexNumber& c2) {
//         ComplexNumber n(0, 0);
//         n.num1 = (num1 * c2.num1) - (num2 * c2.num2);  
//         n.num2 = (num1 * c2.num2) + (num2 * c2.num1); 
//         return n;
//     }

//     void display(){
//         cout<<num1;
//         if(num2 >= 0)  cout<<" + "<<num2 <<"i"<<endl;
//         else cout<<" - "<<-num2<<"i"<<endl;
//     }
// };
// int main(){
//     int a, b, c, d;
//     cout<<"Enter 1st complex number as real imaginary : "<<endl;
//     cin>>a>>b;
//     cout<<"Enter 2nd complex number as real imaginary : "<<endl;
//     cin>>c>>d;
//     ComplexNumber c1(a, b), c2(c, d), sum(0,0), diff(0,0), prod(0, 0);
//     sum = c1 + c2;
//     diff = c1 - c2;
//     prod = c1 * c2;
//     cout<<"Sum : ";
//     sum.display();
//     cout<<"Difference : ";
//     diff.display();
//     cout<<"Multiplication : ";
//     prod.display();
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    char T[] = "computer";
    char p[] = "put";
    int szT = sizeof(T) - 1; // exclude null terminator
    int szp = sizeof(p) - 1;
    int max = szT - szp + 1;
    int index = -1;

    for (int k = 0; k < max; k++) {
        int l;
        for (l = 0; l < szp; l++) {
            if (T[k + l] != p[l])
                break;
        }
        if (l == szp) { // full match found
            index = k;
            break;
        }
    }

    cout << index;
    return 0;
}












// //0110
    // //1010
    // //0010   &   = 2
    // //1110   |   = 14
    // //1100   ^   = 12
    // cout<<(6 & 10)<<endl;
    // cout<<(6 | 10)<<endl;
    // cout<<(6 ^ 10)<<endl;

    // //  10  <<  2     101000   =  40
    // //  10  >>  1     101      =  5

    // cout<<(10 << 2)<<endl;
    // cout<<(10 >> 1)<<endl;

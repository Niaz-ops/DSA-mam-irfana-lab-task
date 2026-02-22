// //Q:2.	Develop a C++ program to implement a stack using linked list 
// //and test push, pop, and peek operations with multiple data sets. 
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;    Node* next;
// };
// Node* top = NULL;
// void push(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = top;
//     top = newNode;
// }void pop() {
//     if (top == NULL) {
//         cout << "Stack Underflow\n";    return;
//     }Node* temp = top;
//     cout << "Popped: " << temp->data << endl;
//     top = top->next;    delete temp;
// }void peek() {
//     if (top == NULL)
//         cout << "Stack is empty\n";
//     else
//         cout << "Top element: " << top->data << endl;
// }int main() {
//     push(10);    push(20);
//     push(30);    peek();
//     pop();    peek();
//     return 0;
// }



// //Q:3.	Write a C++ program that uses stack operations to convert a given infix 
// //expression into its postfix equivalent, implementing the stack using an array. 
// #include <iostream>
// #include <stack>
// using namespace std;
// int priority(char c) {
//     if (c == '+' || c == '-') return 1;
//     if (c == '*' || c == '/') return 2;
//     return 0;
// }
// int main() {
//     stack<char> st;
//     string infix = "A+B*C/D";
//     string postfix = "";
//     for (char c : infix) {
//         if (isalnum(c))    postfix += c;
//         else {
//             while (!st.empty() && priority(st.top()) >= priority(c)) {
//                 postfix += st.top();
//                 st.pop();
//             }st.push(c);
//         }
//     }while (!st.empty()) {
//         postfix += st.top();    st.pop(); 
//     }cout<<"Original Expression : "<<infix<<endl;
//     cout << "Postfix Expression: " << postfix;
//     return 0;
// }



// //Q:4.	Implement a C++ program to evaluate a postfix expression using 
// //stack, and compare execution steps with direct infix evaluation. 
// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<int> st;
//     string exp = "23*54*+";
//     for (char c : exp) {
//         if (isdigit(c))
//             st.push(c - '0');
//         else {
//             int b = st.top(); st.pop();
//             int a = st.top(); st.pop();
//             if (c == '+') st.push(a + b);
//             if (c == '*') st.push(a * b);
//         }
//     }
//     cout << "Result: " << st.top();
//     return 0;
// }

// //Q: 5.	Design a program to check whether parentheses/brackets 
// //in a mathematical expression are balanced using stack.  
// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<char> st;
//     string exp = "(a+b)*(c+d)";
//     for (char c : exp) {
//         if (c == '(')
//             st.push(c);
//         else if (c == ')') {
//             if (st.empty()) {
//                 cout << "Not Balanced";    return 0;
//             }st.pop();
//         }
//     }if (st.empty())
//         cout << "Balanced";
//     else
//         cout << "Not Balanced";
//     return 0;
// }


// //Q:6 Develop a program to reverse a string using stack operations 
// //and validate correctness through multiple test cases. 
// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<char> st;
//     string str = "HELLO";
//     for (char c : str)
//         st.push(c);
//     while (!st.empty()) {
//         cout << st.top();
//         st.pop();
//     }
//     return 0;
// }


// //Q:7 Construct a program to implement stack overflow and underflow 
// //checks in both arraybased and linked-list-based stacks. 
// //Array Bassed
// #include <iostream>
// using namespace std;
// #define SIZE 5
// int stack[SIZE];
// int top = -1;
// void push(int value) {
//     if (top == SIZE - 1) {
//         cout << "Stack Overflow! Cannot push " << value << endl;    return;
//     }stack[++top] = value;
//     cout << value << " pushed into stack\n";
// }void pop() {
//     if (top == -1) {
//         cout << "Stack Underflow! Cannot pop\n";    return;
//     }cout << stack[top--] << " popped from stack\n";
// }
// int main() {
//     push(10);    push(20);    push(30);
//     push(40);    push(50);    push(60);   
//     pop();    pop();    pop();
//     pop();    pop();    pop();      
//     return 0;
// }

// //Q:7 Construct a program to implement stack overflow and underflow 
// //checks in both arraybased and linked-list-based stacks. 
// //Linked list based
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;    Node* next;
// };
// Node* top = NULL;
// void push(int value) {
//     Node* newNode = new Node();
//     if (newNode == NULL) {
//         cout << "Stack Overflow! Memory not available\n";   return;
//     }newNode->data = value;
//     newNode->next = top;
//     top = newNode;
//     cout << value << " pushed into stack\n";
// }void pop() {
//     if (top == NULL) {
//         cout << "Stack Underflow! Stack is empty\n";    return;
//     }Node* temp = top;
//     cout << temp->data << " popped from stack\n";
//     top = top->next;    delete temp;
// }
// int main() {
//     push(10);    push(20);
//     push(30);    pop();
//     pop();    pop();    pop();   
//     return 0;
// }



// //Q:8 Implement a program to convert an infix expression into prefix form using 
// //stack and validate correctness by evaluating both postfix and prefix results. 
// #include <iostream>
// #include <stack>
// #include <algorithm>
// using namespace std;
// int prec(char c) {
//     if (c == '+' || c == '-') return 1;
//     if (c == '*' || c == '/') return 2;
//     return 0;
// }
// string infixToPostfix(string infix) {
//     stack<char> s;
//     string postfix = "";
//     for (char c : infix) {
//         if (isdigit(c))
//             postfix += c;
//         else {
//             while (!s.empty() && prec(s.top()) >= prec(c)) {
//                 postfix += s.top();
//                 s.pop();
//             }s.push(c);
//     }}while (!s.empty()) {
//         postfix += s.top();     s.pop();
//     }return postfix;
// }
// string infixToPrefix(string infix) {
//     reverse(infix.begin(), infix.end());
//     string postfix = infixToPostfix(infix);
//     reverse(postfix.begin(), postfix.end());
//     return postfix;
// }
// int evalPostfix(string exp) {
//     stack<int> s;
//     for (char c : exp) {
//         if (isdigit(c))
//             s.push(c - '0');
//         else {
//             int b = s.top(); s.pop();
//             int a = s.top(); s.pop();
//             if (c == '+') s.push(a + b);
//             if (c == '*') s.push(a * b);
//     }}return s.top();
// }
// int evalPrefix(string exp) {
//     stack<int> s;
//     for (int i = exp.length() - 1; i >= 0; i--) {
//         if (isdigit(exp[i]))
//             s.push(exp[i] - '0');
//         else {
//             int a = s.top(); s.pop();
//             int b = s.top(); s.pop();
//             if (exp[i] == '+') s.push(a + b);
//             if (exp[i] == '*') s.push(a * b);
//     }}return s.top();
// }
// int main() {
//     string infix = "2+3*4";
//     string postfix = infixToPostfix(infix);
//     string prefix = infixToPrefix(infix);
//     cout << "Infix: " << infix << endl;
//     cout << "Postfix: " << postfix << endl;
//     cout << "Prefix: " << prefix << endl;
//     cout << "Postfix Result: " << evalPostfix(postfix) << endl;
//     cout << "Prefix Result : " << evalPrefix(prefix) << endl;
//     return 0;
// }



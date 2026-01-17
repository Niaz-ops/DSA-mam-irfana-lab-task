
// // Q 1: WAP to input a string and display it
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// 	string str1;
// 	cout<<"Enter string : ";
// 	getline(cin, str1);
// 	cout<<str1<<endl;
// 	return 0;
// }

// //Q 2: WAP to concate two strings
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// 	string str1, str2, str3;
// 	cout<<"Enter string1 : ";
// 	getline(cin, str1);
// 	cout<<"Enter string2 : ";
// 	getline(cin, str2);
// 	str3 = str1 + str2;
// 	cout<<"Concatenated string : ";
// 	cout<<str3<<endl;
// 	return 0;
// }

// //Q 3:  WAP to extract a substring from a given string
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// 	string str1;
// 	int pos1, pos2, length;
// 	cout<<"Enter string : ";
// 	getline(cin, str1);
// 	cout<<"Enter 1st position and 2nd position to get substring : ";
// 	cin>>pos1>>pos2;
// 	cout<<"Substring"<<endl;
// 	for(int i = pos1; i <= pos2; i++){
// 		cout<<str1[i];
// 	}
// 	return 0;
// }


// //Q 4:  WAP to check the relation between two strings
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// 	string str1, str2;
// 	cout<<"Enter 1st string : ";
// 	getline(cin, str1);
// 	cout<<"Enter 2nd string : ";
// 	getline(cin, str2);
// 	if(str1 == str2){
// 		cout<<"both strings are equal."<<endl;
// 	}else if(str1 > str2){
// 		cout<<"String 1 is greater than string 2."<<endl;
// 	}else{
// 		cout<<"String 1 is smaller than string 2."<<endl;
// 	}
// 	return 0;
// }


// //Q 5: WAP to reverse a string
// #include <iostream>
// using namespace std;
// int main(){
//     string str1;
//     cout<<"Enter a string : ";
//     getline(cin, str1);
// 	cout<<"original string : "<<str1<<endl;
//     for (int i = 0, j = str1.length()-1; i < j; i++, j--) {
// 		char temp = str1[i];
// 		str1[i] = str1[j];
// 		str1[j] = temp;
//     }
// 	cout<<"Reversed string : "<<str1<<endl;
//     return 0;
// }


// //Q 6: WAP to count vowels and consonants in a string
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// 	string str1;
// 	cout<<"Enter string : ";
// 	getline(cin, str1);
// 	int countV = 0, countC = 0;
// 	for(int i = 0; i < str1.size(); i++){
// 		if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' 
//             || str1[i]=='o' || str1[i]=='u'){
// 			countV++;
// 		}else{
// 			countC++;
// 		}
// 	}
// 	cout<<"Total number of vowels : "<<countV<<endl;
// 	cout<<"Total number of consonents : "<<countC<<endl;
// 	return 0;
// }


// //Q 7: WAP to check that given string is palindrome or not
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// 	string str1;
// 	cout<<"Enter string : ";
// 	getline(cin, str1);
// 	for(int i = 0, j = str1.size()-1; i < j; i++, j--){
// 		if(str1[i] != str1[j]){
// 			cout<<"Not polindrome";
// 			return 0;
// 		}	
// 	}cout<<"Palindrome"<<endl;
// 	return 0;
// }


// //Q 8: find length of string without using built in functions
// #include <iostream>
// using namespace std;
// int main(){
//     string str1;
//     cout<<"Enter a string : ";
//     getline(cin, str1);
//     int length = 0;
//     for(char ch : str1){
//         length++;
//     }cout<<"Length of string is : "<<length<<endl;
//     return 0;
// }


// //Q 9: WAP to convert a string into Uppercase and lower case
// #include <iostream>
// using namespace std;
// int main(){
//     string str1;
//     cout<<"Enter a string : ";
//     getline(cin, str1);
//     string upperStr = str1;
//     for(int i = 0; i < upperStr.length(); i++) {
//         if(upperStr[i] >= 'a' && upperStr[i] <= 'z') {
//             upperStr[i] = upperStr[i] - 32;  
//         }
//     }
//     string lowerStr = str1;
//     for(int i = 0; i < lowerStr.length(); i++) {
//         if(lowerStr[i] >= 'A' && lowerStr[i] <= 'Z') {
//             lowerStr[i] = lowerStr[i] + 32;  
//         }
//     }
//     cout<<"\nOriginal string : "<<str1<<endl;
//     cout<<"Uppercase string : "<<upperStr<<endl;
//     cout<<"Lowercase string : "<<lowerStr<<endl;
//     return 0;
// }


// //Q 10: WAP to replace all spaces with an underscore '_'
// #include <iostream>
// using namespace std;
// int main(){
//     string str1;
//     cout<<"Enter a string : ";
//     getline(cin, str1);
//     for (int i = 0; i < str1.length(); i++) {
//         if(str1[i] == ' ') {
//             str1[i] = '_';
//         }
//     }cout<<"After replacing spaces : "<<str1<<endl;
//     return 0;
// }


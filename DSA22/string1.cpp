// //1REVERSE A STRING:    
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void reverse(char string[], int n){
//     int start = 0;
//     int end = n - 1;
//     while(start<end){
//         swap(string[start++], string[end--]);
//     }
// }

// int getLength(char string[]){
//     int count=0;
//     for (int i = 0; string[i]!='\0'; i++)
//     {
//         /* code */ count++;
//     }
//     return count;
// }

// int main(){
//     char string[100];
//     cout << "enter the string to reverse:";
//     cin >> string;

//     int length = getLength(string);
//     cout << "the length of the string is: " << length << endl;

//     reverse(string, length);
//     cout << "the reversed string is: " << string;
//     return 0;
// }


// // reverse and aray using recurssion
// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void reverseArr(vector<int>&arr, int left, int right){
//     if(left>=right) return;
//     swap(arr[left], arr[right]);
//     reverseArr(arr, left + 1,right - 1);
// }

// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "enter " << n << " numbers to be reversed: ";
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     reverseArr(arr, 0,n - 1);
//     cout << "the reversed array is: ";
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//palindrome check using recursion:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return palindrome(i + 1, s);
}

int main(){
    string s;
    cout << "enter the string: ";
    cin >> s;
    cout<<palindrome(0, s);
    return 0;
}
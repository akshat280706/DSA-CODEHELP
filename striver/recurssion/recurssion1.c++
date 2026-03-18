// // //when a functions calls itself untill a condition is met is called recurssion
// // //Base Case---> till where to print(the condition)

// // //stack space- stores the functions yet to be completed

// // //print numbers till 3 from 0 using recurssion
// // #include<iostream>
// // using namespace std;

// // // int cnt=0;
// // // void print(){
// // //     if (cnt==3)
// // //     {
// // //         return;
// // //     }
    
// // //     cout << cnt << endl;
// // //     cnt++;
// // //     print();
// // // }
// // // int main(){
// // //     print();
// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;
// // void print(int n){
// //     if (n==0)
// //     {
// //         return;
// //     }
// //     print(n - 1);
// //     cout << n << " ";
// // }
// // int main(){
// //     int n;
// //     cout << "enter the value of n: " << endl;
// //     cin >> n;
// //     print(n);
// //     cout << endl;
// //     return 0;
// // }

// //print name n times
// #include<iostream>
// using namespace std;

// void name(string yourName, int n){
//     if (n<=0){
//         return;
//     }
//     cout << yourName << endl;
//     name(yourName, n-1);
// }

// int main(){
//     int n;
//     cout << "enter the value of n: ";
//     cin >> n;

//     string yourName;
//     cout << "enter the name to be printed: ";
//     cin >> yourName;

//     name(yourName, n);
//     return 0;
// }
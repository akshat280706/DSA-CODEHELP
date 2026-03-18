// //Print name n times: 

// // #include <iostream>
// // using namespace std;
// // void name(int i, int n){
// //     if (i>n)
// //     {
// //         return;
// //     }
// //     cout << "akshat" << endl;
// //     name(i + 1, n);
// // }
// // int main(){
// //     int n;
// //     cout << "enter how many time to print the name: " << endl;
// //     cin >> n;
// //     name(1, n);
// //     return 0;
// // }

// //print linearly from n to 1:
// // #include<iostream>
// // using namespace std;
// // void reverseOrder(int i, int n){
// //     if(i<1){
// //         return;
// //     }
// //     cout << i << " "<<endl;
// //     reverseOrder(i - 1, n);
// // }
// // int main(){
// //     int n;
// //     cout << "enter value of n" << endl;
// //     cin >> n;
// //     cout << endl;
// //     cout << "The reverse order from " << n << " to 1 is: " << endl;
// //     reverseOrder(n, n);
// //     return 0;
// // }

// //using backtracking(n to 1):
// // #include<iostream>
// // using namespace std;
// // void reverseOrder(int i, int n){
// //     if(i>n){
// //         return;
// //     }
// //     reverseOrder(i + 1, n);
// //     cout << i << " "<<endl;
// // }
// // int main(){
// //     int n;
// //     cout << "enter value of n" << endl;
// //     cin >> n;
// //     cout << endl;
// //     cout << "The reverse order from " << n << " to 1 is: " << endl;
// //     reverseOrder(1, n);
// //     return 0;
// // }

// //print 1 to n:
// //print n to 1:

// #include<iostream>
// using namespace std;

// void printNum(int i,int n){
//     if (i>n) return;
//     cout << i << " ";
//     printNum(i + 1, n);
// }

// void printOpp(int n, int i){
//     if(n<=0) return;

//     cout << n << " ";
//     printOpp(n-1, i);
// }

// int main(){
//     int n;
//     cout << "enter the value of n: ";
//     cin >> n;

//     printNum(1, n);
//     cout << endl;
//     printOpp(n, 1);
//     return 0;
// }


//print from 1 to n but not allowed to use i+1(i.e use backtracking)
#include<iostream>
using namespace std;

void print(int i, int n){
    if(i<1) return;
    print(i - 1, n);
    cout << i << " ";
}

void printOpp(int i, int n){
    if(i>n) return;
    printOpp(i + 1, n);
    cout << i << " ";
}

int main(){
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    print(n, n);
    cout << endl;
    printOpp(1, n);
    return 0;
}
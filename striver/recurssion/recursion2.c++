//Print name n times: 

// #include <iostream>
// using namespace std;
// void name(int i, int n){
//     if (i>n)
//     {
//         return;
//     }
//     cout << "akshat" << endl;
//     name(i + 1, n);
// }
// int main(){
//     int n;
//     cout << "enter how many time to print the name: " << endl;
//     cin >> n;
//     name(1, n);
//     return 0;
// }

//print linearly from n to 1:
// #include<iostream>
// using namespace std;
// void reverseOrder(int i, int n){
//     if(i<1){
//         return;
//     }
//     cout << i << " "<<endl;
//     reverseOrder(i - 1, n);
// }
// int main(){
//     int n;
//     cout << "enter value of n" << endl;
//     cin >> n;
//     cout << endl;
//     cout << "The reverse order from " << n << " to 1 is: " << endl;
//     reverseOrder(n, n);
//     return 0;
// }

//using backtracking(n to 1):
#include<iostream>
using namespace std;
void reverseOrder(int i, int n){
    if(i>n){
        return;
    }
    reverseOrder(i + 1, n);
    cout << i << " "<<endl;
}
int main(){
    int n;
    cout << "enter value of n" << endl;
    cin >> n;
    cout << endl;
    cout << "The reverse order from " << n << " to 1 is: " << endl;
    reverseOrder(1, n);
    return 0;
}
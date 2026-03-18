// #include<iostream>
// using namespace std;

// void addition(int i, int sum){
//     if (i<1){
//         cout << sum;
//         return;
//     }
//     addition(i - 1, sum + i);
// }

// int addition2(int n){
//     if(n==0) return 0;
//     return n + addition2(n - 1);
// }

// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin >> n;
//     addition(n, 0);
//     cout << endl;

//     cout << addition2(n);
//     return 0;
// }

// factorial
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1) return 1;
    return n * factorial(n - 1);
}

int main(){
    int n;
    cout << "enter the value od n: ";
    cin >> n;

    cout << factorial(n);
    return 0;
}
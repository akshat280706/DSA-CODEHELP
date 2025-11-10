//when a fxn calls itself unless a specified condition is meet, its called recursion
//base case--> where to stop

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if (n==0)
//     {
//         return 1;
//     }
//     int smaller= factorial(n-1);
//     int bigger=n*smaller;
//     return bigger;
// }
// int main(){
//     int n;
//     cout << "enter value of n: " << endl;
//     cin >> n;
//     int ans = factorial(n);
//     cout << ans;
//     return 0;
// }

//2^comething
// #include<iostream>
// using namespace std;
// int power(int n){
//     if (n==0)
//     {
//         return 1;
//     }
//     return 2 * power(n - 1);
// }
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int ans=power(n);
//     cout << ans;
//     return 0;
// }

//n to 1
#include<iostream>
using namespace std;

void print(int n){
    if (n==0)
    {
        return;
    }
    cout << n << " ";
    print(n - 1);
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    print(n);
    return 0;
}




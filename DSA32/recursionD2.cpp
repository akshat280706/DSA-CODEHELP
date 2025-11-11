// // //fibonacci
// #include <iostream>
// using namespace std;
// int fibonacci(int n){
//     //base case:
//     if (n==0)
//     {
//         return 0;
//     }
//     if (n==1)
//     {
//         return 1;
//     }
//     int ans = fibonacci(n - 1) + fibonacci(n - 2);
//     return ans;
// }
// int main(){
//     int n;
//     cout<< "enter the value of n: ";
//     cin >> n;
//     int result = fibonacci(n);
//     cout << "fibonacci (" << n << ") is: " << result << endl;
//     return 0;
// }

// int climbStairs(int n){
//     if(n<0){
//         return 0;
//     }
//     if (n==0)
//     {
//         return 1;
//     }
//     return climbStairs(n - 1) + climbStairs(n - 2);
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the value of n : ";
//     cin >> n;

//     int ans= climbStairs(n);
//     cout << ans;
//     return 0;
// }

#include<iostream>
using namespace std;
void sayDigit(int n, string arr[]){
    if(n==0){
        return;
    }
    int digit = n % 10;
    n = n / 10;
    sayDigit(n,arr);
    cout << arr[digit] << endl;
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four",
                      "five", "six", "seven", "eight", "nine"};

    cout << endl;
    sayDigit(n, arr);
    cout << endl;
    return 0;
}

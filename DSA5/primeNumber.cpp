// primeNumber
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the value of n\n";
    cin>>n;

    if(n<=1){
        cout << n << " is not a prime number";
        return 0;
    }
    bool isPrime=1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            isPrime=0;
            break;
        }
        
    }
    if (isPrime==0)
    {
        cout << n << " is not a prime number";
    } else{
        cout << n << " is a prime number";
    }
    return 0;
}
// combination
// nCr=(n!)/(r!)(n-r)!
#include <iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int nCr(int n, int r){
    int numerator = fact(n);
    int denominator = fact(r) * fact(n - r);
    int answer= numerator/denominator;
    return answer;
}

int main(){
    int n, r;
    cout << "enter the value of n ";
    cin >> n;
    cout << "enter the value of r: ";
    cin >> r;
    if (r>n)
    {
        while(r>n) {
        cout << "value of r cannot be greater than n, try again:" << endl;
        cout << "enter the value of n ";
        cin >> n;
        cout << "enter the value of r: ";
        cin >> r;
    } 
}
    cout << n<<"C"<<r<<" value is:" << nCr(n, r) << endl;
    return 0;
}

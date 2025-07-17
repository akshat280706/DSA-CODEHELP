// #fibonacci series:
// 0,1,1,2,3,5,8,13,21...

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin >> n;
    cout << endl;

    int a = 0, b = 1;
    cout << a << " " << b<< " ";

    for (int i = 0; i <= n; i++)
    {
        int nextNumber = a + b;
        // cout << a << b << " ";
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
    return 0;
}

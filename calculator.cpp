#include<iostream>
using namespace std;
int main(){

    cout << endl;
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin >> a;
    cout<<endl;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    cout << endl;

    char op;
    cout << "enter the operation to be performed: " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The answer for a+b is: " << a + b << endl;
        break;
    case '-':
        cout << "The answer for a-b is: " << a - b << endl;
        break;
    case '*':
        cout << "The answer for a*b is: " << a * b << endl;
        break;
    case '/':
        cout << "The answer for a/b is: " << a / b << endl;
        break;
    case '%':
        cout << "The answer for a%b is: " << a % b << endl;
        break;
    
    default:
        cout << "please enter a valid operation(+,-,*,/,%)" << endl;
        break;
    }

    return 0;
}
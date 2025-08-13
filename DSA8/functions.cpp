// // #basic function(power)
// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     int ans = 1;
//     for (int i = 0; i < b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }
// int main(){
//     int a, b;
//     cout << "enter 2 nums: ";
//     cin >> a >> b;
//     cout << "the answer is: "<< power(a, b);
//     return 0;
// }


#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0; // number is odd
        // return -1;
    }
    else{
        return 1; //even
    }
}
int main(){
    int num;
    cout << "enter the number to check: ";
    cin >> num;

    if(isEven(num)){
        cout << "the number:"<<num<<" is even" << endl;
    }
    else{
        cout << "the number:"<<num<<" is odd" << endl;
    }
    return 0;
}


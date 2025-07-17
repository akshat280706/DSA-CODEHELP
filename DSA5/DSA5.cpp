// #include<iostream>
// using namespace std;
// int main(){
// int i=5;
// int a=6;
// int b,c;
// b=a+(i++);//value of i used is 6, then i gets incremented
// c=a+(++i);//13 value of i used is 7 as i gets incremented first and then added 
// cout<<b<<endl;//11
// cout<<c<<endl;//13
// cout<<i--<<endl;//7
// cout<<i++<<endl;//6
// cout<<++i<<endl;//8
// cout<<--i<<endl;//7
// cout<<i<<endl;//7
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type value of n"<<endl;
// cin>>n;
// int sum=0;
// for(int i=1; i<=n; i++){
//     sum=sum+i;
// }
// cout<<"the value of sum is:"<<sum<<endl;
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int b=6;
//     int i;
//     cout<<"a & b: "<<(a & b)<<endl;
//     cout<<"a | b: "<<(a | b)<<endl;
//     cout<<"~a: "<<~a<<endl;
//     cout<<"a ^ b: "<<(a ^ b)<<endl;
//     cout<<"17 left shit 1: "<<(17<<1)<<endl;
//     cout<<"17 left shit 2: "<<(17<<2)<<endl;
//     cout<<"17 right shit 1: "<<(17>>1)<<endl;
//     cout<<"17 right shit 2: "<<(17>>2)<<endl;
//     // cout<<"post increment: "<< (i=a++)<<endl;
//     // cout << "new value of a after post increment: " << a << endl;
//     // cout<<"pre increment: "<< (i=++a)<<endl;
//     // cout << "new value of a after pre increment: " << a << endl;
//     // cout<<"post decrement: "<< (i=a--)<<endl;
//     // cout << "new value of a after post decrement: " << a << endl;
//     cout<<"pre decrement: "<< (i=--a)<<endl;
//     cout << "new value of a after pre decrement: " << a << endl;
//     return 0; 
// }

// left shift and right shift operator
// for positive numbers, padding is always with 0
// for negetive number, it is compiler dependent

// for left shift, mostly it gets multipluied with 2
// for right shift mostly it gets divide with 2(if 1 time left shift then 1 time divide, if 2 times then 2 times divide by 2 i.e etc like wise)

// increment and decrement
// i++ ---> post increment; // first value is used then it is updated
// ++i ---> pre increment // first vaue is uodated and then it is used
// i-- ---> post decrement // firt value is used and then is decremented by one
// --i ---> pre decrement // first value is decremented by one and then it is used

//#imp code:
//hint: wont check value of b as for || only one of the conditions must be true
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 1, b = 2;
//     if (a-- > 0 || ++b>2)
//     {
//         cout << "stage1-inside if" << endl;
//     } else{
//         cout << "stage2-inside else" << endl;
//     }
//     cout << a << " " << b << endl; // a=0, b=same
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     cout << "\n";
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << " " << endl;
//     }
//     return 0;
// }

// break: takes out of a loop

// sum of 1 to n numbers:
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n: "<<endl;
//     cin >> n;
//     cout << endl;
//     int sum = 0; 
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
//     cout << sum << endl;
//     return 0;
// }


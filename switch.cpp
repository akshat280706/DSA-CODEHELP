// switch (expression)
// {
// case constant expression:
//     /* code */
//     break;

// default:
//     break;
// }

// constants can be integers or character value

// #include<iostream>
// using namespace std;
// int main(){
//     // int num = 1;
//     // char ch = 'a';
//     char ch1 = 'b';
//     cout<<endl;
//     // switch (num)
//     // switch (ch)
//     switch (ch1)
//     {
//     case 1:
//         cout << "this is case 1";
//         break;
//     case 2:
//         cout << "this is case 2";
//         break;
//     case 'b':
//         cout << "this is using char";
//         break;
//     default:
//         cout << "this is the default case";
//         break;
//     }
//     return 0;
// }

// continue is not valid in case of switch statement


// total 1330rs--> how many 100rs,50rs,20rs,1rs notees are needed(using switch)

// 1.Using switch statement:
// #include<iostream>
// using namespace std;
// int main(){
//     int amount;
//     int currency = 0;
//     cout<<"enter the amount: "<<endl;
//     cin >> amount;
//     int count100 = 0, count50 = 0, count20 = 0, count1 = 0;
//     if (amount>=100)
//     {
//         currency = 100;
//     }
//     else if (amount>=50)
//     {
//         currency = 50;
//     }
//     else if (amount>=20)
//     {
//         currency = 20;
//     }
//     else if (amount>=1)
//     {
//         currency = 1;
//     }    
//     switch (currency)
//     {
//     case 100:
//         count100 = amount / 100;
//         amount = amount % 100;
//     case 50:
//         count50 = amount / 50;
//         amount = amount % 50;
//     case 20:
//         count20 = amount / 20;
//         amount = amount % 20;
//     case 1:
//         count1 = amount / 1;
//         amount = amount % 1;
//     }
//     cout << "No of 100rs Notes are: " << count100 << endl;
//     cout << "No of 50rs Notes are: " << count50 << endl;
//     cout << "No of 20rs Notes are: " << count20 << endl;
//     cout << "No of 1rs Notes are: " << count1 << endl;
//     return 0;
// }







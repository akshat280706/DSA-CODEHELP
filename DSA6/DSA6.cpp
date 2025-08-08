// decimal to binary conversion using code
// while (n!=0)
// {
    // bit = n&1; //checks if the last bit is 0 or 1, if 1 then odd or even
    // n = n >> 1; //n right shift 1(right shift is simply divide by2)
// }

// will reverse the answer:
// answer=(digit*10^i)+answer

// for same flow(i.t not reverse answer:)
// answer=(answer*10)+digit


// #include<iostream>
// using namespace std;
// #include<math.h>
// int main(){
//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     int answer = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n&1;
//         answer = (bit * pow(10,i)) + answer;
//         n = n >> 1;
//         i++;
//     }
//     cout << "the answer is:" << answer<<endl;
//     return 0;
// }

//negetive number(decimal to binary conversion:
// #include<iostream>
// using namespace std;
// int main(){

//     int n; 
//     cout<<"enter a negetive number";
//     cin >> n;
//     if (n>=0)
//     {
//         cout << "enter a negetive number only and type again";
//         return 1;
//     }
//     else{
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//         }
        
//     }
    

//     return 0;
// }

#include<iostream>
#include<math.h>
using namespace std;
int main(){


    int n;
    cout<<"enter the value to be converted: ";
    cin >> n;
    int answer = 0;
    int i = 0;
    while(n!=0){
        int digit = n&1;
        if (digit == 1)
        {
            answer = answer + pow(2, i);
        }
         n = n / 10;
         i++;
    }
    cout << answer << endl;

    return 0;
}
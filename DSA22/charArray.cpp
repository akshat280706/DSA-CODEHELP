// // one dimensional character array
// // cin-->stops execution when a space is given in between

// #include<iostream>
// using namespace std;
// int main(){

//     char name[20];
//     cout << "enter your name: ";
//     cin >> name;
//     //akshat---> akshat gets printed
//     // chauhan akshat-->> only chauhan gets printed

//     // \0 is null character, execution stops if this is added

//     name[2] = '\0'; //now output will be just ak
//     cout << "your name is: " << name << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int totalLength(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}


int main(){
    char name[20];
    cout<<"enter your name: ";
    cin>>name;
    cout << "your name is: " << name << endl;
    int ans = totalLength(name);
    cout<<endl;
    cout << "the length of the typed string is:" << ans << endl;

    return 0;
}
//when a functions calls itself untill a condition is met is called recurssion

//stack space- stores the functions yet to be completed

//print numbers till 3 from 0 using recurssion
#include<iostream>
using namespace std;

int cnt=0;
void print(){
    if (cnt==3)
    {
        return;
    }
    
    cout << cnt << endl;
    cnt++;
    print();
}
int main(){
    print();
    return 0;
}
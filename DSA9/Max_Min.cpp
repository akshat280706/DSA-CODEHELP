#include<iostream>
using namespace std;

int getMIN(int num[], int n){
    int min = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i]<min)
        {
            min = num[i];
        }
    }
    return min;
}
int getMax(int num[], int n){

    int max = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max = num[i];
        }
    }
    return max;
}
int main(){
    int size;
    cout<<"enter the size of the array needed: ";
    cin >> size;

    int num[100];

    //taking input in array:
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << endl;
    cout << "maximum value is: " << getMax(num, size) << endl;
    cout << "minimum value is: " << getMIN(num, size) << endl;
    return 0;
}
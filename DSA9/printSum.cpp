// printing the sum of the values of an array:
#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the number of elements of the array: " << endl;
    cin >> size;
    // cout << "Enter " << size << " elements of the array: " << endl;
    int arr[1000];
    cout << "Enter " << size << " elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    
    cout << "the sum is: " << sum;

    return 0;
}
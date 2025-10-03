#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for (int i = 0; i < n; i+=2)
    {
        if (i+1<n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main(){
    int n;
    cout << "enter the size of the array: " << endl;
    cin >> n;

    int arr[1000];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];       
    }
    cout << endl;
    cout << "The original array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapAlternate(arr, n);
    cout << "the swapped array is: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    return 0;
}

// if wanted to swap two values the we'll store them in a temp varaible
// eg to swap arr[0] and arr[1]
// int temp=arr[1];
// arr[1]=arr[0];
// arr[0]=temp;

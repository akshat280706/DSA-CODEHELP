// scope
#include<iostream>
using namespace std;
void update(int arr[], int n){

    cout << endl;
    cout << "inside the fxn: " << endl;
    //printing the array inside fxn
    arr[0] = {120};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "\ngoing back to main: " << endl;
    cout << endl;
}
int main(){
    int arr[3] = {1, 2, 3};
    update(arr , 3);
    //printing the array
    cout << "The array inside main fxn is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
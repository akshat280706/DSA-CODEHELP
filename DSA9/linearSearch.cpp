// LINEAR SEARCH:

#include <iostream>
using namespace std;
bool tosearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main(){
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[100];
    cout << "enter " << size << " elements of the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to search for: " << endl;
    cin >> key;

    bool found = tosearch(arr, size, key);
    if (found)
    {
        cout << "The key is present" << endl;
    }else{
        cout << "key is not present" << endl;
    }
    return 0;
}
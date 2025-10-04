// // only on monotonic fxns(might be increasing or decreasing)

// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;
//     int mid=(start+end)/2;

//     while (start<=end)
//     {
//         if (arr[mid]==key)
//         {
//             return mid;
//         }
        
//         //go to right wala part
//         if (arr[mid]<key)
//         {
//             start = mid + 1;
//         }
//         //go to left wala part
//         else{
//             end = mid - 1;
//         }
//         mid = (start + end) / 2;
//     }
//     return -1;
// }

// int main(){

//     int EvenArr[6] = {2, 4, 6, 8, 10, 12};
//     int ODDArr[6] = {2, 4, 6, 8, 10};

//     int Evenindex = BinarySearch(EvenArr, 6, 8);
//     int Oddindex = BinarySearch(ODDArr, 5, 8);

//     cout << "the index of 8 is " << Evenindex << endl;
//     return 0;
// }



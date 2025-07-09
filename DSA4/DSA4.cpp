//Pattern 1:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter valuer of n"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<j<<"";
//         j=j+1 ;
//     }
//     cout<<endl;
//     i=i+1;
// }
// return 0;
// }

// Pattern 2:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter valuer of n"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<n-j+1<<"";
//         j=j+1 ;
//     }
//     cout<<endl;
//     i=i+1;
// }
// return 0;
// }

//Pattern 3:
// #include <iostream>
// using namespace std;
// int main(){
//     int count=1;
//     int i=1;
//     int n;
//     cout<<"enter the value of n:"<<endl;
//     cin>>n;
//     while (i<=n)
//     {
//        int j=1;
//        while (j<=n)
//        {
//         cout<<count;
//         count=count + 1;
//         j=j+1;
//        }
//        cout<<endl;
//        i=i+1;
//     }  
// return 0;
// }

//Pattern 4:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout<<i;
//         j=j+1;
//     }
//         cout<<endl;
//         i=i+1;
// }
// return 0;
// }

//Pattern 5:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout<<j;
//         j=j+1;
//     }
//         cout<<endl;
//         i=i+1;
// }
// return 0;
// }

// Pattern 8:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     int count=i;
//     while (j<=i)
//     {
//         cout<<count;
//         count=count+1;
//         j=j+1;
//     }
//         cout<<endl;
//         i=i+1;
// }
// return 0;
// }

// Pattern 9:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout<<i-j+1<<" ";
//         j=j+1;
//     }
//         cout<<endl;
//         i=i+1;
// }
// return 0;
// }

// Pattern 10:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//         char ch='A'+i-1;
//         cout<<ch<<" ";
//         j=j+1;
//     }
//         cout<<endl;
//         i=i+1;
// }
// return 0;
// }

//Pattern 11:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// char start ='A';
// cout<<"type value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<start<<" ";
//         start=start+1;
//         j=j+1;
//     }
//         cout<<endl;
//         i=i+1;
// }
// return 0;
// }

//Pattern 12
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type the value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     char ch='A'+i-1;
//     while (j<=i)
//     {
//         cout<<ch<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// return 0;
// }

//Pattern 15
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type the value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int space=n-i;
//     while (space)
//     {
//         cout<<" ";
//         space=space-1;
//     }
//     int j=1;
//     while (j<=i)
//     {
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i=i+1;
// }
// return 0;
// }

//Pattern 16
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type the value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=n-i+1)
//     {   
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// return 0;
// }

//Pattern 17:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type the value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int space=1;
//     while (space<i)
//     {
//         cout<<" ";
//         space=space+1;
//     }
//     int j=1;
//     while (j<=n-i+1)
//     {   
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// return 0;
// }

//Pattern 19:
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"type the value of n:"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int space=1 ;
//     while (space<= n-i)
//     {
//         cout<<" ";
//         space=space+1;
//     } 
//     int j=1;
//     while (j<i)
//     {   
//         cout<<j;
//         j=j+1;
//     }
//     int start=i-1;
//     while (start)
//     {
//         cout<<start;
//         start= start-1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// return 0;
// }
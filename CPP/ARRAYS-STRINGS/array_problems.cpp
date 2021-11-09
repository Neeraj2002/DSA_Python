#include<iostream>
using namespace std;

//Given an arr arr[] of size n. For every i in 0 to n - 1. O/p max of (a[1], a[2], a[3], ....a[i])
int main(){
    int n;
    cin>>n;
    int arr[n];
    int mx = -199999999;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout<<mx<<endl;
    }
    return 0;
    
    

}
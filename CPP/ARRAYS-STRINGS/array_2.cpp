// Searching the ARRAY
#include<iostream>
#include<climits>
using namespace std;

// LINEAR SEARCH
// int linearsearch(int arr[], int n, int key){
//     for (int i = 0; i < n; i++){
//         if (arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }

// BINARY SEARCH
// Conditions necessary for a binary search: THE ARRAY SHOULD BE SORTED
int BinarySearch(int arr, int n, int key){  
    int s = 0; // The starting point
    int e = n; // The ending point
    while (s <= e){
        int mid = (s+e)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

// LINEAR SEARCH
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++){
//         cin>>arr[n];
//     }
//     int key;
//     cin>>key;

// cout<<linearsearch(arr, n, key)<<endl;
//     return 0;
// }

// BINARY SEARCH
int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

cout<<BinarySearch(arr, n, key)

    return 0;
}
#include<iostream>
using namespace std;

    // SUBARRAY:
    // Continuous part of an array
    // Taking that continuous part and when removed from an array is called an subarray
    // No. of subarray of an array with n element = nC2 + n = n * (n + 1) / 2

    // SUBSEQUENCE: 
    // A subsequence is a sequence that can be derived an array by selecting zero or more elements,
    // without changing the order of the remaining elements.
 
    // Note: Every Subarray is a subsequence but every Subsequence is not a Subarray

// sum of all subarrays which are possible
// Iterating over all subarrays with nested loop
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout<<curr<<endl;
        }
        
    }
    return 0;
}
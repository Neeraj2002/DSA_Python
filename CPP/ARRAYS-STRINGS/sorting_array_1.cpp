#include<iostream>
using namespace std;

// SELECTION SORT
// Find the minimum array element in the unsorted array and swap it with the element in the beginning
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n ; i++){
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n - 1; j++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[j]< arr[i]){
//                     int temp = arr[j]; 
//                     arr[j] = arr[i];
//                     arr[i] = temp;
//                 }
//             }
//         }
//     for (int i = 0; i < count; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// BUBBLE SORT
// Repeatedly swap 2 adjacent elements if they are in wrong order
// If array is of n length then solution will be found  in n-1 iterations
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int counter = 1;
//     while (counter< n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i]>arr[i+1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//             }   
//         }
//         counter++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// INSERTION SORT
// Inserting an element from an unsorted array to its correct poition in the sorted array
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j]>current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
// Array of characters
// Datatype: char
// charr arr[n+1] - n is the size of the array, +1 is for the null character (\0)
using namespace std;


// int main(){
//     char arr[100] = "apple";
//     int i = 0;

//     while (arr[i] != "\0")
//     {
//         cout << arr[i] << endl;
//         i++;
//     }
//     cout << i;
//     return 0;
// }

// I/P O/P in an array

// int main(){
//     char arr[100];
//     cin >> arr;

//     cout << arr[2];
//     return 0;
// }

// PALLINDROME CHECKER

// int main(){
//     int n;
//     cin >> n;
//     char arr[n+1];
//     cin >> arr;

//     bool check = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[n-1-i]){
//             check = 0;
//             break;
//         }
//     }
//     if (check == 1)
//     {
//         cout << "Word is a pallindrome" << endl;
//     }
//     else{
//         cout << "Word is not a pallindrome" << endl;
//     } 
//     return 0;
// }

// Finding the largest word in a sentence
int main(){
    int n;
    cin>> n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxst = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
               maxLen == currLen;
               maxst = st;
            }   
            currLen = 0; 
            st = i+1; 
        }
        else
            currLen++;
        if (arr[i] == '\0')
            break;
        i++;
    }
    cout << maxLen << endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout<< arr[i+maxst];
    }
    
    return 0;
}
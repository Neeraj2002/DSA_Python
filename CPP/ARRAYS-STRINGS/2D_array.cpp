#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    // Any dtatatype can be used used (int arr[n][m], bool arr[n][m], float arr[n][m])
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){

    // RECTANGLE PATTERN!
    /////////////////////////////////////////
    // int rows, cols;
    // cin>>rows>>cols;
    // for (int i = 1; i <= rows; i++){
    //     for (int j = 1; j <= cols; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    /////////////////////////////////////////
    
    // HOLLOW RECTANGLE PATTERN!
    /////////////////////////////////////////
    // int rows, cols;
    // cin>>rows>>cols;
    // for ( int i = 1; i <= rows; i++){
    //     for ( int j = 1; j <= cols; j++){
    //         if (i == 1 || i == rows || j == 1 || j == cols){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    /////////////////////////////////////////
    
    // INVERTED HALF PYRAMID PATTERN!
    /////////////////////////////////////////
    // int n;
    // cin>>n;
    // for (int i = n; i >= 1; i--){
    //     for (int j = 1; j <= i ; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;  
    // }
    /////////////////////////////////////////

    // INVERTED HALF PYRAMID PATTERN!
    /////////////////////////////////////////
    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         if (j<= n-i){
    //             cout<<"  ";
    //         }else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }
    /////////////////////////////////////////

    // HALF PYRAMID PATTERN USING NUMBERS!
    /////////////////////////////////////////
    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 0; j < i; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }
    /////////////////////////////////////////

    // FLOYDS TRIANGLE PATTERN!
    /////////////////////////////////////////
    // int n, count = 1;
    // cin>>n;
    // for (int i = 0; i <= n; i++){
    //     for (int j = 0; j < i; j++){
    //         cout<<" "<<count;
    //         count ++;
    //     }
    //     cout<<endl;
    // }
    /////////////////////////////////////////

    // BUTTERFLY PATTERN FOR n=4!
    //    *             *
    //    * *         * *
    //    * * *     * * *
    //    * * * * * * * *
    //    * * * * * * * *
    //    * * *     * * *
    //    * *         * *
    //    *             *
    /////////////////////////////////////////
    // Logic:
    // 1. Rows= 1 to n
    // 2. Row no.= no. of stars(*)
    // 3. Spaces= 2*n - 2*Row no.

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <=i; j++){
    //         cout<<"* ";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <=space; j++){
    //         cout<<"  ";
    //     }

    //     for (int j = 1; j <=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    // for (int i = n; i >= 1; i--){
    //     for (int j = 1; j <=i; j++){
    //         cout<<"* ";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <=space; j++){
    //         cout<<"  ";
    //     }

    //     for (int j = 1; j <=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    /////////////////////////////////////////

}   

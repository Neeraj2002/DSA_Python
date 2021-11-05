#include<iostream>
using namespace std;

int main(){
    // INVERTED NUMBER PATTERN!
    /////////////////////////////////////////
    // Logic:
    // Rows = Range (1, n)
    // Cols = n + 1 - Row No.
    // Element = Col No is to be printed

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n + 1 - i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    /////////////////////////////////////////
    
    // 0-1 Pattern!
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    /////////////////////////////////////////
    // Logic:
    // Rows = Range (1, n)
    // Cols = 1 to RowNo.
    // Elements = print 1 if(RowNo. + ColNo. = Even)
            //    print 0 if(RowNo. + ColNo. = Odd)

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= i; j++){
    //         if((i + j) % 2 == 0){
    //             cout<<"1";
    //         }
    //         else{
    //             cout<<"0";
    //         }
    //     }
    //     cout<<endl; 
    // }      
    /////////////////////////////////////////

    // RHOMBUS PATTERN!
    //     * * * * *
    //    * * * * *
    //   * * * * *
    //  * * * * *
    // * * * * *
    // Logic:
    // Rows = Range (1, n)
    // Cols = 1st LOOP: n - RowNo.
         //   2nd LOOP: 1 to n
    /////////////////////////////////////////

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n - i; j++){
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= n; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    // }
    /////////////////////////////////////////

    // Number Pattern
    //     1
    //    1 2
    //   1 2 3
    //  1 2 3 4
    // 1 2 3 4 5
    /////////////////////////////////////////
    // Logic:
    // Rows = Range(1 to n)
    // Cols = 1st LOOP: 1 to n - rowno.
    //        2nd LOOP 1 to row no

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 0; j < n - i; j++){
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= i; j++){
    //         cout<<j<<" ";
    //     }
    // cout<<endl;   
    // }
    /////////////////////////////////////////

    // PALLINDROMIC PATTERN
    /////////////////////////////////////////
    //         1
    //       2 1 2
    //     3 2 1 2 3
    //   4 3 2 1 2 3 4
    // 5 4 3 2 1 2 3 4 5
    // Logic:
    // rows = 1 to n
    // cols = 1st LOOP: some space ( 1 t o n - rowno.)
    //        2nd LOOP: k = rowno.(k--) n-rowno. to n
    //        3rd LOOP: k=2 k++ n to n+rowno. -1

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++){
    //     int j;
    //     for ( j = 1; j <= n - i; j++){
    //         cout<<"  ";
    //     }
    //     int k =  i;
    //     for (;j <= n; j++){
    //         cout<<k--<<" ";
    //     }
    //     k = 2;
    //     for (; j <= n + i - 1; j++){
    //         cout<<k++<<" ";
    //     }
    //     cout<<endl;   
    // }
    /////////////////////////////////////////

    // Star Triangle Mirror Pattern!
    // Logic: 
    // Rows = 1 to n
    // Cols = 1st LOOP: 1 to n - rowno.
    //        2nd LOOP: 1 to 2*rowno. - 1

    /////////////////////////////////////////
    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n - i; j++){
    //         cout<<"  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
        
    // for (int i = n; i >= 1; i--){
    //     for (int j = 1; j <= n - i; j++){
    //         cout<<"  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    /////////////////////////////////////////

    // Zig Zag Pattern!
    //     *       *
    //   *   *   *   *
    // *       *       *
    /////////////////////////////////////////
    // Logic:
    // Rows = 1 to 3
    // Cols = if (rowno. + colno.) % 4 == 0  then print "*"

    // int n;
    // cin>>n;
    // for (int i = 1; i <= 3; i++){
    //     for (int j = 1; j <= n ;j++){
    //         if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0)){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }   
    //     }
    //     cout<<endl;     
    // }
    /////////////////////////////////////////
    
    // HOLLOW STAR!
    /////////////////////////////////////////
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j < n - i; j++){
            cout<<" ";
        }
        for (int j = 1; j <= n; j++){
            if ((i + j == 6) || (i + j == 8) || (i + j == 10) || (i + j == 12) || (i + j == 14)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
        
        
    }
    
    /////////////////////////////////////////

    
    

}
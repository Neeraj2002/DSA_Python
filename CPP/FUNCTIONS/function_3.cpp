#include<iostream>
#include<math.h>
using namespace std;

// SUM OF FIRST n NATURALS NUMBERS
int add(int n){
    int sum = 0;
    cin>>n;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

bool check(int x, int y, int z){
    int a = max(x, max(y, z));
    int b, c;

    if (a == x){
        b = y; 
        c = z;
    }
    else if (b == x){
        a = y;
        c = z;
    }
    else{
        a = y;
        b = z;
    }

    if (a = b + c)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int Binary_Decimal(int num){
    int ans = 0;
    int x = 1;
    while (num>0)
    {
        int y = num % 10;
        ans += x * y;
        x += 2;
        num /= 10;
    }
}

///////////////////////////////////
// SUM OF FIRST n NATURALS NUMBERS
// int main(){
//     cout<<add(n);
// }
///////////////////////////////////

///////////////////////////////////
// CHECK PYTHAGOREAN TRIPLET
// int main(){
//     int x, y, z;
//     cin>>x>>y>>z;

//     if (check(x, y, z)){
//         cout<<"Pythagorean Triplet";
//     }
//     else{
//         cout<<"Not a Pythagorean Triplet";
//     }
// }
///////////////////////////////////

///////////////////////////////////
// BINARY TO DECIMAL
// int main(){
//     int n;
//     cin>>n;
//     cout<< Binary_Decimal(n)<<endl;
// }
///////////////////////////////////

int main(){
    int n;
    cin>>n;
    
}

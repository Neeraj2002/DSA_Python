#include<iostream>
#include<math.h>
using namespace std;


int isPrime(int num){
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
    
}

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++){
        cout<<t1<<endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

    }
    return;
}

int fact(int n){
    int factorial = 1;
    for (int i = 2; i <=n; i++){
        factorial *= i;
    }
    return factorial;
    }

int main(){
    //////////////////////////////////
    // PRINT PRIME NOS. 
    // int a, b;
    // cin>>a>>b;

    // for (int  i = a; i <= b; i++){
    //     if (isPrime(i)){
    //         cout<<i<<endl;
    //     }
        
    // }
    //////////////////////////////////

    //////////////////////////////////
    // FINONACCI SEQUENCE (WITHOUT RECURSION)
    // int n;
    // cin>>n;

    // fib(n);
    //////////////////////////////////

    //////////////////////////////////
    // FACTORIAL OF A NO. (WITHOUT RECURSION)
    // int n;
    // cin>>n;

    // int ans = fact(n);
    // cout<<ans<<endl;
    //////////////////////////////////

    //////////////////////////////////
    // Calculate nCr (WITHOUT RECURSION)
    // int n, r;
    // cin>>n>>r;

    // int ans = fact(n)/(fact(r) * fact(n-r));
    // cout<<ans<<endl;
    /////////////////////////////////

    /////////////////////////////////
    // PATTERN QUESTION (PASCAL TRIANGLE)
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1 

    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            int k = fact(i)/ (fact(j) * fact(i-j));
            if (k == 10){
                cout<<"# ";
            }
            else if (k == 15){
                cout<<"@ ";
            }
            else if (k == 20){
                cout<<"$ ";
            }
            else{
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }
    /////////////////////////////////

}


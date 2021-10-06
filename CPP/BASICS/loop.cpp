//  for (initialisation; condition; update){
//      body
//  }

// while (condition is true){
//     body
// }

// do {
//     body
// }while (condition );


#include<iostream>
using namespace std;

int main(){

    // int n;
    // cin>>n;
    
    // int sum=0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;

    // }

    // cout<<sum<<endl;
    

    // int n;
    // cin>>n;

    // while (n>0)
    // {
    //     cout<<n<<endl;
    //     cin>>n;
    // }
    // return 0;

    // int n;
    // cin>>n;

    // do{
    //     cout<<n<<endl;
    //     cin>>n;
    // }
    // while (n>0);
    
    // return 0;

    // BREAK AND CONTINUE
    // int money = 3000;
    // for (int i = 0; i <= 30; i++)
    // {
    //     if (i%2 == 0){
    //         continue;
    //     }
    //     else if (money == 0){
    //         break;
    //     }
    //     cout <<" Go out today"<< endl;
    //     money -= 300;
        
    // }

    // Find PRIME NOS. in a given range

    int a, b;
    cin>>a>>b;

    for (int num = a; num <= b; num++)
    {
        int i = 0;
        for (i = 2; i < num; i++)
        {
            if (num%2 == 0)
            {
                break;
            }
            
        }
        if (num == i)
        {
            cout<<num<<endl;
        }
        
    }
    
    
    
    
}
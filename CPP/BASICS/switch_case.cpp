#include <iostream>
using namespace std;

int main()
{
    // char button;
    // cout << "Enter a button";
    // cin >> button;

    // for (int i = 1; i <= 10; i++)
    // {
    //     cin >> button;
    //     switch (button)
    //     {
    //     case 'a':
    //         cout << "Hello" << endl;
    //         break;

    //     case 'b':
    //         cout << "Namaste" << endl;
    //         break;

    //     case 'c':
    //         cout << "Salut" << endl;
    //         break;

    //     case 'd':
    //         cout << "Hola" << endl;
    //         break;

    //     default:
    //         cout << "I am still learning";
    //         break;
    //     }
    // }

    // Basic Calculator:

    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;

    char ope;
    cout<<"Enter the operator: ";
    cin>> ope;

    switch (ope)
    {
    case '+':
        cout<< a + b;
        break;

    case '-':
        cout<< a - b;
        break;

    case '*':
        cout<< a * b;
        break;

    case '/':
        cout<< a / b;
        break;
    
    default:
        cout<<"The operator is not defined.";
        break;
    }
}
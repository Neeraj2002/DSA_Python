#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int add = 0;
    int og = n;
    while (n > 0)
    {
        int digit = n % 10;
        add += pow(digit, 3);
        n = n / 10;
    }
    if (add == og)
    {
        cout << "Armstrong No." << endl;
    }
    else
    {
        cout << "Not an Armstrong No." << endl;
    }
}
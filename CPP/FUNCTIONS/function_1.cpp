#include <iostream>
using namespace std;

int add(int num1, int num2)
{

    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a = 3;
    int b = 2;
    // Only name of the variables are passed and not their types while calling a function

    // We pass the values not variables themselves. Local variables are created in the function
    // which are destroyed on returning them.
    cout << add(a, b) << endl;
    return 0;
}
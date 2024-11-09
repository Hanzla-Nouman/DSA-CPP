#include <iostream>
using namespace std;

int printhello()
{
    cout << "HELLO" << endl;
    return 5;
}

int sum(int a, int b)
{ // Parameters
    return a + b;
}

int changeX(int n)
{
    n = n * 2;
    cout << n<<endl;
}

int main()
{
    printhello();

    cout << endl;

    cout << printhello();

    cout << endl;

    cout << "Val is " << printhello();

    cout << endl;

    cout << sum(4, 6); // Arguments

    cout << endl;

    int a = 6;  // Pass by value
    changeX(6);
    cout<<a;
    return 0;
}
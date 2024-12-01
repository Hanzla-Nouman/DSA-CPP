#include <iostream>
using namespace std;

void changeX(int *num)
{ // Pass by reference using pointers
    *num = 20;
}

void changeY(int &num)
{ // Pass by reference using alias // & not an address operator; for alias
    num = 20;
}
int main()
{
    int a = 10;
    cout << "Address of a: " << &a << endl;

    int *b = &a;
    cout << "Address of a in pointer b is: " << b << endl;

    float x = 10;
    cout << "Address of x: " << &x << endl;

    float *y = &x;
    cout << "Address of x in pointer y is: " << y << endl;

    // Pointer to Pointer
    float **z = &y;
    cout << "Address of pointer to pointer z is: " << z << endl;

    // Dereference Operator
    cout << "The value at pointer y is: " << *y << endl;

    cout << "The address of z is: " << *z << endl;
    cout << "The value of z is: " << **z << endl;

    // NULL pointer
    int *ptr = NULL;
    cout << "Value of NULL pointer is: " << ptr << endl;

    int number = 10;
    changeX(&number);
    cout << "The value of number inside main fnx:" << number << endl;

    int nmbr = 10;
    changeY(nmbr);
    cout << "The value of nmbr inside main fnx:" << nmbr << endl;

    // Array pointer
    int arr[] = {1, 2, 3, 4, 5};
    cout <<"Adress of 1st element in arr: " <<arr << endl; // Returns the address of fisrt element
    // arr = &a // can't do in case of array

    // Pointer Arithematic
    int p = 10;
    int* address = &p;
    cout<<address<<endl;
    address++; // It will add 4 bytes in address (Because we have int here)
    cout<<address<<endl;
    address += 3;  // It will add size of 3 int in address 
    cout<<address<<endl;

    int val = 8;
    int* valPtr1 = &val;
    int* valPtr2 = valPtr1 + 2;
    
    
    cout<< valPtr2-valPtr1<<endl;  // will get 2 bcs 2 bytes
   // cout<< valPtr2+valPtr1<<endl;  // Cant add two addresses
    cout<< (valPtr2 >= valPtr1)<<endl; 
    cout<< (valPtr2 != valPtr1)<<endl; 

    //Array Pointer
    int array[] = {1,2,3,4,5};
    cout<<*array<<endl;
    cout<<*(array+1)<<endl;
    cout<<*(array+2)<<endl;
    cout<<*(array+3)<<endl;


}
#include <iostream>
using namespace std;
int main()
{
                     // i = 0     ,   j= 1
                     // i = 1     ,   j= 2
                     // i = 2     ,   j= 3
                     // i = 3     ,   j= 4
                     // i = 4     ,   j= 5

  int n =10;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
           cout<<"\t";
        }
        for (int j = 0; j < i; j++)
        {
           cout<<"*\t";
        }
        cout<<endl;

    }
    for (int i = 0; i < n; i++)
    {
       for (int j = i; j < n; j++)
       {
         cout<<"*\t";
       }
        cout<<endl;
    }
    

    return 0;
}
#include<iostream>
using namespace std;

int main(){

      int array[5] , n=5 ,rep;
      cout<<"Enter Five Numbers \n";
      for (int i = 0; i < n; i++)
      {
       cin>>array[i];
      }
      cout<<"Enter Number to be replaced \n";
      cin>>rep;
      for (int i = 0; i < n; i++)
      {
        if (array[i] == rep)
        {
            array[i] = -1;
        }
      }
      for (int i = 0; i < n; i++)
      {
        cout<<array[i]<<" ";
      }
      
      
      

    return 0;
}
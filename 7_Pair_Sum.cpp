#include<iostream>
using namespace std;
int main(){

// int arr[] = {6,4,8,3};
// int tar = 9;
// for (int i = 0; i < 4; i++)                      // O(n^2)
// {
//     for (int j = i+1; j < 4; j++)
//     {
//     // cout<<"["<<arr[i]<<",";
//     //     cout<<arr[j]<<"], ";
//     if (arr[i] + arr[j] == tar)
//     {
//          cout<<arr[i]<<"," <<arr[j] ;
//     }
//     }
// }

// When Array is sorted  // O(n)
int array[4] = {2,6,8,12};
int target = 8;
int i = 0 , j = 3;
int ps ;
while (i<j)
{
     ps = array[i] + array[j];
    if (ps>target)
    {
        j--;
    }else if(ps < target){
      i++;
    }else if(ps==target){
        cout<<"["<<  array[i]<<"," << array[j]<<"]";
        break;
    }
}
    return 0;
}
#include <iostream>
using namespace std;

void changeArr(int arr[],int size){
    cout<<"In function"<<endl;
      for (int i = 0; i < size; i++)
      {
          arr[i] =  arr[i]*2;
      }
      
};

int findTarget(int arr[],int size,int target){  // Linear Serach
     for (int i = 0; i < size; i++)
     {
        if (arr[i] == target)
        {
           return i;
        }
        
     }
     return -1;
}

void reverseArr(int arr[],int size){
      int start = 0, end = size-1;
      while (start<end)
      {
        swap(arr[start],arr[end]);
        start++;end--;
      }
      
}

int main()
{
      int marks[5] = {67,33,90,89,95};
    //   int marks2[] = {67,33,90,89,95};
      marks[1] = 46;
    //   cout<<marks[2]<<endl;
    //   cout<<marks[1]<<endl;

int size = 5;
   int marks3[size];
//    cout<<"Input Numbers: \n";
//     for (int i = 0; i < size ; i++)
//     {
//         cin>>marks[i];
//     }
//     int largest = INT32_MIN;
//     int smallest = __INT_MAX__;
//     int sindex;
//     int lindex;

//     for (int i = 0; i < size ; i++)
//     {
//         if(marks[i] > largest){
//             largest = marks[i];
//             lindex = i;
//         }
//         if(marks[i] < smallest){
//             sindex = i;
//             smallest = marks[i];
//         }

//         // smallest = min(marks[i],smallest);
//         // largest = max(marks[i],smallest);
//     }
//     cout<<"Largest Number: "<<largest <<endl;
//     cout<<"Smallest Number: "<<smallest <<endl;
//     cout<<"Largest Index: "<<lindex <<endl;
//     cout<<"Smallest Index: "<<sindex <<endl;

int nums[] ={12,14,16,18};   // Pass by reference
//  changeArr(nums,4);
//  cout<<"In main"<<endl;
//  for (int i = 0; i < 4; i++)
//  {
//    cout<< nums[i]<<endl;
//  }
 
// cout<< findTarget(nums,4,90);
//     return 0;


int nums2[] ={12,14,16,18};   


reverseArr(nums2,4);
 for (int i = 0; i < 4; i++)
 {
   cout<< nums2[i]<<" ";
 }
cout<<endl;
return 0;
}
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    // Brute Force                       // O(n^2)
int majorityElement(vector<int>& nums) {
        for(int i: nums){
          int count = 0;
          for(int j: nums){
            if(i == j){
                count++;
            }
          }
          if(count>(nums.size()/2)){
             return i;
          }
        }
        return -1;
    }

    // Optimized                      // O(nlogn)
    int majorityElement(vector<int>& nums) {
        int freq = 1 ,ans=nums[0];
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size();i++){
           if(nums[i] == nums[i-1]){
            freq++;
           }else{
            freq = 1;
           }
           if(freq>nums.size()/2){
            ans =  nums[i];
        }
        }
        return ans;
    }


    // Moore's Voting Algorithm           // O(n)
     int majorityElement(vector<int>& nums) {
     int freq = 0, ans = 0;
     for(int  i = 0; i < nums.size();i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;

        }
     }
     return ans;
}
int main()
{
    // Brute Force                       // O(n^2)
    int nums[] = {5, 6, 6, 7, 5, 6, 5, 6, 7, 9, 7, 0, 7, 4, 7, 7, 7};
    int count = 0;
    for (int i = 0; i < 17; i++)
    {
        count = 0;
        for (int j = i + 1; j < 17; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count >= 6)
        {
            cout << nums[i];
        }
    }


    // Optimized                      // O(nlogn)
    int arr[] = {2,2,3,3,3,6,6,6,6,6,6};
    int n = 11;
        int freq = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i-1]<<endl;
        if (arr[i] == arr[i-1])
        {
             freq++;
        }else
        {
            freq =0;
        }
        if (freq >= n/2)
        {
           cout<<arr[i];
        }
         
    }
}
#include <iostream>
using namespace std;
int main()
{

    // SUBARRAY

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int start = 0; start < n; start++) // O(n)^3
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    // MAXIMUM SUBARRAY SUM    // Brute Force Approach  //O(n)^2

    int s = 7;
    int array[7] = {3, -4, 5, 4, -1, 7, -8};
    int currSum = 0;
    int maxSum = 0;

    for (int start = 0; start < s; start++)
    {
        currSum = 0;
        for (int end = start; end < s; end++)
        {
            currSum = currSum + array[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum subarray sum " << maxSum << endl;

      // MAXIMUM SUBARRAY SUM    // Kadane's Algorithm  //O(n)

    int e = 7;
    int a[7] = {3, -4, 5, 4, -1, 7, -8};
    int curSum = 0;
    int maxsum = 0;
    for (int i = 0; i < e; i++)
    {
        curSum += a[i];
        maxsum = max(maxsum,curSum);
        if (curSum<0)
        {
           curSum = 0;
        }
    }
    cout << "Maximum subarray sum using Kadane's Algorithm " << maxsum << endl;
    
    return 0;
}
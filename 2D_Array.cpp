#include <iostream>
using namespace std;

int linearSearch2D(int mat[][3], int rows, int cols, int key)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (mat[i][j] == key)
      {
        cout << i << "," << j << endl;
        return true;
      }
    }
  }
  return false;
}
int maximumRowSum(int mat[][3], int rows, int cols)
{
  int sum = 0, maxSum = 0;
  for (int i = 0; i < rows; i++)
  {
    sum = 0;
    for (int j = 0; j < cols; j++)
    {
      sum = sum + mat[i][j];

      if (sum > maxSum)
      {
        maxSum = sum;
      }
    }
  }
  return maxSum;
}
int maximumColSum(int mat[][3], int rows, int cols)
{
  int sum = 0, maxSum = 0;
  for (int i = 0; i < cols; i++)
  {
    sum = 0;
    for (int j = 0; j < rows; j++)
    {
      sum = sum + mat[j][i];

      if (sum > maxSum)
      {
        maxSum = sum;
      }
    }
  }
  return maxSum;
}
int main()
{
  int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  int cols = 3, rows = 4;

  cout << linearSearch2D(matrix, rows, cols, 8) << endl;
  cout << maximumRowSum(matrix, rows, cols) << endl;
  cout << maximumColSum(matrix, rows, cols) << endl;
}
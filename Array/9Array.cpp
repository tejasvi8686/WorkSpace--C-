#include <iostream>
#include <limits.h>
using namespace std;

int findMinimumInArray(int arr[], int size)
{
    // ans store variable
    int minAns = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}

int main()
{

    int arr[] = {10, 8, 31, 4, 3, 2, 51};
    int size = 7;

    int minimum = findMinimumInArray(arr, size);
    cout << "The smallest element in the array is: " << minimum;
}
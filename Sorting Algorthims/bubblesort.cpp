#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << secondMax(arr, n);
    return 0;
}
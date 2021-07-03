#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int pos;
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int &r : arr)
    {
        cout << r << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int num = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > num)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = num;
    }
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (int &r : arr)
    {
        cout << r << " ";
    }
    return 0;
}
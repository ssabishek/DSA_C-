#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int temp[h + 1];
    while (i <= mid && j <= h)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    for (; i <= mid; i++)
    {
        temp[k++] = arr[i];
    }
    for (; j <= h; j++)
    {
        temp[k++] = arr[j];
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i];
    }
}

void MergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, h);
        Merge(arr, l, mid, h);
    }
}

int main()
{
    int arr[] = {8, 2, 9, 6, 5, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, 0, n - 1);
    for (int &r : arr)
    {
        cout << r << " ";
    }
    return 0;
}
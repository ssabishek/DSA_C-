#include <bits/stdc++.h>
using namespace std;

int secondMax(int arr[], int n)
{
    int large = INT_MIN;
    int sec_large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            sec_large = large;
            large = arr[i];
        }
        else if (arr[i] != large && arr[i] > sec_large)
        {
            sec_large = arr[i];
        }
    }
    return sec_large;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << secondMax(arr, n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

/* For a given array arr[],
returns the maximum j – i such that
arr[j] > arr[i] */
int maxIndexDiff(int arr[], int n)
{
    // Your code here
    int mx = 0;
    int Lmin[n];
    int Rmax[n];
    Lmin[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        Lmin[i] = min(arr[i], Lmin[i - 1]);
    }
    Rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        Rmax[i] = max(arr[i], Rmax[i + 1]);
    }
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (Lmin[i] <= Rmax[j])
        {
            mx = max(mx, j - i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return mx;
}

// Driver Code
int main()
{
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxDiff = maxIndexDiff(arr, n);
    cout << maxDiff;
    return 0;
}

// This code is contributed by rathbhupendra

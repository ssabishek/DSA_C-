#include <bits/stdc++.h>
using namespace std;

int findMaxDiff(int arr[], int n)
{
    //Your code here
    int maxdiff = 0;
    int L[n], R[n];
    stack<int> S;
    for (int i = 0; i < n; i++)
    {
        // Keep removing top element from S while the top
        // element is greater than or equal to arr[i]
        while (!S.empty() && S.top() >= arr[i])
            S.pop();

        // Store the smaller element of current element
        if (!S.empty())
            L[i] = S.top();
        // If all elements in S were greater than arr[i]
        else
            L[i] = 0;
        // Push this element
        S.push(arr[i]);
    }

    while (!S.empty())
    {
        S.pop();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        // Keep removing top element from S while the top
        // element is greater than or equal to arr[i]
        while (!S.empty() && S.top() >= arr[i])
            S.pop();

        // Store the smaller element of current element
        if (!S.empty())
            R[i] = S.top();
        // If all elements in S were greater than arr[i]
        else
            R[i] = 0;
        // Push this element
        S.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        maxdiff = max(maxdiff, abs(L[i] - R[i]));
    }
    return maxdiff;
}

int main()
{
    int arr[] = {2, 4, 8, 7, 7, 9, 3};
    cout << findMaxDiff(arr, 7);
}
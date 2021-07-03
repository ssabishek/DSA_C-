#include <bits/stdc++.h>
using namespace std;
//max value is less than n
int maxLen(int arr[], int N)
{
    // Your code here
    map<int, int> mp;
    int sum = 0;
    int mx = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
        {
            sum--;
        }
        else
        {
            sum++;
        }

        if (sum == 0)
        {
            mx = max(mx, i + 1);
            continue;
        }

        if (mp.find(sum) != mp.end())
        {
            mx = max(mx, i - mp[sum]);
        }
        else
        {
            mp[sum] = i;
        }
    }
    return mx;
}

int main()
{
    int arr[] = {0, 0, 1};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    // vector<int> t = duplicates(arr, arr_size);
    // for (auto x : t)
    // {
    //     cout << x << " ";
    // }
    cout << maxLen(arr, arr_size);
    return 0;
}
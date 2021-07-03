
#include <bits/stdc++.h>
using namespace std;
//max value is less than n
vector<int> duplicates(int arr[], int n)
{
    // code here
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }

    // Now check which value exists more
    // than once by dividing with the size
    // of array
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            ans.push_back(i);
    }
    if (ans.size() == 0)
    {
        ans.push_back(-1);
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 3, 6, 6};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    vector<int> t = duplicates(arr, arr_size);
    for (auto x : t)
    {
        cout << x << " ";
    }
    return 0;
}
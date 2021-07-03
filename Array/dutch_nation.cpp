#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int zi = 0, ti = nums.size() - 1;
    int i = 0;
    while (i <= ti)
    {
        if (nums[i] == 0)
        {
            swap(nums[i], nums[zi++]);
            i++;
        }
        else if (nums[i] == 1)
        {
            i++;
        }
        else
        {
            swap(nums[i], nums[ti--]);
        }
    }
}

int main()
{
    vector<int> v = {2, 0, 2, 1, 1, 0, 2};
    sortColors(v);
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}
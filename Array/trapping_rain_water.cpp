#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        int lm = 0, rm = 0;
        for (int l = i; l >= 0; l--)
        {
            lm = max(lm, height[l]);
        }

        for (int r = i; r < n; r++)
        {
            rm = max(rm, height[r]);
        }

        water += min(lm, rm) - height[i];
    }
    return water;
}

int main()
{
    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(v);
}

#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    int max_area;
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    vector<int> area(n, 0);
    stack<int> st;
    //filling left elements
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && heights[st.top()] > heights[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            left[i] = 0;
            st.push(i);
        }
        else
        {
            left[i] = st.top() + 1;
            st.push(i);
        }
    }
    while (!st.empty())
        st.pop();

    //filling right elements
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && heights[st.top()] > heights[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            right[i] = n - 1;
            st.push(i);
        }
        else
        {
            right[i] = st.top() - 1;
            st.push(i);
        }
    }
    //finding area
    for (int i = 0; i < n; i++)
    {
        area[i] = (right[i] - left[i] + 1) * heights[i];
        max_area = max(max_area, area[i]);
    }
    return max_area;
}

int main()
{
    vector<int> v = {2, 1, 5, 6, 2, 3};
    cout << largestRectangleArea(v);
}
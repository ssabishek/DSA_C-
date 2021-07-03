
#include <bits/stdc++.h>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>> matrix, int r, int c)
{
    vector<int> ans;
    int n = ceil(min(r, c) / 2.0);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < c - i - 1; j++)
        {
            ans.push_back(matrix[i][j]);
        }

        for (int j = i; j < r - 1 - i; j++)
        {
            ans.push_back(matrix[j][c - i - 1]);
        }

        for (int j = c - i - 1; j > i; j--)
        {
            ans.push_back(matrix[r - i - 1][j]);
        }

        for (int j = r - i - 1; j > i; j--)
        {
            ans.push_back(matrix[j][i]);
        }
    }
    return ans;
}
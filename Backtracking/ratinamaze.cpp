#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<string> s;

public:
    void dfs(int i, int j, int n, vector<vector<int>> &m, vector<vector<int>> &vis, string str)
    {
        if (i < 0 || i >= n || j < 0 || j >= n)
            return;
        if (m[i][j] == 0 || vis[i][j] == 1)
            return;
        if (i == n - 1 && j == n - 1)
        {
            s.push_back(str);
            return;
        }
        vis[i][j] = 1;
        dfs(i - 0, j, n, m, vis, str + 'U');
        dfs(i + 1, j, n, m, vis, str + 'D');
        dfs(i, j + 1, n, m, vis, str + 'R');
        dfs(i, j - 1, n, m, vis, str + 'L');

        vis[i][j] = 0;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<vector<int>> vis(n, vector<int>(n));
        string str = "";
        if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
            return s;
        dfs(0, 0, n, m, vis, str);
        sort(s.begin(), s.end());
        return s;
    }
};

int main()
{

    vector<vector<int>> m = {{1, 1, 1, 1},
                             {1, 1, 1, 1},
                             {1, 1, 1, 1},
                             {1, 1, 1, 1}};

    Solution obj;
    vector<string> result = obj.findPath(m, m.size());
    if (result.size() == 0)
        cout << -1;
    else
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
    cout << endl;
}

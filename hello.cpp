#include <bits/stdc++.h>
using namespace std;
int r, c;

void print2d(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (auto x : v[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

void fill(vector<vector<int>> &image, int x, int y, int val)
{
    if (x < 0 || x >= r || y < 0 || y >= c || image[x][y] == 0 || image[x][y] == val)
        return;
    image[x][y] = val;
    fill(image, x - 1, y, val);
    fill(image, x, y + 1, val);
    fill(image, x + 1, y, val);
    fill(image, x, y - 1, val);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    r = image.size();
    if (r == 0)
        return image;
    c = image[0].size();
    fill(image, sr, sc, newColor);
    return image;
}
int main()
{
    // int a = 5, b;
    vector<vector<int>> x = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    vector<vector<int>> t = floodFill(x, 1, 1, 2);
    //sort(x.begin(), x.end());
    print2d(x);
    // b = ++a * a++ * ++a;
    // printf("%d", b);
    return 0;
}

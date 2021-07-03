#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k = n;
        for (int j = i; j > 0; j--)
        {
            cout << k--;
        }

        for (int r = i; r < n; r++)
        {
            cout << k;
        }
        for (int r = n - 1; r > i; r--)
        {
            cout << k;
        }
        for (int j = i; j > 0; j--)
        {
            cout << ++k;
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        int k = n;
        for (int j = i; j > 0; j--)
        {
            cout << k--;
        }

        for (int r = i; r < n; r++)
        {
            cout << k;
        }
        for (int r = n - 1; r > i; r--)
        {
            cout << k;
        }
        for (int j = i; j > 0; j--)
        {
            cout << ++k;
        }
        cout << endl;
    }

    return 0;
}

// 5
// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555
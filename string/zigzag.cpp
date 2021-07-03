#include <iostream>
using namespace std;

string convert(string s, int numRows)
{
    string str = "";
    if (numRows == 1)
        return s;
    int n = s.length();
    int interval = (numRows - 1) * 2;
    for (int i = 0; i < numRows; i++)
    {
        int step = interval - 2 * i;
        for (int j = i; j < n; j += interval)
        {
            str += s[j];
            if (step > 0 && step < interval && j + step < n)
            {
                str += s[j + step];
            }
        }
    }
    return str;
}

int main()
{
    string s = "GEEKSFORGEEKS";
    cout << convert(s, 3);

    return 0;
}

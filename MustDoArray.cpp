#include <bits/stdc++.h>
using namespace std;

void sort0_no(int arr[], int n)
{
    int zdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[zdx]);
            zdx++;
        }
    }
}

int main()
{
    int arr[] = {3, 7, 0, 0, 0, 3, 4, 5};
    sort0_no(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}
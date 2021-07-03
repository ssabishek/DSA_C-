#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int n)
{
    int zidx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0) //what we want in first
        {
            swap(a[i], a[zidx++]);
        }
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {1, 1, 1, 0, 1, 0, 0, 1, 0};
    sort(a, 9);
    printArray(a, 9);
    return 0;
}
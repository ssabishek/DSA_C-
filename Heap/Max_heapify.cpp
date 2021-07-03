#include <bits/stdc++.h>
using namespace std;

int hs;

void max_heapify(int a[], int i) //work only if root node is not following heap property. TC & SC is logn for root...considering each height it becomes o(n)
{
    int large, lc, rc;
    lc = 2 * i + 1;
    rc = 2 * (i + 1);
    if (lc < hs && a[lc] > a[i])
    {
        large = lc;
    }
    else
    {
        large = i;
    }
    if (rc < hs && a[rc] > a[large])
    {
        large = rc;
    }
    if (large != i)
    {
        swap(a[i], a[large]);
        max_heapify(a, large);
    }
}

void array_heapify(int a[])
{
    int limit = hs / 2;
    for (int i = limit - 1; i >= 0; i--)
    {
        max_heapify(a, i);
    }
}

int extract_max(int a[])
{
    int temp = 0;
    if (hs > 0)
    {
        temp = a[0];
        swap(a[0], a[hs - 1]);
        hs = hs - 1;
        max_heapify(a, 0);
    }
    return temp;
}

void increase_key(int a[], int i, int key)
{
    if (a[i] > key)
    {
        cout << "Not possible";
        return;
    }
    a[i] = key;
    int p = (i - 1) / 2;
    while (p >= 0 && a[p] < a[i])
    {
        swap(a[p], a[i]);
        i = p;
        p = (i - 1) / 2;
    }
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void heap_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        swap(a[0], a[hs - 1]);
        hs = hs - 1;
        max_heapify(a, 0);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    hs = sizeof(arr) / sizeof(arr[0]);
    array_heapify(arr);
    //max_heapify(arr, 0);
    //print_array(arr, 10);
    //cout << endl;
    //heap_sort(arr, hs);
    print_array(arr, 10);
    //increase_key(arr, 5, 65);
}
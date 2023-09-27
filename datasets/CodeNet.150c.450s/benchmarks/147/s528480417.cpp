#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int f(int x, int y, int z)
{
    return (x * x) + (y * y) + (z * z) + (x * y) + (y * z) + (z * x);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = 0;
    for (int x = 1; (x * x) <= n; x++)
    {
        for (int y = 1; ((x * x) + (y * y) + (x * y)) <= n; y++)
        {
            for (int z = 1; f(x, y, z) <= n; z++)
            {
                int result = f(x, y, z);
                if (result <= n)
                    arr[result - 1]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}

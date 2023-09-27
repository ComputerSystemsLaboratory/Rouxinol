#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>
#include <utility>
#include <list>
#include <algorithm>
using namespace std;

#define N 1046257

bool checkMax(int x, int w[], int n, int k)
{
    int sum = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + w[i] > x)
        {
            sum = w[i];
            c++;
        }
        else
            sum += w[i];
    }
    if (c < k)
        return true;
    else
        return false;
}

int main()
{
    int n, k, mn = 0, mx = 1, mid;
    cin >> n >> k;
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        mx += w[i];
        mn = max(mn, w[i]);
    }
    mn--;
    while (mx != mn + 1)
    {
        // cout << mx <<" " << mn << "\n";
        mid = (mx + mn) / 2;
        if (checkMax(mid, w, n, k))
            mx = mid;
        else
            mn = mid;
    }

    cout << mx << "\n";

    return 0;
}

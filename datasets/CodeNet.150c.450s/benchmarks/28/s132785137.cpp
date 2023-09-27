//ALDS1_4_C Search - Allocation

#include <iostream>
#define MAX 100000
#define MAX_K 100000
#define MAX_W 10000
using namespace std;
typedef long long llong;

int n, k;
llong T[MAX];

int check(llong P)
{
    int i = 0;
    for (int j = 0; j < k; j++)
    {
        llong s = 0;
        while (s + T[i] <= P)
        {
            s += T[i];
            i++;
            if (i == n)
                return n;
        }
    }

    return i;
}

int solve()
{
    llong left = 0;
    llong right = MAX_K * MAX_W;
    llong mid;
    while (right - left > 1)
    {
        mid = (right + left) / 2;
        int v = check(mid);
        if (v >= n)
            right = mid;
        else
            left = mid;
    }

    return right;
}

int main(int argc, char const *argv[])
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> T[i];
    }
    llong ans = solve();
    cout << ans << endl;
    return 0;
}

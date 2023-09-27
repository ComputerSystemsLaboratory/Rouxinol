#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int x = 1; x < 10000; x++)
    {
        if (x * x > n)
            break;
        for (int y = 1; y < 10000; y++)
        {
            if (y * y > n)
                break;
            for (int z = 1; z < 10000; z++)
            {
                if (z * z > n)
                    break;
                if (x * x + y * y + z * z + x * y + y * z + z * x <= n)
                    a[x * x + y * y + z * z + x * y + y * z + z * x - 1]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    
    return 0;
}
#include <algorithm>
#include <cmath>
#include <cstring>  // memset()
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define ll long long
#define For(i, a, b) for (int i = (int)(a), sz = (int)(b); i < sz; i++)
#define rFor(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fill(a, b) memset(a, b, sizeof(a))
#define IO ios_base::sync_with_stdio(0), cin.tie(0)

const int MAX = 2e2 + 5;

int main() {
    IO;
    int n;
    cin >> n;
    vector<int> v(n + 1);
    For(i, 1, 100) For(j, 1, 100) For(k, 1, 100) {
        int a = i * i + j * j + k * k + i * j + j * k + i * k;
        if (a <= n)
            v[a]++;
    }
    For(i, 1, n + 1) printf("%d\n", v[i]);
    return 0;
}
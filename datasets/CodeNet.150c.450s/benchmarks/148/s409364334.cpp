#include <iostream>
#include <string>
#include <cstring> // memset()
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include<cmath>

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
    int n, cnt[4]{};
    string str, type[4]{"AC", "WA", "TLE", "RE"};
    cin >> n;
    For(i, 0, n) {
        cin >> str;
        For(j, 0, 4) if (str == type[j]) cnt[j]++;
    }
    For(i, 0, 4) printf("%s x %d\n", type[i].c_str(), cnt[i]);
    return 0;
}
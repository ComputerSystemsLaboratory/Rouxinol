#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#define MAX_N 200001

using namespace std;

typedef long long int LL;

struct fenwick_tree {
    int N;
    vector<int> bit;
    fenwick_tree(int num) : bit(num + 1, 0) { N = num; }
    int Sum(int a) {
        int ret = 0;
        for (int x = a; x > 0; x -= x & -x) {
            ret += bit[x];
        }
        return ret;
    }
    void Add(int a, int w) {
        for (int x = a; x <= N; x += x & -x) {
            bit[x] += w;
        }
    }
};

int main() {
    int n, a[MAX_N], b[MAX_N];
    LL ans = 0;
    map<int, int> mp;

    cin >> n;
    fenwick_tree bit(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b+n);

    for (int i = 0; i < n; i++) {
        mp[b[i]] = i+1;
    }
    for (int i = 0; i < n; i++) {
        ans += i - bit.Sum(mp[a[i]]);
        bit.Add(mp[a[i]], 1);
    }

    cout << ans << endl;

    return 0;
}

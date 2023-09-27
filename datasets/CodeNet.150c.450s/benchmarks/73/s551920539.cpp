#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int BIT[1000010], bit_size;

void bit_init(int n) {
    for (int i = 0; i < n+10; i++) BIT[i] = 0;
    bit_size = n;
}

int bit_sum(int n) {
    int ans = 0;
    while (n > 0) {
        ans += BIT[n];
        n &= n-1;
    }
    return ans;
}

void bit_add(int n, int v) {
    while (n <= bit_size) {
        BIT[n] += v;
        n += n & (-n);
    }
}

int main(void) {
    int n, q;
    cin >> n >> q;
    bit_init(n);
    while (q--) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            bit_add(x, y);
        } else {
            cout << bit_sum(y) - bit_sum(x-1) << endl;
        }
    }
    return 0;
}
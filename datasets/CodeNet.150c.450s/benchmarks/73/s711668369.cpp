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
#define MAXN 100010
typedef long long ll;

int n, q;
ll dat[MAXN*4];

void init(int n_) {
    n = 1;
    while (n < n_) n *= 2;
    for (int i = 0; i < 2*n-1; i++) dat[i] = 0;
}

void update(int k, int x) {
    k += n-1;
    dat[k] += x;
    while (k > 0) {
        k = (k-1)/2;
        dat[k] += x;
    }
}

ll getSum(int a, int b, int k, int l, int r) {
    if (r <= a || b <= l) return 0;
    if (a <= l && r <= b) return dat[k];
    ll sl = getSum(a, b, k*2+1, l, (l+r)/2);
    ll sr = getSum(a, b, k*2+2, (l+r)/2, r);
    return (sl+sr);
}

int main(void) {
    cin >> n >> q;
    init(n);
    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            update(x-1, y);
        } else {
            cout << getSum(x-1, y, 0, 0, n) << endl;
        }
//        for (int i = 0; i < 2*n-1; i++) {
//            cout << dat[i] << endl;
//        }
    }
    return 0;
}
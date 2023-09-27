#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_N = 1 << 17;

int n, q, data_sum[2 * MAX_N - 1];

void init(int _n) {
    n = 1;
    while(n < _n) n *= 2;
    for(int i = 0; i < 2 * n - 1; ++i) data_sum[i] = 0;
}

void update(int k, int a) {
    k += n - 1;
    data_sum[k] += a;
    while(k > 0) {
	k = (k - 1) / 2;
	data_sum[k] += a;
    }
}

int query(int a, int b, int k, int l, int r) {
    int mid = (l + r) / 2;
    if(a <= l && r <= b) {
	return data_sum[k];
    } else if(b <= mid) {
	return query(a, b, k * 2 + 1, l, (l + r) / 2);
    } else if(a > mid) {
	return query(a, b, k * 2 + 2, (l + r) / 2 + 1, r);
    } else {
	int lv, rv;
	lv = query(a, b, k * 2 + 1, l, (l + r) / 2);
	rv = query(a, b, k * 2 + 2, (l + r) / 2 + 1, r);
	return lv + rv;
    }
}

int main() {
    int N, Q;
    scanf("%d%d",&N, &Q);
    init(N);
    for(int i = 0; i < Q; ++i) {
	int c, a, b;
	scanf("%d%d%d",&c, &a, &b);
	if(c == 0) {
	    --a;
	    update(a, b);
	} else {
	    --a; --b;
	    printf("%d\n", query(a, b, 0, 0, n - 1));
	}
    }
    return 0;
}
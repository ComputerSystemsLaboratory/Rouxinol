#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF (1 << 30) - 1 + (1 << 30)
#define EPS 1.0e-6

using namespace std;

int n, q;
int mx[1050000];

int init(int n_)
{
	int k = 1;
	while (k < n_)k *= 2;
	for (int i = 0; i < 2 * k; i++) {
		mx[i] = 0;
	}
	return k;
}

void update(int ind, int val)
{
	ind += n;
	mx[ind] = val;
	ind /= 2;
	while (ind > 0) {
		int l = mx[2 * ind];
		int r = mx[2 * ind + 1];
		mx[ind] = min(l, r);
		ind /= 2;
	}
}

int find(int l, int r, int bottom = 0, int top = n, int node = 1)
{
	if (l <= bottom&&top <= r)return mx[node];
	if (top <= l || r <= bottom)return INF;

	int mid = (bottom + top) / 2;
	int lmx = find(l, r, bottom, mid, 2 * node);
	int rmx = find(l, r, mid, top, 2 * node + 1);

	return min(lmx, rmx);
}

void add(int ind, int val)
{
	ind += n;
	mx[ind] += val;
	ind /= 2;
	while (ind > 0) {
		mx[ind] += val;
		ind /= 2;
	}
}

int getSum(int l, int r, int bottom = 0, int top = n, int node = 1)
{
	if (l <= bottom&&top <= r) return mx[node];
	if (top <= l || r <= bottom)return 0;

	int mid = (bottom + top) / 2;

	int lmx = getSum(l, r, bottom, mid, 2 * node);
	int rmx = getSum(l, r, mid, top, 2 * node + 1);

	return lmx + rmx;
}


int main()
{
	cin >> n >> q;

	n=init(n);

	int k, x, y;
	for (int i = 0; i < q; i++) {
		cin >> k >> x >> y;
		x--;
		if (k == 0)add(x, y);
		if (k == 1)cout<<getSum(x, y,0,n,1)<<endl;
	}

	return 0;
}
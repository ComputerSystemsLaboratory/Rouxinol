#include <stdio.h>
#include <sstream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <limits>
#include <iomanip>
#include <ctype.h>
#include <unordered_map>
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, char> pic;
#define bit(x,v) ((ll)x << v)

const ll INF = 1000000007;
const int MAX = 210000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];
void COMinit() {
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < MAX; i++) {
		fac[i] = fac[i - 1] * i % MOD;
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}
}

// 二項係数計算
long long COM(int n, int k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int pr[100010];
void uini(int n) {
	for (size_t i = 0; i <= n; i++)
	{
		pr[i] = i;
	}
}

int parent(int x) {
	if (x == pr[x]) return x;
	return pr[x] = parent(pr[x]);
}

bool unit(int x, int y) {
	int px = parent(x);
	int py = parent(y);

	if (px == py) return false;
	if (px < py) {
		pr[py] = px;
	}
	else {
		pr[px] = py;
	}
	return true;
}

ll bit[200010];
int max_n = 200000;
int pm = 0;
void add(int x) {

	while (max_n >= x)
	{
		bit[x]++;
		x += x & -x;
	}
}
void sub(int x) {
	while (max_n >= x)
	{
		bit[x]--;
		x += x & -x;
	}
}
ll merge(ll *a, int left, int mid, int right) {
	ll n1 = mid - left;
	ll n2 = right - mid;
	vector<int> L(n1 + 1);
	vector<int> R(n2 + 1);
	for (size_t i = 0; i < n1; i++)
	{
		L[i] = a[left + i];
	}
	for (size_t i = 0; i < n2; i++)
	{
		R[i] = a[mid + i];
	}

	L[n1] = INF;
	R[n2] = INF;
	ll i = 0;
	ll j = 0;
	ll r = 0;
	for (size_t k = left; k < right; k++)
	{
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			r += n1 - i;
			j++;
		}
	}
	return r;
}
ll merge2(pair<int,char> *a, int left, int mid, int right) {
	ll n1 = mid - left;
	ll n2 = right - mid;
	vector<pair<int, char>> L(n1 + 1);
	vector<pair<int, char>> R(n2 + 1);
	for (size_t i = 0; i < n1; i++)
	{
		L[i] = a[left + i];
	}
	for (size_t i = 0; i < n2; i++)
	{
		R[i] = a[mid + i];
	}

	L[n1] = make_pair(INF,' ');
	R[n2] = make_pair(INF,' ');
	ll i = 0;
	ll j = 0;
	ll r = 0;
	for (size_t k = left; k < right; k++)
	{
		if (L[i].first <= R[j].first) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			r += n1 - i;
			j++;
		}
	}
	return r;
}
ll mergeSort2(pair<int, char> *a, int left, int right) {
	ll res = 0;
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		res = mergeSort2(a, left, mid);
		res += mergeSort2(a, mid, right);
		res += merge2(a, left, mid, right);
	}
	return res;
}
ll mergeSort(ll *a, int left, int right) {
	ll res = 0;
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		res = mergeSort(a, left, mid);
		res += mergeSort(a, mid, right);
		res += merge(a, left, mid, right);
	}
	return res;
}
int partition(pair<int,char> *a, int p, int r) {
	pair<int, char> x = a[r];
	int i = p - 1;
	for (size_t j = p; j < r; j++)
	{
		if (a[j].first <= x.first) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}
void quick(pair<int, char> *a, int p, int r) {
	if (p < r) {
		int q = partition(a, p, r);
		quick(a, p, q - 1);
		quick(a, q + 1, r);
	}
}
int n;
vector<pii> es[100010];
int ci = 0;
ll P[1000010];
unordered_map<ll, vector<ll>> bitr;
#define key(x) bitr[x][0]
#define left(x) bitr[x][2]
#define right(x) bitr[x][3]
#define parent(x) bitr[x][1]
#define NIL(x) bitr.count(x) == 0

void cenrec(ll k) {
	if (NIL(k)) return;
	cenrec(left(k));
	cout << " " << key(k);
	cenrec(right(k));
}
void fastrec(ll k)
{
	if (NIL(k)) return;
	cout << " " << key(k);
	fastrec(left(k));
	fastrec(right(k));
}
ll root = 0;
void insert(ll v) {
	ll NIL = INF * 2;
	int y = NIL;
	int x = root;
	while (bitr.count(x))
	{
		y = x;
		if (v < key(x)) {
			x = left(x);
		}
		else {
			x = right(x);
		}
	}
	if (y == NIL) {
		bitr[v] = {v,-1,NIL,NIL};
	}
	else if (v < key(y)) {
		left(y) = v;
		bitr[v] = { v,y,NIL,NIL };
	}
	else {
		right(y) = v;
		bitr[v] = { v,y,NIL,NIL };
	}

}

bool find(ll x)
{
	if (NIL(x)) return false;
	return true;
}
void solv() {

	int n;
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		char s[256];
		scanf("%s", s);

		if (strcmp(s,"insert") == 0) {
			ll v;
			cin >> v;
			if (bitr.size() == 0) {
				root = v;
			}

			insert(v);
		}
		else if (strcmp(s, "find") == 0) {
			ll v;
			cin >> v;
			if (find(v)) {
				cout << "yes" << endl;
			}
			else cout << "no" << endl;
		}
		else {
			ci = 0;
			cenrec(root);
			cout << endl;
			ci = 0;
			fastrec(root);
			cout << endl;
		}
	}
}
int main() {
	//	COMinit();
	solv();
	return 0;
}


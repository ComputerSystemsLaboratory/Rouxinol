#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>
#include <tuple>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e12;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1

int A[500100];
int cnt = 0;

void Merge(int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	vector<ll> L(n1 + 1, 0), R(n2 + 1, 0);
	for (int i = 0; i < n1; i++)L[i] = A[left + i];
	for (int i = 0; i < n2; i++)R[i] = A[mid + i];
	L[n1] = INF;
	R[n2] = INF;
	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i = i + 1;
		}
		else {
			A[k] = R[j];
			j = j + 1;
		}
		cnt++;
	}
}

void MergeSort(int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		MergeSort(left, mid);
		MergeSort(mid, right);
		Merge(left, mid, right);
	}
}

int n;

int main() {
	cin >> n;
	rep(i, n)cin >> A[i];
	MergeSort(0, n);
	rep(i, n) {
		if (i != n - 1)cout << A[i] << " ";
		else cout << A[i] << endl;
	}
	cout << cnt << endl;
}
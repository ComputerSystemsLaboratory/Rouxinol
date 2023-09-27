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

int n, q;
map<int, vector<string>> vs;
map<int, vector<string>> buf;
map<int, int> id;
vector<pair<string, int>> A;

int Partition(int p, int r) {
	int x = A[r].second;
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j].second <= x) {
			i = i + 1;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

void quickSort(int p, int r) {
	if (p < r) {
		int q = Partition(p, r);
		quickSort(p, q - 1);
		quickSort(q + 1, r);
	}
}

int main() {
	cin >> n;
	rep(i, n) {
		string s;
		int num;
		cin >> s >> num;
		buf[num].push_back(s);
		A.push_back({ s, num });
	}
	quickSort(0, n - 1);
	bool f = 1;
	rep(i, n) {
		if (A[i].first != buf[A[i].second][id[A[i].second]]) {
			//cout << A[i].first << " " << buf[A[i].second][id[A[i].second]] << " " << i << endl;
			f = 0;
			break;
		}
		else id[A[i].second]++;
	}
	if (f)cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	rep(i, n) {
		cout << A[i].first << " " << A[i].second << endl;
	}
}
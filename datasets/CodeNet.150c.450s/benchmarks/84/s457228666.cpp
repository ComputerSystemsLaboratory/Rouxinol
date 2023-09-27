#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
//#define int ll
typedef vector<vector<pair<int, int> > > vvp;
typedef vector<pair<int, int> > vp;
typedef vector<vector<int> > vvi;
typedef vector<int> vi;
typedef vector<vector<ll> > vvl;
typedef vector<ll> vl;
typedef vector<vector<bool> > vvb;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef pair<string, int> psi;
typedef pair<int, int> pii;

struct node {
	int x;
	int y;
};
typedef vector<node> vn;

#define rep(i,s,n) for(int i = (s); i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define yn(f) (f?"yes":"no")
#define YN(f) (f?"YES":"NO")
#define Yn(f) (f?"Yes":"No")
#define puts(s) cout<<(s)<<endl
#define len(x) int(x.size())
#define inf (1000000007)
#define ll_inf (1000000000000000007)
#define nil -1

class disjoint_set {
public:
	vi p, rank;
	disjoint_set(int size) {
		p.resize(size, 0);
		rank.resize(size, 0);
		for (int i = 0; i < size; i++)makeSet(i);
	}
	void makeSet(int x) {
		p[x] = x;
		rank[x] = 0;
	}
	bool same(int x, int y) {
		return findSet(x) == findSet(y);
	}
	void unite(int x, int y) {
		link(findSet(x), findSet(y));
	}
	void link(int x, int y) {
		if (rank[x] < rank[y]) {
			p[x] = y;
		}
		else {
			p[y] = x;
			if (rank[x] == rank[y]) {
				rank[x]++;
			}
		}
	}
	int findSet(int x) {
		if (x != p[x]) {
			p[x] = findSet(p[x]);
		}
		return p[x];
	}
};
void space_endl(int i, int n) {
	if (i == n) {
		cout << endl;
	}
	else {
		cout << " ";
	}
}
int gcd(int a, int b) {//log N
	return (b == 0) ? a : gcd(b, a % b);
}
int lcm(int a, int b) {//log N
	return (a * b) / gcd(a, b);
}
int extgcd(int a, int b, int& x, int& y) {// log N
	int d = a;
	if (b == 0) {
		x = 1;
		y = 0;
	}
	else {
		d = extgcd(b, a % b, y, x);
		y -= (a / b) * x;
	}
	return d;
}
vi get_primes(int limit) {//N log N
	vb A(limit + 1, true);
	for (int i = 2; i < A.size(); i++) {
		if (!A[i])continue;
		for (int j = i * 2; j < A.size(); j += i)A[j] = false;
	}
	vi B;
	for (int i = 2; i < A.size(); i++)
	{
		if (A[i])B.push_back(i);
	}
	return B;
}
bool is_prime(int num) {// sqrt(N)
	if (num < 2)return false;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
long long merge_count(vi& A) {//N**2
	int n = A.size();
	if (n <= 1)return 0;
	long long count = 0;
	int mid = n / 2;
	vector<int> B(A.begin(), A.begin() + mid);
	vector<int> C(A.begin() + mid, A.end());
	count += merge_count(B);
	count += merge_count(C);
	B.push_back(inf);
	C.push_back(inf);
	int B_i = 0;
	int C_i = 0;
	for (int i = 0; i < n; i++){
		if ( B[B_i] <= C[C_i]) {
			A[i] = B[B_i++];
		}
		else {
			count += n / 2 - B_i;
			A[i] = C[C_i++];
		}
	}
	return count;
}
signed main() {
	int n;
	cin >> n;
	vi A(n);
	rep(i, 0, n)cin >> A[i];

	puts(merge_count(A));
}


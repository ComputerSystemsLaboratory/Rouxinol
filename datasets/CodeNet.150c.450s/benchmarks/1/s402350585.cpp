#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

#define dump(o) { cerr << #o << " " << o << endl; }
#define dumpc(o) { cerr << #o; for (auto e : (o)) cerr << " " << e; cerr << endl; }
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

int lis(const vector<int> &A) {
	int n = A.size();
	vector<int> a(n, INF);
	for (int i = 0; i < n; i++)
		*lower_bound(a.begin(), a.end(), A[i]) = A[i];
	return find(a.begin(), a.end(), INF) - a.begin();
}

int main() {
	int n; cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	cout << lis(A) << endl;
	return 0;
}
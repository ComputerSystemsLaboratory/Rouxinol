#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using msi = map<string, int>;
using mii = map<int, int>;
using psi = pair<string, int>;
using pii = pair<int, int>;
using vlai = valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1E9
#define EPS 1E-9
#define MOD (1E9+7)
#define PI 3.1415926535897932384626433832795

std::ostream &operator<<(std::ostream &out, const vector<int> &tgt)
{
	string s;
	for (int i = 0; i<tgt.size(); i++) {
		s += (to_string(tgt[i]) + ((i != tgt.size() - 1) ? " " : ""));
	}
	out << s;
	return out;
}

vi CountingSort(vi a ,int k) {
	int n = a.size();
	vi b(n), c(k);
	rep(i,n) {
		c[a[i]]++;
	}
	for (int i =1; i < k; i++) {
		c[i] += c[i-1];
	}
	//cout << c << endl;
	for (int i = n - 1; i >= 0; i--) {
		//cout << "i=" << i << "  b[" << c[a[i]]-1 << "]="<<a[i] << endl;
		b[c[a[i]]-1] = a[i];
		c[a[i]]--;
	}
	return b;
}

int main() {
	int n,in;
	vi a;
	cin >> n;
	rep(i, n) {
		cin >> in;
		a.push_back(in);
	}
	vi b=CountingSort(a, *max_element(all(a))+1);
	cout << b << endl;
}

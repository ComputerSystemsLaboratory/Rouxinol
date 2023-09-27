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

vi v;
int n;

void maxHeapify(int i){
	i++;
	int l = i * 2;
	int r = i * 2 + 1;
	int largest;
	if (l <= n && v[l - 1]>v[i - 1]){
		largest = l;
	}
	else largest = i;
	if (r <= n && v[r - 1]>v[largest - 1]){
		largest = r;
	}
	if (largest != i) {
		swap(v[i-1], v[largest-1]);
		maxHeapify(largest - 1);
	}
}


int main() {
	int in;
	cin >> n;
	rep(i, n) {
		cin >> in;
		v.push_back(in);
	}
	for (int i = n / 2-1; i >= 0; i--) {
		maxHeapify(i);
	}
	for (auto x : v) {
		cout << " " << x;
	}
	cout << endl;


}

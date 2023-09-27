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
std::ostream &operator<<(std::ostream &out, const vector<char> &tgt)
{
	string s;
	for (int i = 0; i<tgt.size(); i++) {
		string str(1, tgt[i]);
		s += (str + ((i != tgt.size() - 1) ? " " : ""));
	}
	out << s;
	return out;
}

vi a,c;
vector<char> b;
bool sw = true;

int partition(int p,int r) {
	int cnt = 0;
	int x = a[r];
	int i = p-1;
	for (int j = p; j < r; j++) {
		if (a[j] <= x) {
			i++;
			swap(a[i], a[j]);
			swap(b[i], b[j]);
			swap(c[i], c[j]);
		}
	}
	swap(a[i + 1], a[r]);
	swap(b[i + 1], b[r]);
	swap(c[i + 1], c[r]);
	return i +1;
}


void quickSort(int p, int r) {
	if (p < r) {
		int q = partition(p, r);
		quickSort(p, q - 1);
		quickSort(q + 1, r);
	}
}


int main() {
	char ch;
	int n,in;
	cin >> n;
	rep(i, n) {
		cin >> ch;
		cin >> in;
		a.push_back(in);
		b.push_back(ch);
		c.push_back(i);
	}
	quickSort(0,n-1);
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i - 1] && c[i] < c[i - 1])sw = false;
	}
	cout << (sw ? "S" : "Not s") << "table" << endl;
	rep(i, n) {
		cout << b[i] << " " << a[i] << endl;
	}
}


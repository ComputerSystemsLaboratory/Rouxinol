#include<bits/stdc++.h>
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
#define MOD (ll)(1E9+7)
#define PI 3.1415926535897932384

template <class T>ostream &operator<<(std::ostream &o, const vector<T> &v)
{
	rep(i, v.size()) {
		o << (i > 0 ? " " : "") << v[i];
	}
	return o;
}



int main() {
	int n,m,flag=0,flag2=0;
	cin >> n;
	vector<string> key(n);
	rep(i, n) {
		cin >> key[i];
	}
	cin >> m;
	int count = 0;
	string str;
	rep(i, m) {
		cin >> str;
		for (auto c : key) {
			count++;
			if (str == c) {
				if (flag == 0) {
					cout << "Opened by " << c << endl;
					flag = 1;
					flag2 = 1;
					break;
				}
				else {
					cout << "Closed by " << c << endl;
					flag = 0;
					flag2 = 1;
					break;
				}
			}
		}
		if (count == n&&flag2==0) {
			cout << "Unknown " << str << endl;
		}
		count = 0;
		flag2 = 0;
	}

}


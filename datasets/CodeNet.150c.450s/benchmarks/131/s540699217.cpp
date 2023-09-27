#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))
#define xyrange(x, minX, maxX, y, minY, maxY) (range(x, minX, maxX) && range(y, minY, maxY))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;
typedef vector<PII> VPII;


const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};
const int INF = INT_MAX / 2;

string to_s(int value, int len) {
	stringstream ss;
	ss << value;
	string s = ss.str();
	string zero = "";
	rep (i, len - s.length()) {
		zero += '0';
	}
	return zero + s;
}

int max_value(string s) {
	sort(rall(s));
	stringstream ss;
	ss << s;
	int res;
	ss >> res;
	return res;
}

int min_value(string s) {
	sort(all(s));
	stringstream ss;
	ss << s;
	int res;
	ss >> res;
	return res;
}

int check(VI vec, int value) {
	rep (i, vec.size()) {
		if (vec[i] == value) return i;
	}
	return -1;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	int a, l;
	while (1) {
		cin >> a >> l;
		if (a == 0 && l == 0) break;
		VI vec;
		vec.pb(a);
		int value = a;
		rep (i, 21) {
			string s = to_s(value, l);
			value = max_value(s) - min_value(s);
			int idx;
			if ((idx = check(vec, value)) != -1) {
				cout << idx << " " << value << " " << i - idx + 1 << endl;
				break;
			}
			vec.pb(value);
		}
	}
	return 0;
}
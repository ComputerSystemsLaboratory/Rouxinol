#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a); i>n; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
class Dice{
public:
	vi n;
	int top;
	Dice(){
		n.resize(6);
		top = 0;
	}
	void roll(char c){
		int tmp = n[0];
		if( c == 'E' ){
			n[0] = n[3];
			n[3] = n[5];
			n[5] = n[2];
			n[2] = tmp;
		}else if( c == 'W' ){
			n[0] = n[2];
			n[2] = n[5];
			n[5] = n[3];
			n[3] = tmp;
		}else if( c == 'N' ){
			n[0] = n[1];
			n[1] = n[5];
			n[5] = n[4];
			n[4] = tmp;
		}else if( c == 'S' ){
			n[0] = n[4];
			n[4] = n[5];
			n[5] = n[1];
			n[1] = tmp;
		}
	}
	void input() {rep(i, 0, 6) cin >> n[i];}
	void output() {P(n[top]);}
};
vector<vi> saikoro = {
		{-1, 3, 1, 4, 2, -1},
		{2, -1, 5, 0, -1, 3},
		{4, 0, -1, -1, 5, 1},
		{1, 5, -1, -1, 0, 4},
		{3, -1, 0, 5, -1, 2},
		{-1, 2, 4, 1, 3, -1}
};
inline int f(Dice d) {
	int u, m; cin >> u >> m;
	rep(i, 0, 6) {
		if(d.n[i] != u) continue;
		rep(j, 0, 6) {
			if(d.n[j] != m) continue;
			return saikoro[j][i];
		}
	}
	return 0;
}
int main() {
	Dice d;
	d.input();
	int n; cin >> n;
	rep(i, 0, n) {
		P(d.n[f(d)]);
	}
	return 0;
}
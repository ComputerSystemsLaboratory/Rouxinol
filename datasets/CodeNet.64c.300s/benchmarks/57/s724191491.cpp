#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=a;i<b;++i)
#define for_rev(i,a,b) for(int i=a;i>=b;--i)
#define allof(a) a.begin(),a.end()
#define minit(a,b) memset(a,b,sizeof(a))
#define size_of(a) (int)a.size()

typedef long long lint;
typedef double Double;
typedef pair< int, int > pii;

typedef vector< int > Array;
typedef vector< Array > Matrix;

inline int POPCNT(int _x) { return __builtin_popcount(_x); }

int R, C;
int table[11][10010];
int b_table[100010];

int calc_senbei(int S) {
	int res = 0;
	int flip = (1 << R) - 1;
	
	for_(i,0,C) {
		int i_bit = b_table[i];
		int xor_bit = i_bit ^ S;
		res += max(R - POPCNT(xor_bit), R - POPCNT(xor_bit ^ flip));
	}
	
	return res;
}

void solve() {
	for_(i,0,C) {
		int i_bit = 0;
		for_(j,0,R) if (table[j][i] == 1) i_bit |= 1 << j;
		b_table[i] = i_bit;
	}
	
	int ans = 0;
	
	int rep = 1 << R;
	for_(S,0,rep) {
		ans = max(ans, calc_senbei(S));
	}
	
	cout << ans << endl;
}

int main() {
	while (cin >> R >> C, R) {
		for_(i,0,R) for_(j,0,C) cin >> table[i][j];
		solve();
	}
	return 0;
}
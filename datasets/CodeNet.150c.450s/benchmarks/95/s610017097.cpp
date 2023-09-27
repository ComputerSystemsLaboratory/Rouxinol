// tsukasa_diary's programing contest code template
#include <bits/stdc++.h>
using namespace std;
// define
#define for_(i,a,b) for(int i=a;i<b;++i)
#define for_rev(i,a,b) for(int i=a;i>=b;--i)
#define allof(a) a.begin(),a.end()
#define minit(a,b) memset(a,b,sizeof(a))
#define size_of(a) (int)a.size()
// typedef
typedef long long lint;
typedef double Double;
typedef pair<int, int> pii;
//
typedef vector< int > Array;
typedef vector< Array > Matrix;
typedef vector< Double > DArray;
typedef vector< DArray > DMatrix;
typedef vector< string > SArray;
typedef vector< pii > PArray;
// popcount
inline int POPCNT(int _x) { return __builtin_popcount(_x); }
inline int POPCNT(lint _x) { return __builtin_popcountll(_x); }
// inf
const int iINF = 1L << 30;
const lint lINF = 1LL << 60;
// eps
Double EPS = 1e-9;
// in range
inline bool in_range(int _v, int _mx, int _mi) { return _mi <= _v && _v < _mx; }
inline bool in_range(Double _v, Double _mi, Double _mx) { return -EPS < _v - _mi && _v - _mx < EPS; }
inline bool in_range(int _x, int _y, int _W, int _H) { return 0 <= _x && _x < _W && 0 <= _y && _y < _H; }
// neighbor clockwise
const int DX[4] = {0,1,0,-1}, DY[4] = {-1,0,1,0};
const int DX_[8] = {0,1,1,1,0,-1,-1,-1}, DY_[8] = {-1,-1,0,1,1,1,0,-1};

int n;

void solve() {
	bool lflag = true, rflag = true;
	bool prev = true;
	
	int cnt = 0;
	for_(i,0,n) {
		string s; cin >> s;
		
		if (s == "lu") {
			lflag = !lflag;
		}
		if (s == "ru") {
			rflag = !rflag;
		}
		if (s == "ld") {
			lflag = !lflag;
		}
		if (s == "rd") {
			rflag = !rflag;
		}
		
		if (lflag == rflag) {
			if (lflag != prev) {
				++cnt;
				prev = !prev;
			}
		}
	}
	
	cout << cnt << endl;
}

int main() {
	while (cin >> n, n) {
		solve();
	}
	return 0;
}
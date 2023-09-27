#ifndef _WIN32
#include<iostream>
#endif // !_WIN32

#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<functional>

using namespace std;
#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)

template<typename T>
bool chmin(T& l, T r) {
	bool res = l > r;
	if (res)l = r;
	return res;
}
int f(int x, int y, int z) {
	return x + y + z;
}
int main() {
	int e;
	while (cin>>e,e) {
		int res = e;
		REP(y, 1001)REP(z, 101) {
			int x = e - y*y - z*z*z;
			if (x >= 0)chmin(res, x + y + z);
		}
		cout << res << endl;
	}
	return 0;
}
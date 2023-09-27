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
template<typename T>
istream& operator>>(istream& is, vector<T> &v) {
	for (auto &it : v)is >> it;
	return is;
}
typedef vector<int> V;
int f(int x, int y, int z) {
	return x + y + z;
}
int main() {
	int N, M, P;
	while (cin >> N>>M>>P, N+M+P) {
		V x(N);
		cin >> x;
		int X = 0;
		REP(i, N)X += x[i];
		int Y = X*(100 - P);
		if (x[M - 1] == 0)cout << 0 << endl;
		else cout << Y / x[M - 1]<<endl;
	}
	return 0;
}
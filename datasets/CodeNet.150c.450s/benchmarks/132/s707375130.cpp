#ifndef _WIN32
#include<iostream>
#endif // !_WIN32

#include<algorithm>
#include<vector>
#include<string>
#include<iomanip>
#include<map>
using namespace std;
#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
int main() {
	int n,p;
	while (cin >> n>>p, n+p) {
		int q = p;
		vector<int> a(n);
		for (int i=0;;(i+=1)%=n) {
			if (p == 0) {
				p = a[i]; a[i] = 0;
			}
			else {
				a[i] ++;
				p--;
				if (a[i] == q) { cout << i << endl; break; }
			}
		}
	}

}
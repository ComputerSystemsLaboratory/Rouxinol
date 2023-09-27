#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		int n, p;
		cin >> n >> p;
		if (n == 0) break;
		int* m = new int[n];
		REP(i, n) m[i] = 0;
		for (int i = 0;;++i) {
			int j = i%n;
			if (p == 0) {
				p += m[j];
				m[j] = 0;
			}
			else {
				p--;
				m[j]++;
				if (p == 0) {
					int flag = 1;
					for (int k = 0;k < n;++k) {
						if (m[k] !=0&&k!=j)flag = 0;
					}
					if (flag) {
						cout << j << endl;
						break;
					}
				}
			}
			
		}
		delete[] m;
		
	}
	return 0;
}
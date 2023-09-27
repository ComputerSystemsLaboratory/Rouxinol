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
#define INF 1000000001
#define MOD 1000000007

using namespace std;



int main() {
	int n,cnt=0,flag=1;
	cin >> n;
	REP(i, n) {
		int a;
		cin >> a;
		if (a == 2) {
			flag = 1;
		}
		else {
			FOR(j, 2, sqrt(a) + 1) {
				if (a%j == 0) {
					flag = 0;
					break;
				}
			}
		}
		if (flag) cnt++;
		flag = 1;
	}
	cout << cnt << endl;
	return 0;
}
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<map>
#include<cmath>
#include<queue>	
#include<functional>

using namespace std;

namespace MyLib {
#define ALL(a) a.begin(),a.end()
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) if(1)cout<<#x<<":"<<x<<endl;
#define DEBUG(x) if(1)cout<<#x<<":"<<x<<endl;
#define ll long long
}

using namespace MyLib;



int main() {
	int n;
	while (cin >> n, n) {
		int a, b, c, x,f;
		cin >> a >> b >> c >> x;
		vector<int> y(100);
		REP(i, n) cin >> y[i];
		f = 0;
		REP(i, n) {
			for (;;f++) {
				if (x == y[i])
					break;
				if (f > 10000)
					break;
				x = (a*x + b) % c;
			}
			if (i < n - 1) {
				f++;
				x = (a*x + b) % c;
			}
			if (f > 10000) {
				f = -1;
				break;
			}
		}
		cout << f << endl;

	}

	
}
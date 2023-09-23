#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<map>
#include<cmath>
#include<queue>	

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
	int n, m;
	int p;
	int x[100];
	while (cin >> n >> m >> p, n) {
		REP(i, n)
			cin >> x[i];
		int count = 0;
		REP(i, n)
			count += x[i];
		if (x[m - 1] == 0)
			cout << 0 << endl;
		else
			cout << count*(100 - p) / x[m - 1] << endl;



	}

	return 0;

}
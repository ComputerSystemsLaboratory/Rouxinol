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

string u[256];
string t;

int main() {
	int n, m;
	int open = 1;
	int flag = 0;
	cin >> n;
	REP(i, n)
		cin >> u[i];
	cin >> m;
	REP(i, m) {
		cin >> t;
		REP(j, n)
			if (t == u[j])
				if (open)
					cout << "Opened by " << t << endl, open = 0, flag = 1;
				else
					cout << "Closed by " << t << endl, open = 1, flag = 1;
		if (flag)
			flag = 0;
		else
			cout << "Unknown " << t << endl;

	}


	return 0;
}
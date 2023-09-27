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
	string buf;
	while (cin >> n, n) {
		int lef = 0, rig = 0, pre = 0;
		int co = 0;
		REP(i, n) {
			cin >> buf;
			if (buf == "lu")
				lef = 1;
			else if (buf == "ld")
				lef = 0;
			else if (buf == "ru")
				rig = 1;
			else
				rig = 0;
			if (pre == 0 && lef == 1 && rig == 1)
				pre = 1, co++;
			if (pre == 1 && lef == 0 && rig == 0)
				pre = 0, co++;


		}
		cout << co << endl;


	}
	
}
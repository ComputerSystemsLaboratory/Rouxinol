#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;
 
int main(){

	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		double c1 = (x2 - x1) * (yp - y1) - (y2 - y1) * (xp - x1);
		double c2 = (x3 - x2) * (yp - y2) - (y3 - y2) * (xp - x2);
		double c3 = (x1 - x3) * (yp - y3) - (y1 - y3) * (xp - x3);
		bool flag1 = (c1 < 0.0 && c2 < 0.0 && c3 < 0.0);
		bool flag2 = (c1 > 0.0 && c2 > 0.0 && c3 > 0.0);
		if(flag1 || flag2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}
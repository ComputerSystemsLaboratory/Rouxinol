//template
//include-------------------------------------
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<stack>

using namespace std;

//typedef--------------------------------------
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

#define MP make_pair

//repetition-----------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

//constant-------------------------------------
const double PI = acos(-1.0);

//cout,cin-------------------------------------
#define COUT(x) cout<<(x)<<endl
#define CIN(x) cin>>(x)

int main(){

	double x1, y1, x2, y2, x3, y3, xp, yp;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){

		//A点を原点に移動
		x2 -= x1; y2 -= y1;
		x3 -= x1; y3 -= y1;
		xp -= x1; yp -= y1;

		double k1, k2;
		if (x2 != 0){
			k2 = (yp - (xp / x2)*y2) / (y3 - (x3 / x2)*y2);
			k1 = (xp - k2*x3) / x2;
		}
		else{
			k1 = (xp - (yp / y2)*x2) / (x3 - (y3 / y2)*x2);
			k2 = (yp - k1*y3) / y2;
		}

		if ((k1 > 0) && (k2 > 0) && (k1 + k2 < 1)) COUT("YES");
		else COUT("NO");
	}

	return 0;

}
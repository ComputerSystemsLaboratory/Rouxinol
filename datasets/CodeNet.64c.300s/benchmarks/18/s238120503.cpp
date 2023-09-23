#define _CRT_SECURE_NO_WARNINGS
// #define _USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <locale>
#include <cctype>
#include <sstream>
#include <iomanip>    // 10????????? cout << setprecision(10) << double;
#include <queue>
using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef map<int, int> MAPII;
typedef multimap<int, char, greater<int> > MuMAPIC;
typedef vector<pair<int, int> > VPII;
typedef multimap<int, string, greater<int> > MuMIS;
typedef pair<int, int> P;
typedef pair<int, pair<P, P> > PP;

#define MP make_pair
#define FAST_IO  cin.tie(0); ios::sync_with_stdio(false);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
//for gcc (???test)
// #define FOREACH_IT(it,c) for(typeof(c)::iterator it=(c).begin(); it!=(c).end(); ++it)
//for Visual Studio
#define foreach_it(type,it,c) for(type::iterator it=c.begin(),c_end=c.end();it!=c_end;++it)
// for Debug.
#define DUMP_VVI(b) FOR(i,0,b.size()){FOR(j,0,b[i].size())printf("%d ",b[i][j]);puts("");}
#define D_OUT(str,value) if(dbgF){cout<<str<<" : "<<value<<endl;}
// ??\??????push_back(d)???array[d]???????????????1??????§?????????
// int INPUT_INT() {int d;cin>>d;return d;}
template<class T>T IN() { T d; cin >> d; return d; }
// ??????§????¢??´????°???Greatest Common Divisor???
LL gcd(LL a, LL b) { return (b > 0) ? gcd(b, a%b) : a; }
// ?????°?????¢??????°???Least Common Multiple???
LL lcm(LL a, LL b) { return a / gcd(a, b) * b; }
// Y???´???????????????´?????????
bool uruu(LL Y) { return (((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0) ? true : false); }

// vector???¨???
// vec[i][j]?????????????\????????\?????????¨??????vec???????????????????????????????????????.

#define INF 1000000

// ------------------- include, typedef, define END. -------------------


int n;
LL patternNum = 0;

inline void nextStep(LL nowStep) {

	if (nowStep == n) {
		// GOAL
		patternNum++;
	}
	else if (nowStep>n) {
		// ?????°????????????
		
	}
	else {
		nextStep(nowStep + 1);
		nextStep(nowStep + 2);
		nextStep(nowStep + 3);
	}
}

int main() {

	while (cin >> n, n) {
		nextStep(0);
		int days = ceil(patternNum / 10.0);
		int years = ceil(days / 365.0);
		cout << years << endl;
		patternNum = 0;
	}

	return 0;
}
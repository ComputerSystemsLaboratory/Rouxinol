// #define _CRT_SECURE_NO_WARNINGS
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
#include <iomanip>	// 10????????? cout << setprecision(10) << double;
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
// ??\??????push_back(d)???array[d]???????????????1?????§?????????
// int INPUT_INT() {int d;cin>>d;return d;}
template<class T>T IN() { T d; cin >> d; return d; }
// ?????§??¬?´???°???Greatest Common Divisor???
LL gcd(LL a, LL b) { return (b > 0) ? gcd(b, a%b) : a; }
// ????°???¬?????°???Least Common Multiple???
LL lcm(LL a, LL b) { return a / gcd(a, b) * b; }
// Y??´??????????????´?????????
bool uruu(LL Y) { return (((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0) ? true : false); }

// vector??¨???
// vec[i][j]?????¢?????\????????\????????¨??????vec???????????????????????????????????????.

// ------------------- include, typedef, define END. -------------------

P search(VVI box, LL tileNumber) {
	FOR(i, 0, box.size()) {
		FOR(j, 0, box[i].size()) {
			if (box[i][j] == tileNumber) {
				return MP(i, j);
			}
		}
	}
	return MP(-1, -1);
}

int main() {
	FAST_IO;
	// for D_OUT(str, value)  ... cout<< str <<" : "<< value <<endl;
	bool dbgF = true;

	//??????????????????????????????.


	LL N;
	while (1) {
		LL n, d;
		cin >> N;
		if (N == 0)
			break;
		VVI box(N+400, VI(N+400, -1));

		box[200][200] = 0;
		if (N == 1) {
			cout << 1 << " " << 1 << endl;
			continue;
		}
		FOR(i, 1, N) {
			cin >> n >> d;
			P baseTile = search(box, n);
			if (d == 0) {
				box[baseTile.first][baseTile.second - 1] = i;
			}
			else if (d == 1) {
				box[baseTile.first + 1][baseTile.second] = i;
			}
			else if (d == 2) {
				box[baseTile.first][baseTile.second + 1] = i;
			}
			else if (d == 3) {
				box[baseTile.first - 1][baseTile.second] = i;
			}
		}
		
		
		//DUMP_VVI(box);


		int widthFirst = 1000, widthSecond = -1, heightFirst = 1000, heightSecond = -1;
		FOR(i, 0, box.size()) {
			FOR(j, 0, box[i].size()) {
				if (box[i][j] != -1) {
					widthFirst = min(widthFirst, j);
					widthSecond = max(widthSecond, j);
					heightFirst = min(heightFirst, i);
					heightSecond = max(heightSecond, i);
				}
			}
		}

		cout << (widthSecond - widthFirst+1) << " " << (heightSecond - heightFirst+1) << endl;

	}

	return 0;
}
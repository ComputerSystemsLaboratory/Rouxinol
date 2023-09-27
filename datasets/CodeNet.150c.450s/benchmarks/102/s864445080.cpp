//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }

//math
//-------------------------------------------
template<class T> inline T sqr(T x) { return x*x; }

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI = acos(-1.0);

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
int done[20][20];
char tile[20][20];
int mw,mh;
string temp;
int loopchk(int h,int w,int v);
int check(int h,int w);
int check(int h,int w){
	int posw=114514;
	int posh=114514;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(tile[i][j] == '@'){
				posh = i;
				posw = j;
				break;
			}
		}
		if(posw!=114514){break;}
	}
	return 1+loopchk(posh,posw,0);
}
int loopchk(int h,int w,int v){
	int value=v;
	if(done[h][w] == 1){
		return value-1;
	}else{
		done[h][w] = 1;
	}
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(w + j < 0 || w + j > mw - 1){continue;}
			if(h + i < 0 || h + i > mh - 1){continue;}
			if(i == 0 && j == 0){continue;}
			if(i == -1 && j == -1 || i == -1 && j == 1 || i == 1 && j == -1 || i == 1 && j == 1){continue;} 
			if(tile[h+i][w+j] == '.'){
				value = 1 + loopchk(h + i, w + j,value);
			}
		}
	}
	return value;
}
int main(){
	int w,h;
	while(cin >> w >> h, w != 0 || h != 0){
		mw = w;
		mh = h;
		for(int i=0;i<20;i++){
			for(int j=0;j<20;j++){
				done[i][j] = 0;
				tile[i][j] = '#';
			}
		}
		for(int i=0;i<h;i++){
			cin >> temp;
			for(int j=0;j<w;j++){
				tile[i][j] = temp[j];
			}
		}
		cout << check(h,w) << endl;
	}
	return 0;
}
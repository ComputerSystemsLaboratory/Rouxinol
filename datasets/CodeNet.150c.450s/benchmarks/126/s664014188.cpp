
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
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

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
const double PI  = acos(-1.0);
const int DX[] = {0, 1, 0, -1};
const int DY[] = {-1, 0, 1, 0};


//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int main(int argc, char const *argv[])
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int width, height, n;
	while(true){

		cin >> width >> height;
		if(width == 0 && height == 0){
			break;
		}
		cin >> n;
		vector<PII> bad(n);
		VVI table(height, VI(width));
		REP(i, n){
			int x, y;
			cin >> x  >> y;
			x--;
			y = height - y;
			table[y][x] = -1;
		}
		table[height - 1][0] = 1;
		int value;
		for(int y = height -1; y >= 0; --y){
			REP(x, width){
				if(table[y][x] == -1) continue;
				if(x > 0){
					value = table[y][x -1];
					table[y][x] += value > -1 ? value : 0;
				}
				if(y < height - 1){
					value = table[y + 1][x];
					table[y][x] += value > -1 ? value : 0;
				}
			}
		}
		cout << table[0][width -1] << endl;

	}

	return 0;
}
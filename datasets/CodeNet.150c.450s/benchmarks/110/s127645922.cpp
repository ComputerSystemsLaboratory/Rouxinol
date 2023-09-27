
//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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

	int h, w, n;
	cin >> h >> w >> n;
	VVI table(h, VI(w + 1));
	queue<PII> q;
	vector<PII> goals(n);
	PII start;
	REP(i, h){
		string value_line;
		cin >> value_line;
		REP(j, w){
			char value_str = value_line[j];
			int value = 0;
			if(value_str == 'S'){
				start = MP(i, j);
			}else if('1' <= value_str && value_str <= '9'){
				goals[value_str - '0' - 1] = MP(i, j);
			}else if(value_str == 'X'){
				value = -1;
			}
			table[i][j] = value;
		}
	}

	q.push(start);
	int cnt = 0;
	for(auto it = goals.begin() ; it != goals.end(); it++){
		while(!q.empty()){
			PII p = q.front();
			q.pop();
			int y = p.first, x = p.second;
			REP(i, 4){
				int dx = x + DX[i];
				int dy = y + DY[i];
				int cv = table[y][x];
				if(dy >= 0 && dy < h && dx >= 0 && dx < w
					&& (table[dy][dx] > cv + 1 || table[dy][dx] == 0)){
					table[dy][dx] = cv + 1;
					q.push(MP(dy, dx));
				}
			}
		}

		PII goal = *it;
		int gx = goal.second, gy = goal.first;
		cnt += table[gy][gx];

		REP(i, h)
			REP(j, w)
				table[i][j] = table[i][j] >= 0 ? 0 : -1;
		q.push(goal);
	}

	cout << cnt << endl;
	
	return 0;
}
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
template<class T> inline T sqr(T x) {return x*x;}

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair
#define each(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define exist(s,e) ((s).find(e)!=(s).end())
#define range(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  range(i,0,n)
#define clr(a,b) memset((a), (b) ,sizeof(a))
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

const double eps = 1e-10;
const double pi  = acos(-1.0);
const ll INF =1LL << 62;
const int inf =1 << 30;

string button[10];

int main(void){
	button[1]=".,!? ";
	button[2]="abc";
	button[3]="def";
	button[4]="ghi";
	button[5]="jkl";
	button[6]="mno";
	button[7]="pqrs";
	button[8]="tuv";
	button[9]="wxyz";
	int t;
	cin >> t;
	rep(i,t){
		string in;
		cin >> in;
		int n=in.size();
		int cur=0,num=0;
		string ans="";
		rep(i,n){
			int tmp=in[i]-'0';
			if(tmp){
 				cur=tmp;
				num++;
			}else{
				if(cur){
					int p=button[cur].size();
					ans+=button[cur][(num-1)%p];
				}
				cur=0;
				num=0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
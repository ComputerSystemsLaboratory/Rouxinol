#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EACH(t,i,c) for(t::iterator i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
const double EPS = 1e-10;
const double PI  = acos(-1.0);


int main(){
	int n,a,b,c,x;
	while(cin>>n>>a>>b>>c>>x,n){
		vi y(n);
		REP(i,n){
			cin>>y[i];
		}
		int cnt=0;
		bool ng=false;
		REP(i,n){
			while(true){
				if(x==y[i]){
					x=(x*a+b)%c;
					if(i>0)cnt++;
					if(cnt>10000){
						ng=true;
					}
					break;
				}
				x=(x*a+b)%c;
				cnt++;
				if(cnt>10000){
					ng=true;
					break;
				}
			}
		}
		if(ng){
			cout<<-1<<endl;
		}else{
			cout<<cnt<<endl;
		}
	}
}
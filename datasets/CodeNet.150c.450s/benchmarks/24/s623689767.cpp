#include <vector>
#include <list>
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
#include <cassert>
using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define EACH(t,i,c) for(t::iterator i=(c).begin(); i!=(c).end(); ++i)
const double EPS = 1e-10;
const double PI  = acos(-1.0);


int main(){
	ll N,M;
	while(cin>>N>>M,N|M){
		vi D(N),P(N);
		ll total=0;
		REP(i,N){
			cin>>D[i]>>P[i];
			total+=P[i]*D[i];
		}
		vector<pii> p(N);
		REP(i,N){
			p[i]=make_pair(P[i],i);
		}
		sort(RALL(p));
		ll ans=total;
		REP(i,N){
			int ii=p[i].second;
			if(M-D[ii]>=0){
				M-=D[ii];
				ans-=P[ii]*D[ii];
			}else{
				ans-=M*P[ii];
				M=0;
			}
			if(M==0){
				break;
			}
		}
		cout<<ans<<endl;
	}
}
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
const double EPS = 1e-9;
const double PI  = acos(-1.0);

int main(){
	int n,m;
	while(cin>>n>>m,n|m){
		vi h(n);
		REP(i,n){
			cin>>h[i];
		}
		vi w(m);
		REP(i,m){
			cin>>w[i];
		}

		vi all_width;
		REP(i,m){
			int sum=0;
			FOR(j,i,m){
				sum+=w[j];
				all_width.push_back(sum);
			}
		}
		sort(ALL(all_width));

		int ans=0;
		REP(i,n){
			int total_height=0;
			FOR(j,i,n){
				total_height+=h[j];
				vi::iterator lb=lower_bound(ALL(all_width),total_height);
				if(*lb==total_height){
					ans+=upper_bound(ALL(all_width),total_height)-lb;
				}
			}
		}

		cout<<ans<<endl;
	}
}
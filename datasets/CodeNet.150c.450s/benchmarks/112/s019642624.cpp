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
	int n;
	while(cin>>n,n){
		char conv[1000]={};
		REP(i,n){
			char from,to;
			cin>>from>>to;
			conv[from]=to;
		}
		int m;
		cin>>m;
		REP(i,m){
			char c;
			cin>>c;
			if(conv[c]==0){
				printf("%c",c);
			}else{
				printf("%c",conv[c]);
			}
		}
		printf("\n");
	}

}
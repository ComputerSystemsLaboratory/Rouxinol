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
#include <memory>
#include <time.h>
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
 
bool bigger(int h1,int w1,int h2,int w2){
	if(h1*h1+w1*w1==h2*h2+w2*w2){
		return h1>h2;
	}else{
		return h1*h1+w1*w1 > h2*h2+w2*w2;
	}
}


int main(){
	int h,w;
	while(cin>>h>>w,h|w){
		int ah=1000,aw=1000;
		FOR(y,1,151){
			FOR(x,1,151){
				if(x>y&&bigger(y,x,h,w)&&bigger(ah,aw,y,x)){
					ah=y;
					aw=x;
				}
			}
		}
		cout<<ah<<" "<<aw<<endl;
	}
	
}
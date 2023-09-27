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

inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}

typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EACH(t,i,c) for(t::iretator i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

const double EPS = 1e-10;

int main(){
    int n;
    const int TIME = 86400;
     
    while( scanf("%d",&n) , n ){
        int timeTable[TIME] = {};
        for(int i=0 ; i<n ; ++i ){
            int h1,m1,s1,h2,m2,s2,start,end;
            scanf("%d:%d:%d %d:%d:%d", &h1 , &m1 , &s1 , &h2 , &m2 , &s2 );
            start = s1 + m1*60 + h1*60*60;
            end   = s2 + m2*60 + h2*60*60 -1;
            for(int j = start ; j <= end ; ++j ){
                timeTable[j]++;
            }
        }
        int ans = 0;
        for(int i=0 ; i<TIME ; ++i ){
            ans = max( ans , timeTable[i] );
        }
        printf("%d\n", ans );
         
    }
}
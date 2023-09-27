#include <cmath>
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cctype>
#include <map>
#include <queue>
#include <stack>
#include <string>

using namespace std;

#define inpfile(f) freopen(f,"r",stdin)
#define outfile(f) freopen(f,"w",stdout)
#define REP(i,n) for(int i=0;i<n;++i)
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fill(a,val) memset(a,val,sizeof(a))
#define ll long long
#define ull unsigned long long
#define INF 500000000
#define bit(i) ((i)&(-i))
#define ff first
#define ss second
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define nL(note) note+note
#define nR(note) note+note+1
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<int,ii> viii;

#define OJ
#define MOD 10000007
#define maxN 100

typedef vi::iterator iter;
int n;
vi a,ans;
iter k;

void input() {
  scanf("%d",&n);
  a.assign(n,0);
  REP(i,n) scanf("%d",&a[i]);
}

void Lis() {
  REP(i,n) {
      k=lower_bound(all(ans),a[i]);
      if(k!=ans.end()) ans[k-ans.begin()]=a[i];
       else ans.pb(a[i]);
  }
  printf("%d\n",ans.size());
}
int main() {
    #ifndef OJ
        inpfile("test.inp"); //outfile("test.out");
    #endif
    input();
    Lis();
    return 0;
}
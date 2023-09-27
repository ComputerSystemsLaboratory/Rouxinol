// g++ temp.cpp
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <cstring>
#include <set>
#include <map>
#include <string>
#include <climits>
using namespace std;

#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define EACH(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;

#define INF INT_MAX/3

#define MAX_N 1000

int c,r;
int a[10][10000];

int main(){
	while(1){
		cin>>r>>c;
		if(r==0&&c==0) break;
		REP(i,r)REP(j,c){
			cin>>a[i][j];
		}
		int res = 0;
		REP(i,pow(2,r)){
			int cnt[10000], sum=0;
			fill(cnt, cnt+c, 0);
			REP(j,r)REP(k,c){
				if((((i>>j)&1)==1&&a[j][k]==1)||(((i>>j)&1)==0&&a[j][k]==0)) cnt[k]++;
			}
			REP(k,c){
				sum+=max(cnt[k],r-cnt[k]);
			}
			res=max(res, sum);
		}
		cout<<res<<endl;
	}
	return 0;
}
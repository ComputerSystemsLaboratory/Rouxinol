#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <functional>
#include <sstream>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()

int w,n,ans[32];
pair<int,int> list[32];

int main(){	
	scanf("%d%d",&w,&n);
	rep(i,n){
		int a,b; scanf("%d,%d",&a,&b);
		list[i].first = a;
		list[i].second = b;
	}
	REP(i,1,w+1){
		int cur = i;
		rep(j,n){
			if( list[j].first == cur ){
				cur = list[j].second;
				//printf("i:%d , cur:%d\n",i,cur);
			}else if( list[j].second == cur ){
				cur = list[j].first;
				//printf("i:%d , cur:%d\n",i,cur);
			}
		}
		ans[cur] = i;
	}
	REP(i,1,w+1)printf("%d\n",ans[i]);
	
	return 0;
}
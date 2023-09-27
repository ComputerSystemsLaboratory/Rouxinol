#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>
#include<set>
 
using namespace std;
 
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back
 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;
int a[11][10001];
int main(){
	int R,C;
	while(true){
	cin>>R>>C;
	if(R==0&&C==0)break;
	rep(i,R){
		rep(j,C){
			cin>>a[i][j];
		}
	}
	int ans=0;
	rep(i,1<<R){
		int used[11];
		rep(j,R){
		//	if((i>>j)==1)used[j]=1;
		//	else  used[j]=0;
			used[j]=(i>>j)&1;
		}
		int tmp=0;
		rep(j,C){
			int tmp2=0;
			rep(k,R){
				if(used[k]==1){
					tmp2+=(1-a[k][j]);
				}
				else{
					tmp2+=a[k][j];
				}
			}
			tmp+=max(tmp2,R-tmp2);
		}
		ans=max(ans,tmp);
	}
	cout<<ans<<endl;
	}
	return 0;
}
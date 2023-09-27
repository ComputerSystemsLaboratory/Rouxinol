#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reg(i,a,b) for(int i=(a);i<=(b);i++)
typedef long long int lli;
typedef pair<int,int> mp;
typedef pair<int,mp> mmp;
#define fir first
#define sec second



int prim(int n,vector<mp>* vs,int s=0){
	vector<int> gone(n,0);
	priority_queue<mp,vector<mp>,greater<mp> > que;
	gone[s]=1;
	rep(i,vs[s].size()){
		int to=vs[s][i].fir,
			co=vs[s][i].sec;
		que.push(mp(co,to));
	}
	
	int res=0;
	while(!que.empty()){
		mp pa=que.top();
		que.pop();
		int no=pa.sec,
			co=pa.fir;
		if(gone[no]==0){
			gone[no]=1;
			res+=co;
			rep(i,vs[no].size()){
				int to=vs[no][i].fir,
					tc=vs[no][i].sec;
				if(gone[to]==1)continue;
				que.push(mp(tc,to));
			}
		}
	}
	return res;
}


	


	
int n,m;

vector<mp> vs[10005];


//vector<mmp> es;


int main(void){
	int n,m;
	scanf("%d%d",&n,&m);
	
	rep(i,m){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		vs[a].push_back(mp(b,c));
		vs[b].push_back(mp(a,c));
		//es.push_back(mmp(c,mp(a,b)));
	}
	printf("%d\n",prim(n,vs));
	return 0;
}
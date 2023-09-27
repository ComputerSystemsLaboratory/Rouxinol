#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
struct edge{ int to,cost; };
#define M (1e12+1)

int main(void){
	ll v,e;
	cin>>v>>e;
vector<vector<edge> > g(v);
vector<vector<ll> > ans(v,vector<ll>(v,M));
for(int i=0;i<v;i++){
	ans[i][i]=0;
}
ll s,t,d;
for(int i=0;i<e;i++){
	cin>>s>>t>>d;
//	g[s].push_back((edge){t,d});
ans[s][t]=d;
}
for(int k=0;k<v;k++){
for(int i=0;i<v;i++){
	for(int j=0;j<v;j++){
		//for(int k=0;k<v;k++){
			if(ans[i][k]!=M&&ans[k][j]!=M){
				ans[i][j]=min(ans[i][j],ans[i][k]+ans[k][j]);
			}
		}
	}
}
bool f=true;
for(int i=0;i<v;i++){
	if(ans[i][i]!=0)f=false;
}
if(f){
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			if(ans[i][j]>=M){
				cout<<"INF";
			}else{
				cout<<ans[i][j];
			}
			if(j!=v-1)cout<<' ';
		}
		cout<<endl;
	}
}else{
	cout<<"NEGATIVE CYCLE"<<endl;
}
	return 0;
}

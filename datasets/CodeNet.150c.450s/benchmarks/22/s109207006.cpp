//ITNOA
#include<iostream>
#include<cstdio>
using namespace std;
#define F first
#define S second
typedef long long ll;
const ll INF=1e18,MAX=3000,MOD=1e9+7;
typedef pair<ll,ll> pii;
typedef pair<pii,ll> piii;
piii e[MAX];
ll d[MAX];
bool relax(int v){
	if(d[e[v].F.F]+e[v].S<d[e[v].F.S]&&d[e[v].F.F]!=INF){
		d[e[v].F.S]=d[e[v].F.F]+e[v].S;
		return 1;
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m,s;
	cin>>n>>m>>s;
	for(int i=0;i<m;i++)
		cin>>e[i].F.F>>e[i].F.S>>e[i].S;
	fill(d,d+n,INF);
	d[s]=0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m;j++)
			relax(j);
	}
	bool t=0;
	for(int i=0;i<m;i++){
		if(relax(i))
			t=1;
	}
	if(t)	
		cout<<"NEGATIVE CYCLE\n";
	else{
		for(int i=0;i<=n-1;i++){
			if(d[i]==INF)
				cout<<"INF\n";
			else
				cout<<d[i]<<"\n";
		}
	}
	return 0;
}
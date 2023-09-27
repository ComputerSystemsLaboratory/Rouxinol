#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, -1, sizeof(mat))
#define N 101
struct edge{
	int to,cost;
};
int par[N];
int a,n,ans=0;
priority_queue< pair<int,pair<int,int> > > Q;

void init(int n){
	FOR(i,1,n+1)par[i]=i;
}

int root(int x){
	if(par[x]==x){
		return x;
	}else{
		return par[x] = root(par[x]);
	}
}

void unite(int x,int y){
	x=root(x);
	y=root(y);
	if(x==y)return;
	par[x]=y;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	init(n);
	FOR(i,1,n+1){
		FOR(j,1,n+1){
			cin>>a;
			if(a==(-1))a=2001;
			Q.push(make_pair(-a,make_pair(i,j)));
		}
	}
	while(Q.size()){
		pair<int,int> e;
		int cost,x,y;
		pair<int,pair<int,int> > q;
		q=Q.top();
		e=q.second;
		cost=-q.first;
		x=e.first;
		y=e.second;
		Q.pop();
		if(root(x)==root(y))continue;
		unite(x,y);
		ans+=cost;
	}
	cout<<ans<<endl;
	return 0;
}

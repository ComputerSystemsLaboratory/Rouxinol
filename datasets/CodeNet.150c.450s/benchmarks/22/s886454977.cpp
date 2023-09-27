#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
#define M 1<<22
typedef long long int ll;
struct edge{ ll to,cost;};

void dfs(vector<vector<edge> > g,ll r,vector<ll> count,vector<ll> ans,ll e){
	priority_queue<ll>q;
	q.push(r);
	ans[r]=0;
	int t=0;
	while(!q.empty()){
		ll now=q.top();
		count[now]++;
	
	//	ans[now]=0;
		q.pop();
		for(ll i=0;i<g[now].size();i++){
			if(ans[now]+g[now][i].cost<ans[g[now][i].to]){
				ans[g[now][i].to]=ans[now]+g[now][i].cost;
		//		cout<<g[now][i].to<<' '<<ans[g[now][i].to]<<endl;
				count[g[now][i].to]++;
				q.push(g[now][i].to);
				if(count[g[now][i].to]>e){
				//	cout<<g[now][i].to<<endl;
					cout<<"NEGATIVE CYCLE"<<endl;
				//	return false;
				return;
				}
			}
		}
	}

		for(ll i=0;i<ans.size();i++){
			if(ans[i]==M) {
				cout<<"INF"<<endl;
			}
		else{	cout<<ans[i]<<endl;
		}
		}

//	return true;
return;
}
int main(void){
	ll v,e,r;
	cin>>v>>e>>r;
	vector<vector<edge> >  g(v);
	vector<ll> count(v,0),ans(v,M);
	ll s,t,d;
	for(ll i=0;i<e;i++){
		cin>>s>>t>>d;
		edge a;
		a.to=t;
		a.cost=d;
		g[s].push_back(a);
	}
	/*
	cout<<"ex"<<endl;
	cout<<g.size()<<endl;
	for(int i=0;i<v;i++){
		cout<<g[i].size()<<endl;
		for(int j=0;j<g[i].size();j++){
			cout<<i<<' '<<g[i][j].to<<' '<<g[i][j].cost<<endl;
		}
	}*/
	dfs(g,r,count,ans,e);
/*	if(dfs(g,r,count,ans)){
		for(int i=0;i<v;i++){
			if(ans[i]==M)cout<<"INF"<<endl;
		else	cout<<ans[i]<<endl;
		}
	}else{
		cout<<"NEGATIVE CYCLE"<<endl;
	}*/
	return 0;
}

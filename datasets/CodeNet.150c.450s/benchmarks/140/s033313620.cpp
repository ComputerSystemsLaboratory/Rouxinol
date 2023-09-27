#include<iostream>
#include<vector>
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define INF 1e11
using namespace std;
typedef pair<int,long long> pil;

int main(){
	int v,e,s,t,w;
	cin>>v>>e;
	long long mincost[v];
	vector<pil> vec[v];
	bool used[v];
	long long ans=0;
	fill(mincost,mincost+v,INF);
	fill(used,used+v,false);
	rep(i,e){
		cin>>s>>t>>w;
		vec[s].pb(pil(t,w));
		vec[t].pb(pil(s,w));
	}
	mincost[0]=0;
	while(1){
		int next=-1;
		for(int u=0;u<v;u++){
			if(!used[u]&&(next==-1||mincost[u]<mincost[next]))next=u;
		}
		if(next==-1)break;
		used[next]=true;
		ans+=mincost[next];
		for(int i=0;i<vec[next].size();i++){
			mincost[vec[next][i].first]=min(mincost[vec[next][i].first],vec[next][i].second);
		}
	}
	cout<<ans<<endl;
	return 0;
}

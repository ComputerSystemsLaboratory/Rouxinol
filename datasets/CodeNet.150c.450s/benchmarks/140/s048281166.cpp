#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(v) v.begin(),v.end()
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
int parent[10010];

int find(int a){
	if(parent[a]==a)return a;
	else return parent[a]=find(parent[a]);
}

void unite(int a,int b){
	parent[find(a)]=find(b);
	find(a);find(b);
}

int main(){
	int n,m,a,b,c;
	cin>>n>>m;
	vector<piii> edge;
	rep(i,m){
		cin>>a>>b>>c;
		edge.pb(piii(c,pii(a,b)));
	}
	rep(i,n)parent[i]=i;
	sort(all(edge));
	int ans=0;
	rep(i,edge.size()){
		int a=edge[i].second.first,b=edge[i].second.second;
		if(find(a)==find(b))continue;
		ans+=edge[i].first;
		unite(a,b);
	}
	cout<<ans<<endl;
	return 0;
}

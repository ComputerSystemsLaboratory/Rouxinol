#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
#define FOR(I,A,B) for(ll I = (A); I < (B); ++I) 
const ll INF=1e9+7; 
const ll N = 101; 


class dijkstra{ 
//0indexed 
public: 
	int v,startv; 
	vector<int> d; 
	vector<vector<pair<int,int> > >e; 

void initsize(int n0){ 
	d.resize(n0); 
	for(int i=0;i<n0;i++)d[i]=INT_MAX; 
	vector<pair<int,int> > ep; 
	for(int i=0;i<n0;i++)e.push_back(ep); 
	v=n0; 
} 

void initstart(int s){ 
	startv=s;
	d[s]=0;
}

void make_edge(int x,int y,int cost){ 
	e[x].push_back(make_pair(y,cost)); 
	e[y].push_back(make_pair(x,cost)); 
}

void make_edgedir(int x,int y,int cost){ 
	e[x].push_back(make_pair(y,cost)); 
}

void calcdistance(){ 
	// <-cost,x> 
	//cost startv->x 
	priority_queue<pair<int,int> > q; 
	pair<int,int> p; 
	vector<bool> did; 
	for(int i=0;i<v;i++)did.push_back(false); 
	did[startv]=true; 
	for(int i=0;i<e[startv].size();i++){ 
		p.first=-e[startv][i].second; 
		p.second=e[startv][i].first; 
		q.push(p); 
	}

	while(q.size()!=0){ 
		pair<int,int> p; 
		p=q.top(); 
		q.pop(); 
		int x,costsx; 
		x=p.second; 
		costsx=-p.first; 
		if(did[x]==true)continue; 
		did[x]=true; 
		d[x]=costsx; 

		for(int i=0;i<e[x].size();i++){ 
			p.first=-(d[x]+e[x][i].second); 
			p.second=e[x][i].first; 
			if(did[p.second]==false)q.push(p); 
		} 
	} 
} 

}; 



int main(){ 
	dijkstra di;
	int n;
	cin>>n;
	di.initsize(n);
	di.initstart(0);
	FOR(i,0,n){
		int u,k;
		cin>>u>>k;
		FOR(j,0,k){
			int x,co;
			cin>>x>>co;
			di.make_edgedir(u,x,co);
		}
	}
	di.calcdistance();
	FOR(i,0,n){
		cout<<i<<" "<<di.d[i]<<endl;
	}
	return 0; 
}

#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <map>
#include <climits>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second

static const double PI=6*asin(0.5);
typedef long long ll;
typedef complex<double> CP;
typedef pair<int,int> P;
static const ll INF=10000000000000;
struct ED{
	int s,t,d;
};

bool operator<(ED a,ED b){
	return a.d>b.d;
}

bool operator<(pair<ll,ED> a,pair<ll,ED> b){
	return a.F>b.F;
}


int main(){
	int V,E,r,s,t,d;
	vector<vector<ED> > v(100010);
	ll vmin[100010];
	int vis[100010];
	int exi[100010];
	priority_queue<pair<long long,ED> > pq;
	cin>>V>>E>>r;
	rep(i,100010){
		vmin[i]=INF;
		vis[i]=0;
		exi[i]=0;
	}
	rep(i,E){
		cin>>s>>t>>d;
		ED t1,t2;
		t1.s=s; t1.t=t; t1.d=d;
		t2.s=t; t2.t=s; t2.d=d;
		v[s].PB(t1);
		//v[t].PB(t2);
		exi[t]=exi[s]=1;
	}
	vmin[r]=0;
	vis[r]=1;
	rep(i,v[r].size()){
		pair<int,ED> tp;
		tp.F=v[r][i].d;
		tp.S=v[r][i];
		pq.push(tp);
	}
	
	while(!pq.empty()){
		pair<ll,ED> tmp=pq.top();
		pq.pop();
		if(vis[tmp.S.t]==1) continue;
		//cout<<"tmp "<<tmp.F<<" "<<tmp.S.s<<" "<<tmp.S.t<<" "<<tmp.S.d<<endl;
		vmin[tmp.S.t]=tmp.F;
		vis[tmp.S.t]=1;
		//cout<<tmp.t<<endl;
		rep(i,v[tmp.S.t].size()){
			//cout<<vis[v[tmp.t][i].t]<<endl;
			if(vis[v[tmp.S.t][i].t]==0){
				//cout<<"hoge\n";
				pair<ll,ED> tp;
				tp.F=tmp.F+v[tmp.S.t][i].d;
				tp.S=v[tmp.S.t][i];
				pq.push(tp);
				//cout<<"v "<<v[tmp.t][i].s<<" "<<v[tmp.t][i].t<<" "<<v[tmp.t][i].d<<endl;
			}
		}
	}
	rep(i,V){
		if(vis[i]==1){
			cout<<vmin[i]<<endl;
		}
		else if(vmin[i]==INF){
			cout<<"INF"<<endl;
		}
	}
	 return 0;
}
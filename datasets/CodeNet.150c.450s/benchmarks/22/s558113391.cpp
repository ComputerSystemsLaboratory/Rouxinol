#include <bits/stdc++.h>
using namespace std;

struct edge{int from,to,cost;};

int n,m,s;
vector<edge>v;
int d[100009];

void Bellman(){
	fill(d,d+100009,1e9);
	d[s]=0;
	for(int i=0;i<n;i++){
		int update=0;
		for(int j=0;j<m;j++){
			edge e=v[j];
			if(d[e.from]!=1e9&&d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+e.cost;
				update=1;
				if(i==n-1){
					cout<<"NEGATIVE CYCLE"<<endl;
					return;
				}
			}
		}
		if(!update)break;
	}
	for(int i=0;i<n;i++){
		if(d[i]==1e9)cout<<"INF"<<endl;
		else cout<<d[i]<<endl;
	}
}
int main(){
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		v.push_back({a,b,c});
	}
	Bellman();
}

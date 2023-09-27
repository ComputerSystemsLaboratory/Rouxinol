#include <bits/stdc++.h>
using namespace std;

int i,j,r,n,m,s,t,d,q;
int inf=1000000000;

vector<vector<pair<int,int> > > L(1000,vector<pair<int,int> >(0));
vector<int> x(1000,0),y(1000,inf),p(1000,-1);
queue<int> Q;


void scan(int v){
	
	if(y[v]==inf) return;
	for(j=0; j<L[v].size(); j++){
		if(y[v]+L[v][j].second<y[L[v][j].first]){
			p[L[v][j].first]=v;
			y[L[v][j].first]=y[v]+L[v][j].second;
			if(x[L[v][j].first]==0){
				Q.push(L[v][j].first);
				x[L[v][j].first]=1;
			}
		}
	}
	return ;
	
}
int main() {
	
	cin >> n >> m >> r;
	
	y[r]=0;
	for(j=0; j<m; j++){
		cin >> s >> t >> d;
		L[s].push_back({t,d});
	}
	
	Q.push(r);
	Q.push(-1);
	x[r]=1;
	
	i=0;
	while(i<n){
		q=Q.front();
		Q.pop();
		if(q==-1){
			i++;
			Q.push(-1);
		}else{
			x[q]=0;
			scan(q);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<L[i].size(); j++){
			if(y[i]<inf && y[i]+L[i][j].second<y[L[i][j].first]){
				cout << "NEGATIVE CYCLE" << endl;
				return 0;
			}
		}
	}
	
	for(j=0; j<n; j++){
		if(y[j]==inf){
			cout << "INF" << endl;
		}else{
			cout << y[j] << endl;
		}
	}

	
	return 0;
}

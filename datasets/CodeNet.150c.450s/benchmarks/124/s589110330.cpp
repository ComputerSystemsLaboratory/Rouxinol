#include<bits/stdc++.h>
#define N 100
#define INFTY (1<<21)
#define WH 0
#define GR 1
#define BL 2
using namespace std;

vector<int> color(N),d(N),p(N);
vector<vector<int>> M(N,vector<int>(N));
int n;

void dijkstra(){
	for(int i=0;i<n;i++){
		color.at(i) = WH;
		d.at(i) = INFTY;
	}
	d.at(0) = 0;
	color.at(0) = GR;
	
	while(1){
		int mincost = INFTY;
		int u = -1;
		for(int i=0;i<n;i++){
			if(color.at(i) != BL && d.at(i) < mincost){
				mincost = d.at(i);
				u = i;
			}
		}
		if(u == -1) break;
		
		color.at(u) = BL;
		
		for(int v=0;v<n;v++){
			if(color.at(v) != BL && M.at(u).at(v) != INFTY){
				if(d.at(u) + M.at(u).at(v) < d.at(v)){
					d.at(v) = d.at(u) + M.at(u).at(v);
					p.at(v) = u;
					color.at(v) = GR;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << i << " ";
		if(d.at(i) == INFTY) cout << -1 << endl;
		else cout << d.at(i) << endl;
	}
	
}

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			M.at(i).at(j) = INFTY;
		}
	}
	int k,c,u,v;
	for(int i=0;i<n;i++){
		cin >> u >> k;
		for(int j=0;j<k;j++){
			cin >> v >> c;
			M.at(u).at(v) = c;
		}
	}
	dijkstra();
}

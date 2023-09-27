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

int prim(){
	int u,mincost;
	for(int i=0;i<n;i++){
		color.at(i) = WH;
		d.at(i) = INFTY;
		p.at(i) = -1;
	}
	d.at(0) = 0;
	
	while(1){
		mincost = INFTY;
		u = -1;
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
				if(M.at(u).at(v) < d.at(v)){
					d.at(v) = M.at(u).at(v);
					p.at(v) = u;
					color.at(v) = GR;
				}
			}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(p.at(i) != -1) sum += M.at(i).at(p.at(i));
	}
	return sum;
}

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int e;
			cin >> e;
			if(e == -1) M.at(i).at(j) = INFTY;
			else M.at(i).at(j) = e;
		}
	}
	cout << prim() << endl;
}

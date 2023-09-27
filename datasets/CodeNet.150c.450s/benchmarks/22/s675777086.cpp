#include <vector>
#include <iostream>
using namespace std;
#define MAX 100000
#define INF __INT_MAX__

struct edge{
    // 始点,終点,重み
    int s,t,w;
};

vector<edge> edges;
int d[MAX];

void BellmanFord(int startVertex,int vNum,int eNum){
	fill(d,d + MAX,INF);
	d[startVertex] = 0;
	
	// 頂点分回すことで、最後のサイクルは負のサイクルを確認するプロセスになる
	for(int i=0;i < vNum;++i){
		bool update = false;
		for(int j = 0;j < eNum;++j){
			edge e = edges[j];
			if(d[e.s] != INF && d[e.t] > d[e.s] + e.w){
				d[e.t] = d[e.s] + e.w;
				update = true;
				// 頂点分更新されていれば、負のサイクルがあることがわかる
				if(i == vNum - 1){
					cout << "NEGATIVE CYCLE" << endl;
					return;
				}
			}
		}
		if(!update)break;
	}

	for(int i = 0;i < vNum;++i){
		if(d[i] == INF){
		    cout << "INF"<< endl;
		}
		else cout<< d[i] << endl;
	}
}

int main(){
    int v,e,r;
	cin >> v >> e >> r;
	for(int i = 0;i < e;++i){
		int s,t,w;
		cin >> s >> t >> w;
		edges.push_back({s,t,w});
	}
	BellmanFord(r,v,e);
}

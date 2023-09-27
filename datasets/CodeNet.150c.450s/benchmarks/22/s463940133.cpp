#include <vector>
#include <iostream>
using namespace std;
#define MAX 100000
#define INF __INT_MAX__

struct edge{
    int s,t,d;
};

vector<edge> edges;
int d[MAX];

void BellmanFord(int startVertex,int vNum,int eNum){
	fill(d,d + MAX,INF);
	d[startVertex] = 0;
	
	for(int i=0;i < vNum;++i){
		bool update = false;
		for(int j = 0;j < eNum;++j){
			edge e = edges[j];
			if(d[e.s] != INF && d[e.t] > d[e.s] + e.d){
				d[e.t] = d[e.s] + e.d;
				update = true;
			}
		}
		if(!update)break;
	}
	for(int i = 0;i < vNum;++i){
	    for(int j = 0;j < eNum;++j){
	        edge e = edges[j];
			if(d[e.s] != INF && d[e.t] > d[e.s] + e.d){
				cout << "NEGATIVE CYCLE" << endl;
				return;
			}
	    }
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
		int s,t,d;
		cin >> s >> t >> d;
		edges.push_back({s,t,d});
	}
	BellmanFord(r,v,e);
}

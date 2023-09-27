#include <iostream>
#include <cstdio>
#include <vector>
#define MAX_NODE 100000
#define MAX_EDGE 100000

using namespace std;

int n;//num of nodes
int e;//num of edges
int group[MAX_NODE+1];//0オリジン
int q;

bool neighbor_a[MAX_NODE+1];
vector<int> neighbor_v[MAX_NODE+1];//連接リスト

void addNeighbor(int num,int ori){//oriを含む連結グラフをつくる
	int ngb;
	
	for(int i = 0;i < neighbor_v[num].size();i++){//深さ優先探索
		if(neighbor_a[neighbor_v[num][i]] == false){
			neighbor_a[neighbor_v[num][i]] = true;
			neighbor_v[ori].push_back(neighbor_v[num][i]);
			ngb = neighbor_v[num][i];
			addNeighbor(ngb,ori);
		}
	}
}


int main(){
	int v_1,v_2;
	scanf("%d %d",&n,&e);

	for(int i = 0;i < e;i++){
		scanf("%d %d",&v_1,&v_2);
		neighbor_v[v_1].push_back(v_2);
		neighbor_v[v_2].push_back(v_1);
	}

	for(int i  = 0;i < n;i++) group[i] = -1;

	for(int i = 0;i < n;i++){
		if(group[i] != -1) continue;

		for(int j = 0;j < n;j++) neighbor_a[j] = false;//iの連接配列
		neighbor_a[i] = true;
		neighbor_v[i].push_back(i);

		addNeighbor(i,i);

		for(int j = 0;j < neighbor_v[i].size();j++) group[neighbor_v[i][j]] = i;

	}
	//for(int i = 0;i < n;i++) cout <<group[i] <<" ";
	//for(int i = 0;i < neighbor_v[5].size();i++) cout <<neighbor_v[5][i] <<" ";

	scanf("%d",&q);

	for(int i = 0;i < q;i++){
		scanf("%d %d",&v_1,&v_2);
		if(group[v_1] == group[v_2]) cout <<"yes" <<endl;
		else cout <<"no" <<endl;
	}
	return 0;
}
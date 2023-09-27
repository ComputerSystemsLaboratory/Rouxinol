#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
//original idea: stupid wanna check the node with many bfs search 
using namespace std;
#define N 105 // number of nodes
vector<int> neighbors[N]; //start from 1
queue<int> q;
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C bfs
int dist[N];
int vis[N];
int res = 0;
void bfs(int d){
	if(q.empty()) return;
	//until q is empty
	while(!q.empty()){
		int temp = q.front();
		q.pop();
		if(dist[temp]!=-1){
			if(d<dist[temp]) dist[temp] = d;
			else {dist[temp] = dist[temp];}
		}else {
			dist[temp] = d;
		}
		for(int i = 0; i<neighbors[temp].size(); i++){
			d = dist[temp] +1;//next lever
		if(dist[neighbors[temp].at(i)] == -1){//not visited
			q.push(neighbors[temp].at(i));
			dist[neighbors[temp].at(i)] = d;
			}
		}
		
	}
	
}

int main()
{
    int n;
    scanf("%d",&n);
    memset(dist, -1, sizeof(dist));
    memset(vis, -1, sizeof(dist));
    for(int i = 0; i<n; i++){
        int node;
        scanf("%d",&node);
        int num;
        scanf("%d",&num);
        for(int j = 0; j<num; j++){
        	int temp;
        	scanf("%d",&temp);
        	neighbors[node].push_back(temp);
        	//neighbors[temp].push_back(node);
		}
    }
	q.push(1);//begin from 1
    bfs(0);
    for(int i = 1; i<=n; i++){
    	printf("%d %d\n",i, dist[i]);
	}
    return 0;
}

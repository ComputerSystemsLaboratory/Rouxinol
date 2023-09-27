#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_D -- connected componenets
//method: check if their have the same component
//https://en.wikipedia.org/wiki/Connected_component_(graph_theory) -- connected component
//follow up : how cal the numbers of component--sorting the array and count
vector<int> neighbors[100005];
//why choose vector, not matrix
int root[100005];
//start is for the root
void dfs(int i, int start){
	root[i] = start;
	//visut all i's neighbors
	//c++ 11
	for(int j = 0; j< neighbors[i].size(); j++){
		int temp = neighbors[i].at(j);
		if(root[temp]==-1){
			dfs(temp,start);
		}
	}
}

int main(){
	int n,m,x,y,q;
	memset(root, -1, sizeof(root));
	scanf("%d %d",&n,&m);
	for(int i = 0; i<m; i++){
		scanf("%d %d",&x,&y);
		neighbors[x].push_back(y);
		neighbors[y].push_back(x);
	}
	for(int i = 0; i<n; i++){
		if(root[i]==-1){
			dfs(i,i);
		}
	}
	scanf("%d", &q);
	for(int i = 0; i<q; i++){
		scanf("%d %d",&x, &y);
		//printf("%d %d\n",root[x],root[y]);
		if(root[x] == root[y]){
			printf("yes\n");
		}else printf("no\n");
	}
	return 0;
}

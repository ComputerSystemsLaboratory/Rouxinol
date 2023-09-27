#include <iostream>

using namespace std;

	int TIME = 0;
	int d[101];
	int f[101];
	int num;
	int graph[101][101] = {0};

void dfs(int x){
	TIME++;
	d[x] = TIME;

	for(int i=1;i<=num;i++){
		if(graph[x][i] == 1 && d[i]==0){
			dfs(i);
		}
	}
	f[x] = ++TIME;
}

int main(){
	int hon;
	int eda;
	int ver;

	cin>>num;
	for(int i=0;i<num;i++){
		cin>>eda;
		cin>>hon;
		for(int j=0;j<hon;j++){
			cin>>ver;
			graph[eda][ver]++;
		}
	}
	
	for(int i=1;i<=num;i++){
		if(d[i]==0)
			dfs(i);
	}

	for(int i=1;i<=num;i++){
		cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
	}

	return 0;
}
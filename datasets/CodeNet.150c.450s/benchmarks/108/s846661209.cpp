#include <iostream>
#include <queue>
using namespace std;
int D[110]={};
int R[110][110]={};
int n,a,b,k;
void bfs(int src){
	queue<int> Q;
	Q.push(src);
	D[src] = 0;
	while (! Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for(int dst=1;dst<n+1;dst++){
			if(R[cur][dst]==1 && D[dst]==0){
				D[dst] =D[cur]+1;
				Q.push(dst);
			}
		}
	}
}
int main() {
	cin >> n;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>k;
		for(int j=0;j<k;j++){
		cin>>b;
		R[a][b]=1;
		}
	}
	bfs(1);
	cout <<"1 0"<<endl;
	for(int m=2;m<n+1;m++){
		if(D[m]==0){
		cout <<m<<" "<<-1<<endl;
		}else{
		cout <<m<<" "<<D[m]<<endl;
	}
	}
	return 0;
}
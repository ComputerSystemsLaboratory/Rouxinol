#include<iostream>
using namespace std;
const int MAX=105;
const int INF= 1<<30;
int M[MAX][MAX],n,d[MAX],p[MAX],vis[MAX];
void init(){
	for(int i=0;i<n;i++){
		d[i]=INF;
		p[i]=-1;
		vis[i]=0;
	}
	d[0]=0;
}
int Prim(){
	init();
	while (true){
		int u=-1;
		int minCost=INF;
		for(int i=0;i<n;i++){
			if(!vis[i] && d[i]<minCost){
				u=i;
				minCost=d[i];
			}
		}
		if(u==-1)break;
		vis[u]=1;
		for(int i=0;i<n;i++){
			if(!vis[i] && M[u][i]!=-1 &&M[u][i]<d[i]){
				d[i]=M[u][i];
				p[i]=u;
			}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+= (p[i]==-1)?0:M[i][p[i]];
	}
	return sum;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>M[i][j];
		}
	}
	cout<<Prim()<<endl;
	return 0;
} 

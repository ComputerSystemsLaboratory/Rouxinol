#include<iostream>
using namespace std;
#define MAX 100+5
#define white 0
#define black 1
#define INF 100000*100+5
int m[MAX][MAX],color[MAX],d[MAX],num;
void dijkstra(){
	d[0]=0;int now_node;
while(true){
	int minc=INF;
	for(int i=0;i<num;i++){
		if(!color[i]&&d[i]<minc){
			minc=d[i];now_node=i;
		}
	}
     	if(minc==INF) break;
		color[now_node]=black;
		for(int i=0;i<num;i++){
			if(color[i]==white&&m[now_node][i]+d[now_node]<d[i]){
				d[i]=d[now_node]+m[now_node][i];
			}
		}
	
}
return ;
}
int main(){
	cin>>num;
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			m[i][j]=INF;
		}
	}
	int row,n,col,val;
	for(int i=0;i<num;i++){
		cin>>row;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>col>>val;
			m[row][col]=val;
		}
	}
	for(int i=0;i<num;i++){
		d[i]=INF;color[i]=0;
	}
	dijkstra();
	for(int i=0;i<num;i++){
		cout<<i<<" "<<d[i]<<endl;
	}
}

#include <iostream>
#include <algorithm>
using namespace std;
#define INF ((1<<31)-1)
int main(){
	int v,e;	cin>>v>>e;
	long long int edge[v][v];
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++)	edge[i][j]=INF;
	}
	int s,t,d;
	for(int i=0;i<e;i++){
		cin>>s>>t>>d;
		edge[s][t]=d;
	}
	for(int k=0;k<v;k++){
		for(int i=0;i<v;i++){
			for(int j=0;j<v;j++){
				if(edge[i][k]!=INF&&edge[k][j]!=INF){
					edge[i][j]=min(edge[i][j],edge[i][k]+edge[k][j]);
				}
			}
		}
	}
	for(int i=0;i<v;i++){
		if(edge[i][i]<0){
			cout<<"NEGATIVE CYCLE"<<endl;
			return 0;
		}
	}
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			if(j)	cout<<" ";
			if(i==j)	cout<<0;
			else if(edge[i][j]>=INF)	cout<<"INF";
			else 	cout<<edge[i][j];
		}
		cout<<endl;
	}
	return 0;
}
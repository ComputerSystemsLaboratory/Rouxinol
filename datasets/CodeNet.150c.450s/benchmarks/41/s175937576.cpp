#include<iostream>
#include<climits>

using namespace std;

const long long MAX=LLONG_MAX>>1;

int main(){
	int v=0,e=0;
	long long dist[100][100]={0};
	cin>>v>>e;
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			dist[i][j]=MAX;
		}
	}
	for(int i=0;i<v;i++){
		dist[i][i]=0;
	}
	for(int i=0;i<e;i++){
		int s=0,t=0,d=0;
		cin>>s>>t>>d;
		dist[s][t]=d;
	}
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			for(int k=0;k<v;k++){
				if(dist[j][k]>dist[j][i]+dist[i][k] && dist[j][i]!=MAX && dist[i][k]!=MAX){dist[j][k]=dist[j][i]+dist[i][k];}
			}
		}
	}
	for(int i=0;i<v;i++){
		if(dist[i][i]<0){
			cout<<"NEGATIVE CYCLE"<<endl;
			return 0;
		}
	}
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			if(dist[i][j]==MAX){cout<<"INF";}
			else{cout<<dist[i][j];}
			cout<<(j==v-1?"\n":" ");
		}
	}
	return 0;
}
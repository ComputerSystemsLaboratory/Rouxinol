#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e2+9;
const long long int inf=INT_MAX;
int dis[MAX][MAX];
void init(int n){
	for(int i=0;i<n;i++){
		dis[i][i]=0;
		for(int j=0;j<n;j++){
			dis[i][j]=inf;
		}
	}
}
int main(){
	int i,j, k ,n,m;
	cin>>n>>m;
	init(n);
	
	for(i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		dis[x][y]=z;
	//	dis[y][x]=z;
	}
	for(i=0;i<n;i++)
		dis[i][i]=0;
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(dis[i][k]==inf||dis[k][j]==inf)
					continue;
				if(dis[i][j]>dis[i][k]+dis[k][j]){
					dis[i][j]=dis[i][k]+dis[k][j];
				//	cout<<dis[i][j];
				}
			}
		}
	}
	int f=0;
	for(k=0;k<n;k++){
		if(dis[k][k]<0)
			f=1;
	}
	if(f){
		cout<<"NEGATIVE CYCLE"<<"\n";
	}
	else{
		for(i=0;i<n;i++){
			if(dis[i][0]==inf)
				cout<<"INF";
			else
				cout<<dis[i][0];
			for(j=1;j<n;j++){
				if(dis[i][j]==inf)
					cout<<" INF";
				else
					cout<<" "<<dis[i][j];

		}
		cout<<"\n";
	}
	
}
}

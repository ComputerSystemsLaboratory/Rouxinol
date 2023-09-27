#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const long long int inf=INT_MAX;
const int MAX =1e5+6;
long long int dis[MAX];
vector<long long int>adj[MAX];
void intit(int n){
	for(int i=0;i<n;i++){
		dis[i]=inf;
	}
}
int main(){
	long long 	int i,j,k,n,m,s;
	scanf("%lld %lld %lld" , &n , &m , &s);
	for(i=0;i<m;i++){
		long long int x,y,z;
		scanf("%lld %lld %lld" , &x , &y, &z);
		adj[i].push_back(x);
		adj[i].push_back(y);
		adj[i].push_back(z);
	}
	intit(n);
	dis[s]=0;
	for(i=0;i<n-1;i++){
		int j=0;
		while(adj[j].size()!=0){
			if((dis[adj[j][1]]>dis[adj[j][0]]+adj[j][2])&&dis[adj[j][0]]!=inf){
				dis[adj[j][1]]=dis[adj[j][0]]+adj[j][2];
				
			}
			j++;
		}
	}
	int f=0;
	for(int i=0;i<n-1;i++){
		int j=0;
		while(adj[j].size()!=0){
			if((dis[adj[j][1]]>dis[adj[j][0]]+adj[j][2])&&dis[adj[j][0]]!=inf){
				f=1;
				break;
			}
			j++;
		}
	}
	if(f){
		cout<<"NEGATIVE CYCLE"<<"\n";
	}
	else{
	for(i=0;i<n;i++){
		if(dis[i]>=inf)
			cout<<"INF"<<"\n";
		else
		printf("%lld\n", dis[i] );
	}
}
}


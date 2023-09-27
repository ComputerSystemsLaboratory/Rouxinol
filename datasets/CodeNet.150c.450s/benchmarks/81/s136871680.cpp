#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int main(){
	while(1){
		int n;
		long road[10][10];
		scanf(" %d", &n);
		if(n==0) break;
		
		memset(road, -1, sizeof(road));
		for(int i=0; i<10; ++i) road[i][i]=0;
		 
		int city=0; //街の数
		for(int i=0; i<n; ++i){
			int a, b, c;
			scanf(" %d %d %d", &a, &b, &c);	
			road[a][b]=road[b][a]=c;
			if(city<a) city=a;
			if(city<b) city=b;
		}
		
		long ans[10]={0};	
		
		//各街を根としてbfs
		for(int i=0; i<=city; ++i){
			long cost[10]; //その街までの最小コスト
			for(int j=0; j<=city; ++j) cost[j]=1000000000; //とりあえず大きいので初期化
			
			queue<int> que;
			cost[i]=0;
			que.push(i);
			while( !que.empty() ){
				int v=que.front();
				que.pop();
				for(int j=0; j<10; ++j){
					if(v==j) continue;
					
					if(road[v][j]>=0 && cost[v]+road[v][j]<cost[j]){
						cost[j]=cost[v]+road[v][j];
						que.push(j);	
					}	
				}	
			}	
			/*
			printf("city %d to:\n", i);
			for(int j=0; j<=city; ++j) printf(" %d is %ld\n", j, cost[j]);
			*/
			for(int j=0; j<=city; ++j) ans[i]+=cost[j];
		}
		
		int a=0;
		for(int i=1; i<=city; ++i)
			if(ans[a]>ans[i]) a=i;	
			
		printf("%d %ld\n", a, ans[a]);
	}
}	
#include <cstdio>
#include <algorithm>
#define INF 1000000

int edge[10][10];
int n;
bool isexist[10];

int calc(int city){
	int cost[10];
	std::fill_n(cost, 10, INF);
	cost[city]=0;

	while(true){
		bool update=false;
		for(int i=0;i<10;i++){
			if(!isexist[i]) break;
			for(int j=0;j<10;j++){
				if(!isexist[j]) break;
				if(cost[i]+edge[i][j]<cost[j]){
					cost[j]=cost[i]+edge[i][j];
					update=true;
				}
			}
		}
		if(!update) break;
	}
	int sum=0;
	for(int i=0;i<10;i++){
		if(isexist[i]) sum+=cost[i];
	}
	return sum;
}

void solve(){
	int min_city;
	int min_cost=INF;
	for(int i=0;i<10;i++){
		if(isexist[i]){
			int cost=calc(i);
			if(min_cost>cost){
				min_city=i;
				min_cost=cost;
			}
		}
	}
	std::printf("%d %d\n",min_city,min_cost);
	return;
}

int main(){
	while(std::scanf("%d",&n),n){
		for(int i=0;i<10;i++){
			isexist[i]=false;
			for(int j=0;j<10;j++){
				edge[i][j]=INF;
			}
		}
		for(int i=0;i<n;i++){
			int a,b,c;
			std::scanf("%d %d %d",&a,&b,&c);
			edge[a][b]=c;
			edge[b][a]=c;
			isexist[a]=true;
			isexist[b]=true;
		}
		solve();
	}

	return 0;
}
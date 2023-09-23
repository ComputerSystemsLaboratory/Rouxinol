#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define INF 10000
#define MAXV 45

int dist[MAXV][MAXV];

int main(void){
	int n;

	while(1){
		int town=0;

		cin >> n;
		if(n==0)break;

		memset(dist,INF,sizeof(int)*MAXV*MAXV);
		for(int i=0; i<n; i++){
			int from,to,cost;
			cin >> from >> to >> cost;
			dist[from][to] = cost;
			dist[to][from] = cost;
			town = max(town,max(to,from));
		}
		town++;

		for(int i=0; i<town; i++)
			dist[i][i] = 0;
		
		for(int k=0; k<town; k++)
			for(int i=0; i<town; i++)
				for(int j=0; j<town; j++)
					dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);

		/*
		for(int i=0; i<town; i++){
			for(int j=0; j<town; j++){
				printf("%3d",dist[i][j]);
			}
			printf("\n");
		}
		*/
		
		int mincost=INF;
		int mintown;
		for(int i=0; i<town; i++){
			int cost=0;
			for(int j=0; j<town; j++)
				cost += dist[i][j];
			if(mincost>cost){
				mincost = cost;
				mintown = i;
			}
		}

		cout << mintown << " " << mincost << endl;
	}

	return 0;
}
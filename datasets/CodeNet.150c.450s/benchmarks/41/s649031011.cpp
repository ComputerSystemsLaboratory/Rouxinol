#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

#define INFINITY 2000000000

using namespace std;

int main(){

	int V,E,from,to,dist;

	scanf("%d %d",&V,&E);
	long long int table[V][V];

	for(int i = 0; i < V; i++){
		for(int k = 0; k < V; k++){
			if(i != k){
				table[i][k] = INFINITY;
			}else{
				table[i][k] = 0;
			}
		}
	}

	for(int i = 0; i < E; i++){
		scanf("%d %d %d",&from,&to,&dist);
		table[from][to] = dist;
	}

	for(int k = 0; k < V; k++){
		for(int i = 0; i < V; i++){
			if(table[i][k] == INFINITY)continue;
			for(int j = 0; j < V; j++){
				if(table[k][j] == INFINITY)continue;
				table[i][j] = min(table[i][j],table[i][k]+table[k][j]);
			}
		}
	}

	bool FLG = true;

	for(int i = 0; i < V; i++){
		if(table[i][i] < 0){
			FLG = false;
			break;
		}
	}

	if(!FLG)printf("NEGATIVE CYCLE\n");
	else{
		for(int i = 0; i < V; i++){
			if(table[i][0] == INFINITY)printf("INF");
			else{
				printf("%lld",table[i][0]);
			}

			for(int k = 1;k < V; k++){
				if(table[i][k] == INFINITY)printf(" INF");
				else{
					printf(" %lld",table[i][k]);
				}
			}
			printf("\n");
		}
	}

    return 0;
}
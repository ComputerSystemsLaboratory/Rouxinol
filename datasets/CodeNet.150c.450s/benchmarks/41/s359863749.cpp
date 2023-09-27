#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long LL;
const int maxx = 110;
const LL inf = (1LL << 32);


LL A[maxx][maxx];
int v,e;

void floyd(){
	for(int k=0;k<v;k++){
		for(int i=0;i<v;i++){
			if(A[i][k]==inf) continue;
			for(int j=0;j<v;j++){
				if(A[k][j]==inf) continue;
				A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
			}
		}
	}
	
}

int main (){
	int x,y,z;
	cin>>v>>e;
	for(int i=0;i<maxx;i++){
		for(int j=0;j<maxx;j++)	
			A[i][j]= i==j?0:inf ;
	}
	while(e--){
		cin>>x>>y>>z;
		A[x][y]=z;
	}
	floyd();
	
	bool negative = false;
	for (int i = 0; i < v; i++)
		if (A[i][i] < 0)
			negative = true;

	if (negative)
		printf("NEGATIVE CYCLE\n");
	else {
		for (int i = 0; i < v; i++) {
			for (int j = 0; j < v; j++) {
				if (A[i][j] == inf)
					printf("INF");
				else
					printf("%lld", A[i][j]);
				printf("%c", j == v - 1 ? '\n' : ' ');
			}
		}
	}
	
	return 0;
}

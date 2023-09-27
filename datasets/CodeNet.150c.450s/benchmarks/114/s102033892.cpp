#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 105
int matrix[N][N];
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_A
//spanning tree tree
bool power[N]; // start from 1;
int main(){
	int n;
	scanf("%d",&n);
	memset(matrix, 0,sizeof(matrix));
	memset(power,0,sizeof(power));
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			scanf("%d",&matrix[i][j]);//-1 means nothing
		}
	}
	int count = 0;
	int res = 0;
	int min = 2005;
	while(count<n-1){
		//find minmila ele from matrix
		int v1 = 0,v2 = 0;
		min = 2005;
		for(int i = 1; i<=n;i++){
			for(int j = 1;j<=n; j++){
				if(matrix[i][j]!=-1 && matrix[i][j]<min){
					if(count==0){
						if(power[i] == 0 && power[j]==0) {
							v1 = i;v2 = j;
							//printf("i:%d j:%d\n",i,j);
							min = matrix[i][j];
						}
						//continue;
					}else {
							if((power[i] == 1 && power[j]==0)||(power[i] == 0 && power[j]==1)){
							v1 = i;v2 = j;
							min = matrix[i][j];
						}
					}
					
				}
			}
		}
		//printf("min:%d\n",min);
		matrix[v1][v2] = -1;
		power[v1] = 1;
		power[v2] = 1;
		res+=min;
		count++;
	}
	printf("%d\n",res);
	return 0;
}

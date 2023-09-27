#include <stdio.h>
int main(){
	int r,c;
	int i,j;
	int v[101][101] = {{0}};
	scanf("%d %d",&r,&c);

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			int buf;
			scanf("%d",&buf);
			v[i][j] = buf;
			v[i][c] += buf;
		}
	}

	for(i=0;i<c;i++){
		for (j=0;j<r;j++){
			v[r][i] += v[j][i];
		}
		v[r][c] += v[r][i];
	}


	for(i=0;i<r+1;i++){
		for(j=0;j<c;j++){
			printf("%d ",v[i][j]);
		}
		printf("%d\n",v[i][c]);
	}
}
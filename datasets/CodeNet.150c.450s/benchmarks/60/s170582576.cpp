#include<iostream>
#include<cstdio>
#include<algorithm>

#define MAX 100
using namespace std;


int main(){
	int M[MAX][MAX]={0};
	int n,k,u,v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&u);
		scanf("%d",&k);
		for(int i=0;i<k;i++){
			scanf("%d",&v);
			M[u-1][v-1]=1;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j!=0)
			printf(" ");
			printf("%d",M[i][j]);
		}
		printf("\n");
	}
}
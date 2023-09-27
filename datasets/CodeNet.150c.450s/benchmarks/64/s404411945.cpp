#include <stdio.h>

#define N 2000

int n,m;
int S[N],T[N];

int solve(int num,int key){
	if(key == 0){
		return 1;
	}
	if(num >= n || key < 0){
		return 0;
	}
	return solve(num+1,key) || solve(num+1,key - S[num]);
}


int main(){

	scanf("%d",&n);

	int i;
	for(i=0;i<n;i++){
		scanf("%d",&S[i]);
	}

	scanf("%d",&m);

	for(i=0;i<m;i++){
		scanf("%d",&T[i]);
	}

	for(i=0;i<m;i++){
		if(solve(0,T[i])) printf("yes\n");
		else printf("no\n");
	}

	return 0;
}
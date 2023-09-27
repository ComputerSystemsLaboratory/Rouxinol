#include <stdio.h>

int n,A[50],q;

int solve(int c,int m){
	if(m==0)return 1;
	if(c>=n)return 0;
	int tans=solve(c+1,m) || solve(c+1,m-A[c]);
	return tans;
}

int main(){
	int B;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	scanf("%d",&q);
	for (int j=0;j<q;j++){
		scanf("%d",&B);
		int ans=solve(0,B);
	if(ans){
		printf("%s\n","yes");
	}else{
		printf("%s\n","no");
	}

	}
	return 0;
}
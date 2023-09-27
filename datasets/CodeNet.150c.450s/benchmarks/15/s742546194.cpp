#include <stdio.h>}

int main(void){
	int n,i,S[100000],q,j,T,C = 0,M;
	scanf("%d",&n);
	for (i=0;i!=n;i++){
		scanf("%d",&S[i]);
	}
	for (i=0;i!=n;i++){
		for (j=0;j!=n;j++){
			if (S[i]<S[j]){
				M=S[i];
				S[i]=S[j];
				S[j]=M;
			}
		}
	}
	scanf("%d",&q);
	for (j=0;j!=q;j++){
		scanf("%d",&T);
		for (i=0;i<n;i++){
			if (S[i]==T){
				C++;
				break;
			}
		}
	}
	printf("%d\n",C);
	
	return 0;
}
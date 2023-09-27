#include <stdio.h>

int main(void){
	int n,i,S[10000],q,j,T[500],C;
	scanf("%d",&n);
	for (i=0;i!=n;i++){
		scanf("%d",&S[i]);
	}
	for (j=0;j!=n;j++){
		for (i=0;i!=n;i++){
			if (S[i]==S[j]){
				if (i!=j){
					S[i]=-100;
				}
			}
		}
	}
	scanf("%d",&q);
	for (j=0;j!=q;j++){
		scanf("%d",&T[j]);
	}
	for (i=0;i!=q;i++){
		for (j=0;j!=q;j++){
			if (S[j]==S[i]){
				if (j!=i){
					S[j]=-10;
				}
			}
		}
	}
	for (C=0,j=0;j!=q;j++){
		for (i=0;i!=n;i++){
			if (S[i]==T[j]){
				C=C+1;
			}
		}
	}
	printf("%d\n",C);
	
	return 0;
}
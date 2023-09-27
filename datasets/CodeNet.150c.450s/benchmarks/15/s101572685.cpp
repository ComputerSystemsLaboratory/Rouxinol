#include <stdio.h>
int main(void)
{
int n,S[10000],i,j,q,T[500],t,C;
	scanf("%d",&n);
	for(i=0;i!=n;i++){
		scanf("%d",&S[i]);
	}
	scanf("%d",&q);
	for(j=0;j!=q;j++){
		scanf("%d",&T[j]);
	}
	C=0;
	for(i=0;i!=q;i++){
		for(t=0;t!=n;t++){
			if(T[i]==S[t]){
				C=C+1;
				break;
			}
		}
	}
	printf("%d\n",C);
	return 0;
}
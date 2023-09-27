#include<stdio.h>

int main(){
	int n,m,i,j;
	char nn[1000000],nm[1000000],mm[1000000];
	while(1){
		scanf("%d",&n);
		if(!n)break;
		for(i=0;i<n;i++){
			scanf(" %c %c",&nn[i],&nm[i]);
		}
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf(" %c",&mm[i]);
			for(j=0;j<n;j++)if(mm[i]==nn[j]){
				mm[i]=nm[j];
				break;
			}
		}
		puts(mm);
	}
}
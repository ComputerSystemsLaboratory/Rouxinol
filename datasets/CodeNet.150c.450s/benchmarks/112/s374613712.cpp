#include <stdio.h>
int main(){
	int n,m;
	int i,j;
	scanf("%d",&n);
	while(n!=0){
		char before[n],after[n];
		for(i=0;i<n;i++){
			scanf(" %c %c",&before[i],&after[i]);
		}
		scanf("%d",&m);
		char data[m];
		for(i=0;i<m;i++){
			scanf(" %c",&data[i]);
			for(j=0;j<n;j++){
				if(data[i]==before[j]){
					data[i]=after[j];
					break;
				}
			}
		}
		for(i=0;i<m;i++){
			printf("%c",data[i]);
		}
		printf("\n");
		scanf("%d",&n);
	}
	return 0;
}
#include<stdio.h>
int main(void)
{
	int n,m;
	int i,j;
	char a[100],b[100],c;

	scanf("%d",&n);
	while(n!=0){
		for(i=0;i<n;i++){
			scanf(" %c %c",&a[i],&b[i]);
		}
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf(" %c",&c);
			for(j=0;j<n;j++){
				if(a[j]==c){
					c=b[j];
					break;
				}
			}
			printf("%c",c);
		}
		printf("\n");
		scanf("%d",&n);
	}
	return 0;
}
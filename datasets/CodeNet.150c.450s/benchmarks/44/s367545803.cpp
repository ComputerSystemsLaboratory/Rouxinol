#include<stdio.h>
int main(void)
{
	int a[4];
	int b[4];
	int i,j;
	int hit,blow;
	while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])!=EOF){
	    scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
		hit=0;
		blow=0;
		for(i=0;i<4;i++){
			if(a[i]==b[i]){
				hit++;
			}
		}
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(a[i]==b[j]){
					blow++;
				}
			}
		}
		blow=blow-hit;
		printf("%d %d\n",hit,blow);
	}
	return 0;
}
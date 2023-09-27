#include<stdio.h>
int main()
{
	int a[4],b[4],hi,bl;
	while(!(scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]),scanf("%d%d%d%d",&b[0],&b[1],&b[2],&b[3])==EOF)){
		hi=0;
		bl=0;
		for(int i=0;i<4;i++){
			if(a[i]==b[i]){
				hi++;
			}else if(a[i]==b[0]||a[i]==b[1]||a[i]==b[2]||a[i]==b[3]){
				bl++;
			}
		}
		printf("%d %d\n",hi,bl);
	}
	return 0;
}
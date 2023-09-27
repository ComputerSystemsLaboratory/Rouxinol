#include<stdio.h>
int main(void){
	int a[4][3][10]={},n=0,b=0,f=0,r=0,v=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d",&b,&f,&r,&v);
		a[b-1][f-1][r-1]+=v;
		}
	for(int i=0;i<4;i++){
		if(i>0){
			printf("####################\n");
		}
		for(int i2=0;i2<3;i2++){
			for(int i3=0;i3<10;i3++){
				printf(" %d",a[i][i2][i3]);
			}
			puts("");
		}
	}

	return 0;
}
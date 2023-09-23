#include<stdio.h>
int main(){
	int x,y,a[100][100],s[100]={0},u[100]={0},num=0;
	scanf("%d %d",&y,&x);
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			scanf("%d",&a[j][i]);
			s[i]=s[i]+a[j][i];
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			u[i]=u[i]+a[i][j];
		}
		num = num+u[i];
	}
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			printf("%d ",a[j][i]);
		}
		printf("%d\n",s[i]);
	}
	for(int i=0;i<x;i++){
		printf("%d ",u[i]);
	}
	printf("%d\n",num);
	return 0;
}
#include<stdio.h>
int main()
{
	int v,b[100]={0},c=0;
	while(scanf("%d",&v)!=EOF){
		b[v-1]+=1;
	}
	for(int i=0;i<100;i++){
		if(b[i]>c){
			c=b[i];
		}
	}
	for(int i=0;i<100;i++){
		if(c==b[i]){
			printf("%d\n",i+1);
		}
	}
	return 0;
}
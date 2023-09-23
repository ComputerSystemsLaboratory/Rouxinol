#include<stdio.h>

int solve(int a,int b,int c){
	if(a==1&&b>=c&&b<10){
		return 1;
	}
	if(a==1)return 0;
	int ret=0;
	for(int i=c;i<10&&i<b;i++){
		ret+=solve(a-1,b-i,i+1);
	}
	return ret;
}
int main(){
	int a,b;
	while(1){
		scanf("%d%d",&a,&b);
		if(a==0)return 0;
		printf("%d\n",solve(a,b,0));
	}
}
#include <cstdio>

using namespace std;

int get_sum(int num,int sum,int *u,int n){
	int i,j;
	if(num==0&&sum==0){
		return 1;
	}
	if(n>9){
		return 0;
	}
	return (get_sum(num-1,sum-u[n],u,n+1)+get_sum(num,sum,u,n+1));
}

int main()
{
	int sum,num;
	int u[10];
	int i;
	while(1){
		scanf("%d %d",&num,&sum);
		if(num==0&&sum==0) break;
		for(i=0;i<10;i++){
			u[i]=i;
		}
		printf("%d\n",get_sum(num,sum,u,0));
	}
	return 0;
}
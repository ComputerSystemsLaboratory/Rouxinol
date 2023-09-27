#include<cstdio>
using namespace std;
int s;
int func(int now,int sum,int num){
	int count=0;
	if(!num)return s==sum?1:0;
	if(now==10 || !num || sum>s) return 0;
	count+=func(now+1,sum+now,num-1);
	count+=func(now+1,sum,num);
	return count;
}

int main(void){
	int n,i;
	while(scanf("%d %d",&n,&s),n){
		printf("%d\n",func(0,0,n));
	}
	return 0;
}
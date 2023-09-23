#include<cstdio>

int solve(int a,int b){
	if(a==0){
		if(0<=b&&b<=9)return 1;
		else return 0;
	}
	int res=0;
	for(int i=0;i<10;i++){
		res+=solve(a-1,b-i);
	}
	return res;
}

int main(){
	int a;
	while(~scanf("%d",&a))	printf("%d\n",solve(3,a));
	return 0;
}
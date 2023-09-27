#include<cstdio>

int main(){
	int d;
	while(~scanf("%d",&d)){
		int ans=0;
		for(int i=d;i<600;i+=d)ans += i*i;
		printf("%d\n",ans*d);
	}
	return 0;
}
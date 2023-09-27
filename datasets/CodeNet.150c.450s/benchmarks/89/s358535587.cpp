#include<stdio.h>
bool prime(int n){
	if(n<2)return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	while(a|b|c){
		int d=a;
		while(1){
			if(prime(d))c--;
			if(c==0)break;
			d+=b;
		}
		printf("%d\n",d);
		scanf("%d%d%d",&a,&b,&c);
	}
}
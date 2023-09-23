#include<stdio.h>
bool ss(int n){
	if(n<=1) return false;
	if(n==2||n==3) return true;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int i,n,j=0,k,o;
	scanf("%d",&o);
	while(o--){
		scanf("%d",&n);
		if(ss(n)){
			j++;
		}
	}
	printf("%d\n",j);
} 

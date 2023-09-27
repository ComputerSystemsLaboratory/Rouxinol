#include <stdio.h>
int n,k,x[100005],cur,ret;
int main(){
for(;;){
	ret=-2000000000;cur=0;
	scanf("%d%d",&n,&k);if(!n)return 0;
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
		cur+=x[i];
		if(i>=k) cur-=x[i-k];
		if(i>=k-1&&ret<cur) ret=cur;
	}
	printf("%d\n",ret);
}
}
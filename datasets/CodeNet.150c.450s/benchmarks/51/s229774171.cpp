#include <stdio.h>
int main(){
	int i,n,u,v,count=0;
	bool flag[31];
	for(i=1;i<31;i++) flag[i] = false;
	for(i=0;i<28;i++){
		scanf("%d",&n);
		flag[n] = true;
	}
	for(i=1;i<31;i++){
		if(!flag[i]&&!count){
			u = i;count++;
		}
		if(!flag[i]&&(count>0)) v = i;
	}
	if(u<v)	printf("%d\n%d\n",u,v);
	else	printf("%d\n%d\n",v,u);
	return 0;
}
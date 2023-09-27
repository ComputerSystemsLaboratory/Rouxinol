#include <stdio.h>

int main(){
	int i,w,n,a,b,tmp,line[30];
	scanf("%d",&w);
	scanf("%d",&n);
	for(i = 0;i < w;i++) line[i] = i + 1;
	for(i = 0;i < n;i++){
		scanf("%d,%d",&a,&b);
		tmp = line[a - 1];
		line[a - 1] = line[b - 1];
		line[b - 1] = tmp;
	}
	for(i = 0;i < w;i++) printf("%d\n",line[i]);
}
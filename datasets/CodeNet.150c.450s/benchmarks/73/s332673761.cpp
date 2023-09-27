#include <stdio.h>
#include <stdlib.h>
#define sizemax 100001
int *tree;
int n;
void add(int a,int w){
	for(int x=a;x<=n;x+=x&-x)tree[x]+=w;
}

int sum(int a){
	int ret=0;
	for(int x=a;x>0;x -=x&-x)ret+=tree[x];
	return ret;
}

void init(){
	int i;
	for(i=0;i<=n;i++)
		tree[i]=0;
}

int main(void){
	int w,i,com,x,y;
	scanf("%d %d",&n,&w);
	tree=(int *)calloc(n+1,sizeof(int));
	init();
	for(i=0;i<w;i++){
		scanf("%d %d %d",&com,&x,&y);
		if(com == 0){
			add(x,y);
		}
		if(com == 1)
			printf("%d\n",sum(y)-sum(x-1));
	}
	return 0;
}
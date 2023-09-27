#include<stdio.h>
int main(){
	while(1){
		int a;
		scanf("%d",&a);
		if(!a)break;
		int b=0,c=0;
		for(int i=0;i<a;i++){
			int d,e;
			scanf("%d%d",&d,&e);
			if(d>e)b+=d+e;
			else if(d==e){b+=d;c+=e;}
			else c+=d+e;
		}
		printf("%d %d\n",b,c);
	}
}


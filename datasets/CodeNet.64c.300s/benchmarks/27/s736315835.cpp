#include<stdio.h>
int main(){
	int x,y;
	while(1){
		int flag=0;
		scanf("%d %d",&x,&y);
		if(x==0&&y==0)	break;
		for(int a=1;a<=x;a++){
			for(int b=1;b<=x;b++){
				for(int c=1;c<=x;c++){
					if(a!=b&&b!=c&&c!=a&&(a+b+c)==y)	flag++;
				}
			}
		}
		printf("%d\n",flag/6);
	}
	return 0;
}
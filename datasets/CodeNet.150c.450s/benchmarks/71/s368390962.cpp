#include<stdio.h>
#include<iostream>

int main(){
	int n,a,b,c,d,count;
	while(scanf("%d",&n)==1){
	count = 0;
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				for(d=0;d<10;d++){
					if(a+b+c+d == n) count = count + 1;
				}
			}
		}
	}
	printf("%d\n",count);
	}
	return 0;
}
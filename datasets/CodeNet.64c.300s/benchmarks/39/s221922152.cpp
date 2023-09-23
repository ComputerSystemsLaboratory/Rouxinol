#include<stdio.h>

int main(void){

int n,h;
int a,b,c,d;

while( scanf("%d",&n) != EOF){
	h=0;
	for(a=0;a<=9;a++){
	for(b=0;b<=9;b++){
	for(c=0;c<=9;c++){
	for(d=0;d<=9;d++){
		if( (a+b+c+d) == n )h++;
	}
	}
	}
	}
	printf("%d\n",h);
}

return 0;
}
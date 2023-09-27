#include <cstdio>

int main(){
	int i,a,b,c;
	for(a=b=i=0;i<8;i++)
		scanf("%d",&c),i<4?a+=c:b+=c;
	printf("%d\n",(a>b)?a:b);
}
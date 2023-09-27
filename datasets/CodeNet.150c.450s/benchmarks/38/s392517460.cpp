#include<stdio.h>
int main(void)
{
	int n,a,b,c,i,l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	l=0;
		scanf("%d %d %d",&a,&b,&c);
	if(a<c&&b<c){
		if(a*a+b*b==c*c){
		l=1;
			printf("YES\n");	
		}
	}
	else if(a<b&&c<b){
		if(a*a+c*c==b*b){
		l=1;
			printf("YES\n");
		}
	}
	else if(b<a&&c<a){
		if(c*c+b*b==a*a){
			l=1;
			printf("YES\n");
		}
	}
	if(l==0){
	printf("NO\n");
	}
	}
	return 0;
}
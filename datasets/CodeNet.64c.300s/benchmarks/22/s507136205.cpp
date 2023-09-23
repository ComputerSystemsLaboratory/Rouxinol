#include<stdio.h>

int main(){

	int i,temp;
	int n;
	int a,b,c;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		
		if(a < b){temp=a;a=b;b=temp;}
		if(a < c){temp=a;a=c;c=temp;}
		
		if(a*a == b*b + c*c)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
#include<stdio.h>
int A=0,B=0;
int a,b;

void Total(){
	if(a>b)	A+=a+b;
	else if(a<b) B+=a+b;
	else {A+=b;B+=a;}
}

int main(){
	int n,i;
	for(;;){
		scanf("%d",&n);
		if(n!=0){
			for(i=0;i<n;i++){
				scanf("%d%d", &a, &b);
				Total();
			}
			printf("%d %d\n",A,B);
			A=B=0;
		}else break;
	}
	return 0;
}
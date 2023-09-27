#include<stdio.h>
int main(){
int a,b,c,d,kazu=0;
	scanf("%d %d %d",&a,&b,&c);
	for(d = a;d<=b;d++){
		if((c%d)==0){
			kazu++;
		}
	}
	printf("%d\n",kazu);
	return 0;
}
#include<stdio.h>
int main(){
for(;;){
	int ap=0,bp=0,a,b,t,d;
	scanf("%d",&d);
	if(d==0)
	break;
	for(t=0;t<d;t++){
		scanf("%d %d",&a,&b);
		if(a==b){
			ap+=a;
			bp+=b;
		}
		else if(a<b)
		bp+=a+b;
		else
		ap+=a+b;
	}
	printf("%d %d\n",ap,bp);
}
return 0;
}
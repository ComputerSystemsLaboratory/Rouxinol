#include <stdio.h>

int main(){
	int a=0,b=0,i,F;
		
	while(scanf("%d%d",&a,&b)!=EOF){
	F=1;
	if ((a+b)/10>=1) F=2;
	if ((a+b)/100>=1) F=3;
	if ((a+b)/1000>=1) F=4;
	if ((a+b)/10000>=1) F=5;
	if ((a+b)/100000>=1) F=6;
	if ((a+b)/1000000>=1) F=7;
	
	printf("%d",F);
	}
	return 0;
}
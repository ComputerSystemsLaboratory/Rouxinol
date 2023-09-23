#include<stdio.h>

int main(void){
	int a,b,c,yaku,d;
	yaku = 0;
	scanf("%d\n%d\n%d",&a,&b,&c);
	while(1){
	    if(a>b){
		     printf("%d\n",yaku);
			 break;
	    }
	    else if(a<=b){
		     d = c % a;
			 a = a + 1;
		     if(d==0){
			     yaku = yaku + 1;
		     }else{
		     }
		}
	}



	return 0;
}
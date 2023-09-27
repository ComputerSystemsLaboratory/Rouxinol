#include<stdio.h>
typedef struct {
	char direction[100];
	int num1,num2,num3,num4,num5,num6;
}DICE_t;
int main(){
	DICE_t a;
	scanf("%d %d %d %d %d %d",&a.num1,&a.num2,&a.num3,&a.num4,&a.num5,&a.num6);
	int e,dummy;
	if((e=getchar())=='\n'){
		scanf("%s",a.direction);
	    for(int i=0;a.direction[i]!=0;i++){
	        if(a.direction[i]=='N'){
		        dummy=a.num5;
	        	a.num5=a.num1;
	        	a.num1=a.num2;
	        	a.num2=a.num6;
	        	a.num6=dummy;
	        }
	        else if(a.direction[i]=='S'){
		         dummy=a.num6;
	        	a.num6=a.num2;
	        	a.num2=a.num1;
	        	a.num1=a.num5;
	        	a.num5=dummy;
	        }
	        else if(a.direction[i]=='E'){
		        dummy=a.num4;
	        	a.num4=a.num6;
	        	a.num6=a.num3;
	        	a.num3=a.num1;
	        	a.num1=dummy;
	        }
	        else if(a.direction[i]=='W'){
	            dummy=a.num1;
	        	a.num1=a.num3;
	        	a.num3=a.num6;
	        	a.num6=a.num4;
	        	a.num4=dummy;
	        }
	    	
        }
	    printf("%d\n",a.num1);
	}
	return 0;
}
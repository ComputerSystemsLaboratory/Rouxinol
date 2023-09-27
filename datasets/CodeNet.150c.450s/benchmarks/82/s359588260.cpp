#include<stdio.h>
#include<string.h>
typedef struct {
	char direction[100];
	int num1,num2,num3,num4,num5,num6;
}DICE_t;
int main(){
	DICE_t a;
	scanf("%d %d %d %d %d %d",&a.num1,&a.num2,&a.num3,&a.num4,&a.num5,&a.num6);
	int n,x,y,dummy;
	scanf("%d",&n);
	for(int times=0;times<n;times++){
	    int turn=0;
		scanf("%d %d",&x,&y);
	    while(1){
		    if(a.num1!=x){
		    	strcpy(a.direction,(turn%2==0 ?"N":"E"));
	    	}
    		else if(a.num1==x&&a.num2!=y){
    			strcpy(a.direction,"SEN");
    		}
    		else if(a.num1==x&&a.num2==y)break;
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
	    	turn++;
	    }
		printf("%d\n",a.num3);
	}
	
	return 0;
}
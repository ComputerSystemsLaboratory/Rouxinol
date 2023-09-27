#include <stdio.h>  

int main(){
    int hi[10];
    int n,count=0;
    while(scanf("%d",&n) != EOF){
	if(n == 0){
	    printf("%d\n",hi[count-1]);
	    hi[count-1]=0;
	    count--;
	}
	else{
	    hi[count]=n;
	    count++;
	}
    }
    return 0;  
}
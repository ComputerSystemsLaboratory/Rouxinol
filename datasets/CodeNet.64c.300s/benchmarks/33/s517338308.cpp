#include <stdio.h>
#include <string.h>
int main(void){
    int a,b;
    int d[3000];
    char c[100];
    int n,j;
    n=1;
    j = 0;
    while(j == 0){
	scanf("%d %s %d",&a,&c,&b);
	if(strcmp(c,"?") == 0){
	    j = 1;
	}else{
	    if(strcmp(c,"+")==0){
		d[n] = a+b;
	    }else if(strcmp(c,"-")==0){
		d[n] = a-b;
	    }else if(strcmp(c,"*")==0){
		d[n] = a*b;
	    }else if(strcmp(c,"/")==0){
		d[n] = a/b;
	    }
	    n++;
	}
    }

    for(int i=1;i<n;i++){
	j = d[i];	
	printf("%d\n",j);
    }
}
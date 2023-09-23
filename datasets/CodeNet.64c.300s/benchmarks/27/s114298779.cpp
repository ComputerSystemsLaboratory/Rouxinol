#include<stdio.h>
int main(void){
        int n,x,i,j,k,c;
        int a[1024]={0};
        c=0;
	while(1){
             scanf("%d %d",&n,&x);
             if(n==0 && x==0){
                  break;
             }
             for(i=1;i<=n-2;i++){
	          for(j=i+1;j<=n-1;j++){
	               for(k=j+1;k<=n;k++){
	                    if(i+j+k==x){
                                 a[c]++;
                            }
                       }
                  }
             }
             c=c+1;
	}
        for(i=0;i<c;i++){
	     printf("%d\n",a[i]);
        }
	return 0;
}

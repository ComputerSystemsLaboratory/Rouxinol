#include <stdio.h>
int main(){
    int a[10000],k,l;
    l =0; 
    while(1){
        scanf("%d",&k);

        if(k == 0){ 
            break;
        }   

        a[l]=k;
        l++;
    }   

    for(k=0;k<l;k++){
        printf("Case %d: %d\n",k+1,a[k]);
    }   
}
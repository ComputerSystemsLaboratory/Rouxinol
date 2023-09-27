#include<stdio.h>
int main(void){
   int dan,i,j,k,ans[31]={0},year;
    for(;;){
    scanf("%d",&dan);
    if(dan==0)break;
    year=0;
    ans[0]=1;
    for(i=1;i<=dan;i++){
        if(i==1){
            ans[1]=ans[0];
        }
        else if(i==2){
            ans[2]=ans[0]+ans[1];
        }
        else ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
    }
    if(ans[dan]%3650==0){
        year=ans[dan]/3650;
    }
    else{
        year=ans[dan]/3650+1;
    }
    printf("%d\n",year);
    }
return 0;
}
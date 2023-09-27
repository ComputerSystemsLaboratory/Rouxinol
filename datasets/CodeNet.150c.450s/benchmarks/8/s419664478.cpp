#include <stdio.h>
#include <string.h>
int main(void){
    char b[101],c[101];
    int a,i,tcnt=0,hcnt=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%s %s",&b,&c);       
        if(strcmp(b,c)>0)
            tcnt+=3;
        if(strcmp(b,c)==0){
            tcnt++;
            hcnt++;}
        if(strcmp(b,c)<0)
            hcnt+=3;
    }
    printf("%d %d\n",tcnt,hcnt);
    return 0;
}
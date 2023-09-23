#include<stdio.h>

int main(){
    int i,a,b,c,d,n;
    int stack[50],sp=0;
    while(scanf("%d",&stack[sp++])!=EOF);
    for(i=0;i<sp-1;i++){
        n=0;
        for(a=0;a<10;a++)
        for(b=0;b<10;b++)
        for(c=0;c<10;c++)
        for(d=0;d<10;d++)
            if(stack[i]==a+b+c+d)n++;
        printf("%d\n",n);
    }
    return 0;
}
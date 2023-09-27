#include<cstdio>

int main(){
    int a,b,i,sum;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        sum=a+b;
        for(i=0;sum>0;i++)sum=sum/10;
        printf("%d\n",i);
    }
    return 0;
}
#include<cstdio>
int main(void)
{
    int a,b=0,c=0,mode[100]={0};
    while(scanf("%d",&a)!=EOF)
    {
        mode[a-1]++;
        c++;
    }
    for(int i=0;i<c;i++)if(mode[i]>b)b=mode[i];
    for(int i=0;i<c;i++)if(mode[i]==b)printf("%d\n",i+1);
    return 0;
}
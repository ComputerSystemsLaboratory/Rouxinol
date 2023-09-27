#include<stdio.h>
int line[30];
int n,m;
int a,b;
int mem[2];

int main()
{
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        line[i]=i+1;
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d,%d",&a,&b);
        mem[0]=line[a-1];
        mem[1]=line[b-1];
        line[a-1]=mem[1];
        line[b-1]=mem[0];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",line[i]);
    }
}
#include <iostream>
#include <cstdio>
using namespace std;

long ne(long a,int l)
{
    int i,j,t,s[7]={0};
    double x=0,y=0;
    for(i=0;i<l;i++)
    {
        if(a>0)
        {
            s[i]=a%10;
            a=a/10;
        }
    }
    for(i=0;i<l;i++)//sheng
        for(j=i+1;j<l;j++)
        if(s[i]>=s[j])
        {
            t=s[i];s[i]=s[j];s[j]=t;
        }
    for(i=0;i<l;i++)
    x=x*10+s[i];//min
    //printf("x===%ld\n",x);
    for(i=l-1;i>=0;i--)
    y=y*10+s[i];//max
    //printf("y===%ld\n",y);
    return y-x;
}

int main()
{
    long a[21];
    int l,i,j,tag;
    //freopen("in.txt","r",stdin);
    while(scanf("%ld%d",&a[0],&l))
    {

        if(a[0]==0 && l==0)break;
        tag=0;
        for(i=1;i<=20;i++)
        {
            if(tag)break;
            a[i]=ne(a[i-1],l);
            //printf("%ld\n",a[i]);
            for(j=0;j<i;j++)
            if(a[i]==a[j])
            {
                printf("%d %ld %d\n",j,a[i],i-j);
                tag=1;
                break;
            }
        }
        //puts("");
    }
    return 0;
}
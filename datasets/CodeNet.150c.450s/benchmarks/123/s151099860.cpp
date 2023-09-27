#include<cstdio>
#include<cmath>

int a[10000];

int judge(int n)
{
    int i,a=1;
    for(i=2;i<sqrt(n)+1;i++)
        if(n%i==0 &&n!=2) a=0;
    return a;
}

int main()
{
    int i,n,count;
    
    while(~scanf("%d",&n))
    {
        count = 0;
        while(n--) scanf("%d",&a[count++]);
        int ans=0;
        for(i=0;i<count;i++) if(judge(a[i])) ans++;
        printf("%d\n",ans);
    }
    return 0;
}
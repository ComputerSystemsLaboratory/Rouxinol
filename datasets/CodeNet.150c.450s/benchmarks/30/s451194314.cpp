#include<cstdio>

int main()
{
    int a[1000];
    int n;
    while(~scanf("%d",&n))
    {
        int i,j;
        int l = 0,m,t,count=0;
        while(n--) scanf("%d",&a[l++]);

        for(i=0;i<l;i++)
        {
            m=i;
            for(j=i;j<l;j++)
            {
                if(a[j]<a[m]) m=j;
            }
            if(m!=i)
            {t=a[m];
            a[m]=a[i];
            a[i]=t;count++;}
        }
        for(i=0;i<l;i++) printf("%d%c",a[i],(i==l-1)?'\n':' ');
        printf("%d\n",count);
    }
    return 0;
}
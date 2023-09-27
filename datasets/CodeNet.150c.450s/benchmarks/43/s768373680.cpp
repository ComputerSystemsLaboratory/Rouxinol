#include<cstdio>
int main()
{
    int n,A,B,a,b;
    while(1)
    {
        A=0;
        B=0;
        scanf("%d",&n);
        if(n==0)break;
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&a,&b);
            if(a>b)A=A+a+b;
            else if(a<b)B=B+a+b;
            else
            {
                A+=a;
                B+=b;
            }
        }
        printf("%d %d\n",A,B);
    }
    return 0;
}
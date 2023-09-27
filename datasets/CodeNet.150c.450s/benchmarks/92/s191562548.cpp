#include <cstdio>
int main()
{
        int a,b,c;
        while(scanf("%d",&a)!=EOF)
        {
                scanf(" %d",&b);
                c=a+b;
                int cnt,i;
                i=1;
                for(cnt=0;;cnt++)
                {       
                        if(c/i==0)break;
                        i=i*10;
                }
                printf("%d\n",cnt);
        }
         
        return 0;
}
#include<stdio.h>
int main()
    {
        int a[10],i,max=0,f_max=0,s_max=0;
        for(i=0;i<=9;i++)
            {
                scanf("%d",&a[i]);
            }
        for(i=0;i<=9;i++)
            {
                if(max<=a[i])
                    max=a[i];
            }
            for(i=0;i<=9;i++)
            {
                if(a[i]==max)
                    continue;
                else if(f_max<=a[i])
                    f_max=a[i];
            }
            for(i=0;i<=9;i++)
            {
                if(a[i]==max||a[i]==f_max)
                    continue;
                else if(s_max<=a[i])
                    s_max=a[i];
            }
        printf ("%d\n",max);
        printf ("%d\n",f_max);
        printf ("%d\n",s_max);
    }
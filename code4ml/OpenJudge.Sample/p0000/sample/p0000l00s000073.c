#include<stdio.h>
int main()
{
    int n[10],i,j,temp;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(n[j]<n[j+1])
            {
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }

        }

    }
    for(j=0;j<3;j++)
    printf("%d\n",n[j]);
    return 0;
}

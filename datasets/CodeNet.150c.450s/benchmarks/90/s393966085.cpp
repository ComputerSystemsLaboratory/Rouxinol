
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,ara[1000],n=0,ara2[1000],k=0,c=1,max=0,mode,m;

    while (scanf ("%d",&m)!=EOF)
    {
        ara[n]=m;
        n++;
    }
    for (i=0;i<n-1;i++)
    {
        mode=0;
        for (j=i+1;j<n;j++)
        {
            if (ara[i]==ara[j])
            {
                mode++;
            }
        }
        if ((mode>max) && (mode!=0))
        {
            k=0;
            max=mode;
            ara2[k]=ara[i];
            k++;
        }
        else if (mode==max)
        {
            ara2[k]=ara[i];
            k++;
        }
    }
        sort(ara2,ara2+k);
        for (i=0;i<k;i++)
        {
            printf("%d\n",ara2[i]);
        }
        return 0;
}

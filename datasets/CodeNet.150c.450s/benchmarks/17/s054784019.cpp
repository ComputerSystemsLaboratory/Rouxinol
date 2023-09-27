 #include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{

    int a[100],n=5;
    int temp =0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }



    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {

              swap(a[i],a[j]);

            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i<4)
        printf(" ");
        else printf("\n");
    }
    return 0;
}
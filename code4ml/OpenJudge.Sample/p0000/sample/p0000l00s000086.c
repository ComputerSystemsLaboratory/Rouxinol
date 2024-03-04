#include <stdio.h>

int main()
{
    long long int arr[10],i,j,temp,n=10;

    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }


    for(i=0;i<n;i++)
    {
        for(j=i;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for(i=9;i>=7;i--)
    {
        printf("%lld\n",arr[i]);
    }


    return 0;
}
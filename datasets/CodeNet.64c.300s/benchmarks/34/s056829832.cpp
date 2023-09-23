#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
int a[111],n;
void shuchu()
{
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }
    printf("\n");
}
void charupx(int a[],int n)
{
    int i,j,t;
    for(int i=1; i<n; i++)
    {
        j=i-1;
        t=a[i];
        while(a[j]>=0 && t<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
        shuchu();
    }

}
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    shuchu();
    charupx(a,n);
    return 0;
}
/*

*/


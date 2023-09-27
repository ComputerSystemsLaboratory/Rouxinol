#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#define maxn 2000000
using namespace std;

int a[maxn+5],h;

void maxheapfy(int i)
{
    int l=i*2;
    int r=i*2+1;
    int large;
    if(l<=h && a[l]>a[i])
        large=l;
    else large=i;
    if(r<=h && a[r]>a[large])
        large=r;

    if(large!=i)
    {
         swap(a[i],a[large]);
         maxheapfy(large);
    }

}

int main()
{
    scanf("%d",&h);
    for(int i=1;i<=h;i++)
        scanf("%d",&a[i]);
    for(int i=h/2;i>=1;i--)
    {
        maxheapfy(i);
    }
    for(int i=1;i<=h;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
    return 0;
}
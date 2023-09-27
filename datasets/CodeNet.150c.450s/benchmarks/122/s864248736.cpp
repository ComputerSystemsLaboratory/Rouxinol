#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#define maxn 2000000
#define infly 1<<30
using namespace std;

int a[maxn+5],h;
char s[100];

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

void heapinsert(int i,int k)
{
    if(k<a[i]) return;
    a[i]=k;
    while(i>1 && a[i/2]<a[i])
    {
        swap(a[i],a[i/2]);
        i/=2;
    }
}

void insert(int k)
{
    a[++h]=-infly;
    heapinsert(h,k);
}

int extract()
{
    if(h<1) return -infly;
    int maxv=a[1];
    swap(a[h],a[1]);
    h--;
    maxheapfy(1);
    return maxv;
}

int main()
{
    int k;
    while(scanf("%s",s) && s[2]!='d')
    {
        if(s[0]=='i')
        {
            scanf("%d",&k);
            insert(k);
        }
        else if(s[0]=='e')
        {
            printf("%d\n",extract());
        }
    }
    return 0;
}
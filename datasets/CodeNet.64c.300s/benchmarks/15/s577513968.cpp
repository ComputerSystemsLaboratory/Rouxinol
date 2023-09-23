#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <stack>
using namespace std;
const int maxn=100+10;
int n;
int a[maxn];

void select_sort(int a[],int n)
{
    int swap_cnt=0;
    int minh;
    for(int i=0;i<n;i++)
    {
        minh=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[minh]) minh=j;
        }
        if(i!=minh)
        {
            swap(a[minh],a[i]);
            swap_cnt++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i) printf(" ");
        printf("%d",a[i]);
    }
    printf("\n%d\n",swap_cnt);
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    select_sort(a,n);

    return 0;
}
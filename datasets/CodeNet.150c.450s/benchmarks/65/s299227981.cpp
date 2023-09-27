#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn=40;
int n;
char a[maxn][3];
char b[maxn][3];
char c[maxn][3];
void bubble_sort()
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(b[j][1]<b[j-1][1]) swap(b[j],b[j-1]);
        }
    }
}
void select_sort()
{
    for(int i=0;i<n;i++)
    {
        int minh=i;
        for(int j=i;j<n;j++)
        {
            if(c[j][1]<c[minh][1]) minh=j;
        }
        if(i!=minh) swap(c[i],c[minh]);
    }
}

int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    memcpy(b,a,sizeof(a));
    bubble_sort();
    for(int i=0;i<n;i++)
    {
        if(i) printf(" ");
        printf("%s",b[i]);
    }
    printf("\nStable\n");
    memcpy(c,a,sizeof(a));
    select_sort();
    for(int i=0;i<n;i++)
    {
        if(i) printf(" ");
        printf("%s",c[i]);
    }
    printf("\n");
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(strcmp(b[i],c[i])!=0)
        {
            flag=false;
            break;
        }
    }

    if(flag)
    {
        printf("Stable\n");
    }
    else
    {
         printf("Not stable\n");
    }





    return 0;
}
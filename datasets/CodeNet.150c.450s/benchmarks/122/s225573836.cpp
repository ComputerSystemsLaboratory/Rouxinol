#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int n;int h;
int a[10000000];
void jiaohuan(int k)
{
    int l=k*2,r=k*2+1;
    int maxn;
    if(l<=h&&a[l]>a[k]){
        maxn=l;
    }else {
        maxn=k;
    }
    if(r<=h&&a[maxn]<a[r]){
        maxn=r;
    }
    if(maxn!=k){
        swap(a[k],a[maxn]);
        jiaohuan(maxn);
    }
    return;
}
void minsert(int k)
{
    h++;
    a[h]=k;
    int i=h;
    while(i>1&&a[i]>a[i/2]){
        swap(a[i],a[i/2]);
        i/=2;
    }
}
int shanchu()
{
    int maxv;
    maxv=a[1];
    a[1]=a[h--];
    jiaohuan(1);
    return maxv;
}
int main()
{
    char b[20];
    while(scanf("%s",b)!=EOF)
    {
        if(b[0]=='i'){
            scanf("%d",&n);
            minsert(n);
        }
        else if(b[0]=='e'&&b[1]=='x'){
           printf("%d\n",shanchu());
        }
        else if(b[0]=='e'&&b[1]=='n') return 0;
    }
    return 0;
}
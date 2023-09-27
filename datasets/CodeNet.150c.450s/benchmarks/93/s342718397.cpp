#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
struct pai
{
    char huase[1];
    int shuzi;
} x[100005],v[100005];
bool f(pai a,pai b)
{
    return a.shuzi<b.shuzi;
}
pai L[100000/2+2],R[100000/2+2];
int fg(pai a[],int p,int r)
{
    pai x=a[r];
    int j=p,i=p-1;
    for(j;j<r;j++)
    {
        if(a[j].shuzi<=x.shuzi)
        {
            i++;
          swap(a[i],a[j]);
      /*int t=a[i];
      a[i]=a[j];
      a[j]=t;*/
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
    /*int t=a[i+1];
    a[i+1]=a[j];
    a[j]=t;*/
}
void guibing(pai a[],pai b[],pai c[],int left,int mid,int right)
{
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++)
    {
        b[i]=a[left+i];
    }
    for(int i=0;i<n2;i++)
    {
        c[i]=a[mid+i];
    }
    b[n1].shuzi=c[n2].shuzi=1000000002;
    int i=0,j=0;
    for(int k=left;k<right;k++)
    {
        if(b[j].shuzi<=c[i].shuzi)
        {
            a[k]=b[j++];
        }
        else a[k]=c[i++];
    }

}
void guigingpai(pai a[],int left,int right)
{
    if(left+1<right)
    {
        int mid=(left+right)/2;
        guigingpai(a,left,mid);
        guigingpai(a,mid,right);
        guibing(a,L,R,left,mid,right);
    }
}
void qs(pai a[],int left,int right)
{
    if(left<right)
    {
        int q=fg(a,left,right);
        qs(a,left,q-1);
        qs(a,q+1,right);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        //cin>>x[i].huase;
        scanf("%s",&x[i].huase);
        scanf("%d",&x[i].shuzi);
        v[i].shuzi=x[i].shuzi;
        v[i].huase[0]=x[i].huase[0];
    }
    guigingpai(v,0,n);
    //stable_sort(v,v+n,f);
    qs(x,0,n-1);
   /* for(int i=0;i<n;i++)
    {
        printf("%s %d\n",v[i].huase,v[i].shuzi);
    }*/
    for(int i=0;i<n;i++)
    {
        if(x[i].huase[0]!=v[i].huase[0])
        {
             printf("Not stable\n");
             break;
        }

        if(i==n-1)
        {
            printf("Stable\n");
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",x[i].huase,x[i].shuzi);
    }
    return 0;
}
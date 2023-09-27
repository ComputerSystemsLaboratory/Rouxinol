#include<stdio.h>
const int maxn=100000+10;
const long long big=2000000000;
struct card
{
    int shu;
    char fu;
};
card L[maxn/2+2],R[maxn/2+2];
void zhenghe(card a[],int left,int mid,int right)
{
    int n1=mid-left;
    int n2=right-mid;
    for (int i=0;i<n1;i++) L[i]=a[left+i];
    for (int i=0;i<n2;i++) R[i]=a[mid+i];
    L[n1].shu=R[n2].shu=big;
    int i=0,j=0;
    for (int k=left;k<right;k++)
    {
        if(L[i].shu<=R[j].shu)
            a[k]=L[i++];
        else a[k]=R[j++];
    }
}
void guibing(card a[],int left,int right)
{
    if(left+1<right)
    {
        int mid=(left+right)/2;
        guibing(a,mid,right);
        guibing(a,left,mid);
        zhenghe(a,left,mid,right);
    }
}
int fenge(card a[],int left,int right)
{
    card x,t;
    x=a[right];
    int i=left-1;
    for (int j=left;j<right;j++)
    {
        if(a[j].shu<=x.shu)
        {
         i++;
         t=a[i];a[i]=a[j];a[j]=t;
        }
    }
    t=a[i+1];a[i+1]=a[right];a[right]=t;
    return i+1;
}
void quicksort(card a[],int left,int right)
{
    int q;
    if(left<right)
    {
        q=fenge(a,left,right);
        quicksort(a,left,q-1);
        quicksort(a,q+1,right);
    }
}
int main()
{
    int n,huan,biao=1;
    card a[maxn],b[maxn];
    char c[10];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%s %d",c,&huan);
        a[i].shu=b[i].shu=huan;
        a[i].fu=b[i].fu=c[0];
    }
    quicksort(b,0,n-1);
    guibing(a,0,n);
    for (int i=0;i<n;i++)
    {
        if(a[i].fu!=b[i].fu)
         biao=0;
    }
    if(biao==0) printf("Not stable\n");
    else printf("Stable\n");
    for (int i=0;i<n;i++)
    {
        printf("%c %d\n",b[i].fu,b[i].shu);
    }
    return 0;
}
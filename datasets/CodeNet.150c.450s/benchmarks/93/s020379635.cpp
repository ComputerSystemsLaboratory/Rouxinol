#include<cstdio>
using namespace std;
#define maxn 100005
#define sentinel 2000000000
struct card
{
    char suit;
    int value;
};
typedef struct card card;

card L[maxn/2],R[maxn/2];
card a[maxn],b[maxn];
int n;

void _merge(int left,int mid,int right)
{
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;++i)
        L[i]=a[left+i];
    for(int i=0;i<n2;++i)
        R[i]=a[mid+i];
    L[n1].value=R[n2].value=sentinel;
    int i=0,j=0;
    for(int k=left;k<right;k++)
    {
        if(L[i].value<=R[j].value)
            a[k]=L[i++];
        else
            a[k]=R[j++];
    }
}
void mergesort(int n,int left,int right)
{
    int mid;
    if(left+1<right)
    {
        mid=(left+right)>>1;
        mergesort(n,left,mid);
        mergesort(n,mid,right);
        _merge(left,mid,right);
    }
}
int _partition(int n,int p,int r)
{
    card x=b[r];
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if(b[j].value<=x.value)
        {
            i++;
            card t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
    }
    card t=b[i+1]; b[i+1]=b[r];b[r]=t;
    return i+1;
}
void quicksort(int n,int p,int r)
{
    int q;
    if(p<r)
    {
        q=_partition(n,p,r);
        quicksort(n,p,q-1);
        quicksort(n,q+1,r);
    }
}
int main()
{
    int stable=1;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        char str[3];
        int x;
        scanf("%s %d",str,&x);
        a[i].suit=b[i].suit=str[0];
        a[i].value=b[i].value=x;
    }
    mergesort(n,0,n);
    quicksort(n,0,n-1);
    for(int i=0;i<n;++i)
    {
        if(a[i].suit!=b[i].suit) stable=0;
    }
    if(stable) printf("Stable\n");
    else printf("Not stable\n");
    for(int i=0;i<n;++i)
    {
        printf("%c %d\n",b[i].suit,b[i].value);
    }
    return 0;
}
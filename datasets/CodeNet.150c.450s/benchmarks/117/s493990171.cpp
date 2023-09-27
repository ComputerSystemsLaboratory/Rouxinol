#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define INF 2e9
const int maxn=500000+10;
int n;
int a[maxn];
int L[maxn/2+2],R[maxn/2+2];
int cnt=0;
void merge(int a[],int left,int mid,int right)
{
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++) L[i]=a[left+i];
    for(int i=0;i<n2;i++) R[i]=a[mid+i];
    L[n1]=R[n2]=INF;
    int i=0,j=0;
    for(int k=left;k<right;k++)
    {
        cnt++;
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }


}
void merge_sort(int a[],int left,int right)
{
    if(right-left>1)
    {
        int mid=(left+right)/2;
        merge_sort(a,left,mid);
        merge_sort(a,mid,right);
        merge(a,left,mid,right);
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    merge_sort(a,0,n);
    for(int i=0;i<n;i++)
    {
        if(i) printf(" ");
        printf("%d",a[i]);
    }
    printf("\n");
    printf("%d\n",cnt);

    return 0;
}
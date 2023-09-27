#include <iostream>
#include<stdio.h>
using namespace std;
#define MAX 200000
#define mm  10000000000
typedef long long ll;
int L[MAX],R[MAX];
ll merge(int A[],int n,int left,int mid,int right)
{

    int i,j,k;
    ll cnt=0;
    int n1=mid-left;
    int n2=right-mid;
    for(i=0; i<n1; i++)L[i]=A[left+i];
    for(i=0; i<n2; i++)R[i]=A[mid+i];
    L[n1]=R[n2]=mm;
    i=0;
    j=0;
    for(k=left; k<right; k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i++];
        }
        else
        {
            A[k]=R[j++];
            cnt+=n1-i;//=mid+j-k-i;
        }
    }
    return cnt;

}
ll mergeSort(int A[],int n,int left, int right)
{
    int mid;
    ll v1,v2,v3;
    if(left+1<right)
    {
        mid=(left+right)/2;
        v1=mergeSort(A,n,left,mid);
        v2=mergeSort(A,n,mid,right);
        v3=merge(A,n,left,mid,right);
        return v1+v2+v3;
    }
    return 0;
}
int main()
{
    int A[MAX],n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    ll ans=mergeSort(A,n,0,n);
    cout<<ans<<endl;
    return 0;
}

#include<stdio.h>
const int maxn=200000;
const long long big=2000000000;
int L[maxn/2+2],R[maxn/2+2];
int A[maxn+10];
long long zhenghe(int A[],int left,int mid,int right)
{
    long long cnt=0;
    int n1=mid-left;
    int n2=right-mid;
    for (int i=0;i<n1;i++) L[i]=A[left+i];
    for (int i=0;i<n2;i++) R[i]=A[mid+i];
    L[n1]=R[n2]=big;
    int i=0,j=0;
    for (int k=left;k<right;k++)
    {
        if(L[i]<=R[j])
            {
                A[k]=L[i++];
            }
        else
        {
            A[k]=R[j++];
            cnt+=n1-i;
        }
    }
    return cnt;
}
long long guibing(int A[],int left,int right)
{
    int mid;
    long long v1,v2,v3;
    if(left+1<right)
    {
        mid=(left+right)/2;
        v1=guibing(A,left,mid);
        v2=guibing(A,mid,right);
        v3=zhenghe(A,left,mid,right);
        return v1+v2+v3;
    }
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&A[i]);
    long long ans=guibing(A,0,n);
    printf("%lld\n",ans);
    return 0;
}
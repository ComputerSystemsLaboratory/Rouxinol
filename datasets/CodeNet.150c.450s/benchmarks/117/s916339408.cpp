#include<iostream>
using namespace std;
#define MAX 500000
#define SENTINEL 2000000000
int l[MAX/2+2],r[MAX/2+2];
int cur;
void merge(int A[],int n,int left,int mid,int right)
{
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++)
    {
        l[i]=A[left+i];
    }
    for(int i=0;i<n2;i++)
    {
        r[i]=A[mid+i];
    }
    l[n1]=r[n2]=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++)
    {
        cur++;
        if(l[i]<=r[j])
        {
            A[k]=l[i++];
        }else{
        A[k]=r[j++];
        }
    }
}
void mergesort(int A[],int n,int left,int right)
{
    if(left+1<right){
        int mid=(left+right)/2;
        mergesort(A,n,left,mid);
        mergesort(A,n,mid,right);
        merge(A,n,left,mid,right);
    }
}
int main()
{
    int A[MAX],n,i;
    cur=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    mergesort(A,n,0,n);
    for(i=0;i<n;i++)
    {
        if(i)cout<<" ";
        cout<<A[i];
    }
    cout<<endl;
    cout<<cur<<endl;
    return 0;
}
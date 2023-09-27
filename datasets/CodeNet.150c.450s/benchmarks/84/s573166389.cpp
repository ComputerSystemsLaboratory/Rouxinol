#include<iostream>

using namespace std;

#define MAX 200001

int L[MAX/2+1],R[MAX/2+1];

long long cnt=0;

void merge(int A[],int left,int right,int mid)
{
    int n1=mid-left;
    int n2=right-mid;

    for (int i = 0; i < n1; ++i)
    {
        L[i]=A[i+left];
    }
    for (int i = 0; i < n2; ++i)
    {
        R[i]=A[i+mid];
    }

    L[n1]=R[n2]=1000000001;

    int j=0,k=0;
    for (int i = left; i < right; ++i)
    {
        if(R[j]>=L[k])
        {
            A[i]=L[k++];
        }
        else {
            A[i] = R[j++];
            cnt += n1 - k;
        }
    }
}

void mergeSort(int A[],int left,int right)
{
    if (left+1==right)
    {
        return;
    }
    int mid=(left+right)/2;
    mergeSort(A,left,mid);
    mergeSort(A,mid,right);
    merge(A,left,right,mid);
}

int main()
{
    int n;
    int A[MAX];
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>A[i];
    }

    mergeSort(A,0,n);

    cout<<cnt<<endl;
}

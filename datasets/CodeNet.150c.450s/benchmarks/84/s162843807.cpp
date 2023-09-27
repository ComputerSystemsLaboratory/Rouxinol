#include<iostream>
using namespace std;
const int MAX_INT=1000000010;
int A[500100];
long long cnt=0;

void merge(int A[],int l,int m,int r)
{
    int n1=m-l;
    int n2=r-m;
    int L[n1+1];
    int R[n2+1];

    for(int i=0;i<n1;++i)
    {
        L[i]=A[l+i];
    }
    for(int j=0;j<n2;++j)
    {
        R[j] =A[m +j];
    }

    L[n1]=MAX_INT;
    R[n2]=MAX_INT;
    int i=0;
    int j=0;

    for(int k=l;k<r;++k)
    {
        if(L[i]<=R[j])
        {
            A[k] = L[i];
            ++i;
        }
        else
        {
            A[k]=R[j];
            j++;
            cnt+= m + j - k -1;
        }
    }
}
void mergeSort(int A[],int l,int r)
{
    if(l+1<r)
    {
        int mid = (l+r)/2;
        mergeSort(A,l,mid);
        mergeSort(A,mid,r);
        merge(A,l,mid,r);
    }
}
int main()
{
    int n;cin >>n;
    for(int i=0;i<n;++i)
    {
        cin >> A[i];
    }
    mergeSort(A,0,n);
    cout << cnt << endl;

}

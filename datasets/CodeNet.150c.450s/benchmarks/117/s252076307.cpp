#include <iostream>
#include <cstdlib>
using namespace std;
#define INF 1000000000
int count = 0;
void merge(int a[],int left,int mid,int right)
{
    int n1 = mid-left,n2 = right-mid,i,j,k;
    int *m1 = (int*)malloc((n1+1)*sizeof(int)),*m2 = (int*)malloc((n2+1)*sizeof(int));
    for(i=0;i<n1;i++)
        m1[i] = a[left+i];
    for(i=0;i<n2;i++)
        m2[i] = a[mid+i];
    m1[n1] = m2[n2] = INF;
    i = j = 0;
    for(k=left;k<right;k++)
    {
        count++;
        if(m1[i]<=m2[j])
        {
            a[k] = m1[i];
            i++;
        }
        else
        {
            a[k] = m2[j];
            j++;
        }
    }
    free(m1);
    free(m2);
}
void mergesort(int a[],int left,int right)
{
    int mid;
    if(right-left>1)
    {
        mid = (left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid,right);
        merge(a,left,mid,right);
    }
}
int main()
{
    int n,i;
    int a[500000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    mergesort(a,0,n);
    for(i=0;i<n;i++)
    {
        if(i)
            cout<<' ';
        cout<<a[i];
    }
    cout<<endl<<count<<endl;
    return 0;
}
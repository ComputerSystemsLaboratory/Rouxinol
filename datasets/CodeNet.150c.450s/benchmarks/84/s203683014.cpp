#include <iostream>
#include <cstdio>
#define Max 500000
#define inf 2000000000
using namespace std;

int n;
int S[Max];
int R[Max/2+2],L[Max/2+2];
//合并
long long merge(int S[],int n,int left,int mid ,int right)
{
    long long cnt = 0;
    int n1 = mid-left;
    int n2 = right-mid;
    for(int i=0;i<n1;i++)
        L[i] = S[left+i];
    for(int j=0;j<n2;j++)
        R[j] = S[mid+j];
    L[n1] = R[n2] = inf;
    int i=0;
    int j=0;
    for(int k=left;k<right;k++)   //把左右?部分合并
    {
        if(L[i] <= R[j])   //判断??元素?的大小排序
        {
           S[k] = L[i++];
        }
        else
        {
            S[k] = R[j++];
            cnt = cnt + n1 - i;
         }
    }
    return cnt;
}
//??分割排序
long long MergeSort(int S[],int n,int left,int right)
{
    long long u,v,w;
    if(left + 1 < right)
    {
        int mid = (left+right)/2;
        u = MergeSort(S,n,left,mid);   //分割（左?）
        v = MergeSort(S,n,mid,right);   //分割（右?）
        w = merge(S,n,left,mid,right);   //?果合并
        return u+v+w;
    }
    else
        return 0;

}
int main()
{
    int i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&S[i]);
        long long p = MergeSort(S,n,0,n);
        printf("%lld\n",p);
    }

    return 0;
}
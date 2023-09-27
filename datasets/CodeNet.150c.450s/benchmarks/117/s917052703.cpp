#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;
const int maxn = 500000 + 8;
#define inf 0x3f3f3f3f
int n,s[maxn];
int num = 0;

void Merge(int s[],int left,int mid,int right,int p[])
{
    int i = left, j = mid + 1;
    int k = 0;
    while(i <= mid && j <= right)
    {
        if(s[i] <= s[j]){
            p[k++] = s[i++];
            num++;
        }else{
            p[k++] = s[j++];
            num++;
        }
    }
    while(i <= mid) num++,p[k++] = s[i++];
    while(j <= right) num++,p[k++] = s[j++];

    for(int i = 0; i < k; ++i){
        s[left + i] = p[i];
    }
}

void MergeSort(int s[],int left,int right,int p[])
{
    if(left < right)
    {
        //num++;
        int mid = (left + right) / 2;
        MergeSort(s,left,mid,p);
        MergeSort(s,mid+1,right,p);
        Merge(s,left,mid,right,p);
    }
}
void Print(int s[])
{
    for(int i = 0; i < n; ++i){
        printf("%s%d", i == 0 ? "" : " ", s[i]);
    }
    printf("\n%d\n",num);
}
int main()
{
    scanf("%d",&n);
    fill(s,s+n,0);
    int *p;
    p = new int[n+5];
    fill(s,s+n,inf);
    for(int i = 0; i < n; ++i) scanf("%d",&s[i]);
    MergeSort(s,0,n-1,p);
    Print(s);

}
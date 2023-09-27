#include<iostream>
#include<cstdio>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<cstring>
#include<string>
#include<cmath>
#include<list>
#include<algorithm>
using namespace std;
#define inf 0x3f3f3f3f
typedef long long ll;
const int maxn = 200000 + 8;


int n,a[maxn];
ll num = 0;

void Merge(int a[],int left,int mid,int right,int temp[])
{
    int i = left,j = mid + 1, cur = 0;
    //cout << left << " "<< mid <<" "<< right << " " << n1 <<endl;
    while(i <= mid && j <= right)
    {
        if(a[i] <= a[j]) {
            temp[cur++] = a[i++];
        } else{
            temp[cur++] = a[j++];
            num += mid - i + 1;
        }
    }

    while(i <= mid) temp[cur++] = a[i++];
    while(j <= right) temp[cur++] = a[j++];

    for(int z = 0; z < cur; ++z)
    {
        a[left + z] = temp[z];
    }
}
void MergeSort(int a[],int left,int right,int temp[])
{
    if(left < right)
    {
        int mid = (right + left) / 2;
        MergeSort(a, left, mid, temp);
        MergeSort(a, mid+1, right, temp);
        Merge(a,left,mid,right, temp);
    }
}
int main()
{
    scanf("%d",&n);
    for(int i = 0; i < n; ++i)
        scanf("%d",&a[i]);

    int temp[maxn];
    MergeSort(a, 0, n-1,temp);
    printf("%lld\n", num);
    return 0;
}

/*
5
3 5 2 1 4
6
3 5 2 6 1 4
*/
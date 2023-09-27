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
const int maxn = 100000 + 8;

struct node{
    string s;
    int n;
}x[maxn],y[maxn];

int n;
int Partition(node a[],int p,int r)
{
    node last_element = a[r];
    int i = p-1;
    for(int j = p; j < r; ++j)
    {
        if(a[j].n <= last_element.n)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
void QuickSort(node a[],int p,int r)
{
    if(p < r)
    {
        int pos = Partition(a, p, r);
        QuickSort(a, p, pos - 1);
        QuickSort(a, pos + 1, r);
    }
}
void Merge(node a[],int left,int mid,int right,node temp[])
{
    int i = left,j = mid + 1 , k = 0;
    while(i <= mid && j <= right)
    {
        if(a[i].n <= a[j].n) {
            temp[k++] = a[i++];
        } else{
            temp[k++] = a[j++];
        }
    }

    while(i <= mid) temp[k++] = a[i++];
    while(j <= right) temp[k++] = a[j++];

    for(int z = 0; z < k; ++z)
    {
        a[left + z] = temp[z];
    }
}
void MergeSort(node a[],int left,int right,node temp[])
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
    {
        cin >> x[i].s;
        scanf("%d",&x[i].n);
        y[i].s = x[i].s;
        y[i].n = x[i].n;
    }
    node temp[maxn];
    MergeSort(x, 0, n-1,temp);
    QuickSort(y, 0, n-1);
    bool mark = false;
    for(int i = 0; i < n; ++i)
    {
        if(x[i].s != y[i].s ||(x[i].s == y[i].s &&  x[i].n != y[i].n))
        {
            mark = true;
            break;
        }
    }
    if(mark) printf("Not stable\n");
    else printf("Stable\n");

    for(int i = 0; i < n; ++i)
    {
        cout << y[i].s << " ";
        printf("%d\n",y[i].n);
    }
    return 0;
}
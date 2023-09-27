#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
const int maxn=500000+10;
int n;
int a[maxn];

void max_heapify(int i)
{
    int left=2*i+1;
    int right=2*i+2;
    int largest;
    if(left<=n&&a[left]>a[i])  largest=left;
    else largest=i;
    if(right<=n&&a[right]>a[largest]) largest=right;
    if(i!=largest)
    {
        swap(a[i],a[largest]);
        max_heapify(largest);
    }
}
void build_heap()
{
    for(int i=n/2;i>=0;i-- ) max_heapify(i);
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    build_heap();
    for(int i=0;i<n;i++) printf(" %d",a[i]);
    printf("\n");

    return 0;
}
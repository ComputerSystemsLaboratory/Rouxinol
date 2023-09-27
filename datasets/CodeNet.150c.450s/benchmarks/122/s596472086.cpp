#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
const int maxn=2000000+10;
int n=0;
char cmd[20];
int a[maxn];
int dd;
void max_heapify(int i)
{
    int left=2*i;
    int right=2*i+1;
    int _max;
    if(left<=n&&a[left]>a[i]) _max=left;
    else _max=i;
    if(right<=n&&a[right]>a[_max]) _max=right;
    if(i!=_max)
    {
        swap(a[i],a[_max]);
        max_heapify(_max);
    }

}
void insert(int i)
{
    int p=n++;
    a[p]=i;
    while(p>=0&&a[p/2]<a[p])
    {
        swap(a[p/2],a[p]);
        p=p/2;
    }
}
int extract()
{
    int _max=a[0];
    a[0]=a[n-1];
    n--;
    max_heapify(0);
    return _max;

}
int main()
{
//    freopen("in.txt","r",stdin);
    bool bEnd=false;;
    while(~scanf("%s",cmd)&&!bEnd)
    {
        switch(cmd[2])
        {
        case 's':
        {
            scanf("%d",&dd);
            insert(dd);
            break;
        }
        case 't':
        {
            printf("%d\n",extract());
            break;
        }
        case 'd':
        {
            bEnd=true;
            break;
        }

        }
    }


    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int maxn=110;
int cnt=0;
void trace(int a[], int n)
{
    for(int i=0; i<n-1; ++i)
        printf("%d ", a[i]);
    printf("%d\n", a[n-1]);
}

void insertionSort(int a[], int n)
{
    int v, j;
    for(int i=1; i<n; ++i)
    {
        v=a[i];
        j=i-1;
        while(j>=0 && a[j]>v)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=v;
        trace(a, n);
    }
}

void bubbleSort(int a[], int n)
{
    int flag, i;
    flag=1;
    while(flag)
    {
        flag=0;
        for(int j=n-1; j>=i+1; --j)
        {
            int tmp;
            if(a[j] < a[j-1])
            {
                tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
                ++cnt;
                flag=1;
            }
        }
        ++i;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[maxn];
    for(int i=0; i<n; ++i)
        scanf("%d", &a[i]);
    bubbleSort(a, n);
    for(int i=0; i<n-1; ++i)
        printf("%d ", a[i]);
    printf("%d\n", a[n-1]);
    printf("%d\n", cnt);
    return 0;
}


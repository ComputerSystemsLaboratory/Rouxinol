#include <iostream>
using namespace std;
typedef struct P
{
    char a;
    int b;
    int n;
} P;
int getPosition(P a[],int p,int r)
{
    return r;
}
void swap(P a[],int x,int y)
{
    P t = a[x];
    a[x] = a[y];
    a[y] = t;
}
int partition(P a[],int p,int r)
{
    int i,j,x = getPosition(a,p,r);
    swap(a,x,r);
    i = p-1;
    for(j=p;j<r;j++)
    {
        if(a[j].b<=a[r].b)
        {
            i++;
            swap(a,i,j);
        }
    }
    swap(a,i+1,r);
    return i+1;

}
void QS(P a[],int p ,int r)
{
    if(p<r)
    {
        int q;
        q = partition(a,p,r);
        QS(a,p,q-1);
        QS(a,q+1,r);
    }
}
void QuickSort(P a[],int n)
{
    QS(a,0,n-1);
}

int main()
{
    int n,i;
    P a[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i].a>>a[i].b;
        a[i].n = i;
    }
    QuickSort(a,n);
    for(i=0;i<n-1;i++)
    {
        if(a[i].b==a[i+1].b&&a[i].n>=a[i+1].n)
            break;
    }
    if(i==n-1)
        cout<<"Stable"<<endl;
    else
        cout<<"Not stable"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i].a<<' '<<a[i].b<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int getpostion(int a[],int p,int r)
{
    return r;
}
int partition(int a[],int p,int r)
{
    int c,x,i,j,t;
    c = getpostion(a,p,r);
    x = a[c];
    i = p-1;

    t = a[r];
    a[r] = a[c];
    a[c] = t;

    for(j=p;j<r;j++)
    {
        if(a[j]<=x)
        {
            i++;
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }

    t = a[i+1];
    a[i+1] = a[r];
    a[r] = t;

    return i+1;
}
int main()
{
    int n,x,i;
    int a[100000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    x = partition(a,0,n-1);
    for(i=0;i<x;i++)
        cout<<a[i]<<' ';
    cout<<'['<<a[x]<<']';
    for(i=x+1;i<n;i++)
        cout<<' '<<a[i];
    cout<<endl;
    return 0;
}
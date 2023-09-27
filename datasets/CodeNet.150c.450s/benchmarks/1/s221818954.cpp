#include <iostream>
#define maxn 1000050
using namespace std;
int a[maxn];
int b[maxn];
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=1000000000;
        }
        int l=0;
        for(int i=0;i<n;i++)
        {
            int v=lower_bound(b,b+l,a[i])-b;
            b[v]=a[i];
            l=max(l,v+1);
        }
        cout<<l<<endl;
    }
}





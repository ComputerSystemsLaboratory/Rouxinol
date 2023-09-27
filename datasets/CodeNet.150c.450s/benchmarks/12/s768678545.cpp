#include<iostream>
#define p(i)  (i>>1)
#define l(i)  (i<<1)
#define r(i)   ((i<<1)+1)
using namespace std;
int a[10005];
int main()
{
    int n,Case=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        cout<<"node "<<++Case<<": key = "<<a[i]<<", ";
        if(p(i)>=1) cout<<"parent key = "<<a[p(i)]<<", ";
        if(l(i)<=n) cout<<"left key = "<<a[l(i)]<<", ";
        if(r(i)<=n) cout<<"right key = "<<a[r(i)]<<", ";
        cout<<endl;
    }
    return 0;
}


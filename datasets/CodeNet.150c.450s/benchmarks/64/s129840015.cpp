#include <iostream>
using namespace std;
int a[20];
int n;
bool work(int r,int t)
{
    if(t==0)
        return true;
    if(r==1)
        return a[0]==t;
    return work(r-1,t)||work(r-1,t-a[r-1]);
}
int main()
{
    int q,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    while(q--)
    {
        cin>>i;
        if(work(n,i))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
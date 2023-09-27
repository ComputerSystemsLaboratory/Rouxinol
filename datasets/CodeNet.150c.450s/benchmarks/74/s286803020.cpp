#include<iostream>
#include<algorithm>
using namespace std;

static const int NMAX=50000;
static const int INFTY=(1<<29);
int c[21];
int t[NMAX+1];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<=NMAX;i++)t[i]=INFTY;
    t[0]=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j+c[i]<=n;j++)
            t[j+c[i]]=min(t[j+c[i]],t[j]+1);
    }
    cout<<t[n]<<endl;
}

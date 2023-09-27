#include <iostream>
#include <cstring>

using namespace std;

const int INF=1000000;

int main()
{
    int pri[INF];
    int res[INF];
    for(int i=0;i<INF;i++)
        pri[i]=0;
    for(int i=2;i*i<INF;i++)
    {
        if(pri[i]==0)
        {
            for(int j=i*2;j<INF;j+=i)
            {
                pri[j]=1;
            }
        }
    }
    int n=0;
    for(int i=2;i<INF;i++)
    {
        if(pri[i]==0)
            n++;
        res[i]=n;
    }
    int C;
    while(cin>>C)
    {
        cout<<res[C]<<endl;
    }
}
#include<iostream>
#include<algorithm>
using namespace std;

const int maxN=105;
const int maxW=10005;
int d[maxN][maxW];

int main()
{
    int N,W;
    cin>>N>>W;
    int v[maxN],w[maxW];
    for(int i=1;i<=N;i++)
        cin>>v[i]>>w[i];
    for(int i=1;i<=N;i++)
        d[i][0]=0;

    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(w[i]>j)
                d[i][j]=d[i-1][j];
            else
                d[i][j]=max(d[i-1][j],d[i-1][j-w[i]]+v[i]);
        }
    }
    cout<<d[N][W]<<endl;
    return 0;
}
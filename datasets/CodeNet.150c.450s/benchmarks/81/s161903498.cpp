#include <iostream>
#include <algorithm>
#define INF 4505

using namespace std;
int n,a,b,c;
int d[10][10];
int main()
{
    while(cin>>n&&n)
    {
        int m=-1;
        for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
        {
            if(i==j) d[i][j]=0;
            else d[i][j]=INF;
        }
        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            m=max(m,max(a,b));
            d[a][b]=d[b][a]=c;
        }
        for(int k=0;k<=m;k++)
            for(int i=0;i<=m;i++)
            for(int j=0;j<=m;j++)
        {
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
        }
        int p,minsum=INF;
        for(int i=0;i<=m;i++)
        {
            int sum=0;
            for(int j=0;j<=m;j++)
                sum+=d[i][j];
            if(minsum>sum)
            {
                p=i;
                minsum=sum;
            }
        }
        cout<<p<<" "<<minsum<<endl;
    }
    return 0;
}


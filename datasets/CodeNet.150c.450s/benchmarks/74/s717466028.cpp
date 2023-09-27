#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<cstdlib>
#include<cstdio>
//#include<cmath>
#define MAX 50000
using namespace std;
int c[21][MAX+10];
int coin[MAX];

int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int i,w;
    for(i=0;i<m;i++)
    {
        cin>>coin[i];
    }
    sort(coin,coin+m);


    for(i=0;i<=m;i++)
    {
        c[i][1]=1;
        c[i][0]=0;
    }
    for(w=1;w<=n;w++)
    {
        c[1][w]=w/coin[0];
       //c[0][w]=0;
    }

    for(i = 2; i <= m; i++)
    {
        for(w = 2; w <= n; w++)
        {
            if(w < coin[i-1])
            {
                c[i][w] = c[i - 1][w];
            }
            else
            {
                int x = c[i-1][w];
                int y = c[i][w - coin[i-1]] + 1;
                c[i][w]=x>y?y:x;
                
            }
        }
    }
	cout<<c[m][n]<<endl;
    return 0;
}





#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
//#include<cmath>
#define MAX 50000
using namespace std;
int c[21][MAX+10];

int main()
{
    int n,m,sum=0;
    int coin[MAX];
    cin>>n>>m;
    int i,w;
    for(i=0;i<m;i++)
    {
        cin>>coin[i];
    }
    sort(coin,coin+m);
//    vector<vector<int> > c(m+1,vector<int>(n+1));
    for(int i=1;i<=n;i++) c[1][i]=1000000;
    c[1][0]=0;
    for(int i=0;i<m;i++){
        for(int j=coin[i];j<=n;j++) c[1][j]=min(c[1][j],c[1][j-coin[i]]+1);
    }
    cout<<c[1][n]<<endl;
//    for(i=0;i<=m;i++)
//    {
//        c[m][1]=1;
//        c[m][0]=0;
//    }
//    for(w=1;w<=n;w++)
//    {
//        c[1][w]=w/coin[0];
//       //c[0][w]=0;
//    }
//
//    for(i = 2; i <= m; i++)
//    {
//        for(w = 2; w <= n; w++)
//        {
//            if(w < coin[i-1])
//            {
//                c[i][w] = c[i - 1][w];
//            }
//            else
//            {
//                int x = c[i-1][w];
//                int y = c[i][w - coin[i-1]] + 1;
//                c[i][w] = x > y ? y : x;
//            }
//        }
//    }
//	cout<<c[m][n]<<endl;
    return 0;
}





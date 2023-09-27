#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;

const ll INF = 0x3f3f3f3f3f3f3f3f;
ll dis[150][150];

int main()
{
    int n,m;
    while(cin>>n>>m){
        for(int i = 0;i < n;i++)
            for(int j = 0;j < n;j++)
                if(i == j) dis[i][j] = 0;
                else dis[i][j] = INF;
        int a,b,c;
        while(m--){
            cin>>a>>b>>c;
            dis[a][b] = c;
        }
        for(int k = 0;k < n;k++)
            for(int i = 0;i < n;i++){
                if(dis[i][k] == INF) continue;
                for(int j = 0;j < n;j++){
                    if(dis[k][j] == INF) continue;
                    dis[i][j] = min(dis[i][k] + dis[k][j],dis[i][j]);
                }
            }
        int flag = 0;
        for(int i = 0;i < n;i++)
            if(dis[i][i]<0){
                flag = 1;
                break;
            }
        if(flag) cout<<"NEGATIVE CYCLE"<<endl;
        else{
            for(int i = 0;i < n;i++){
                for(int j = 0;j < n;j++){
                    if(dis[i][j] == INF) cout<<"INF"<<(j==n-1?'\n':' ');
                    else cout<<dis[i][j] <<(j==n-1?'\n':' ');
                }
            }

        }
    }
    return 0;
}


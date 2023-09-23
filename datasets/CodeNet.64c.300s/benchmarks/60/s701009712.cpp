#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    while(1)
    {
        int a,b,n,m=0;
        int ans[10000];
        int road[17][17]={0};
        int con[17][17]={0};
        road[0][1]=1;
        cin>>a>>b;
        if(a==0&&b==0)break;
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            con[x][y]=1;
        }
        for(int i=1;i<=a;i++)for(int j=1;j<=b;j++)
        {
            //????????\?????????continue;
            if(con[i][j]==1)continue;
            //if(i==1||j==1)road[i][j]=1;
            else road[i][j]=road[i-1][j]+road[i][j-1];
            /*
            if(i==1||j==1)road[i][j]=1;
            else road[i][j]=road[i-1][j]+road[i][j-1];
            for(int k=0;k<n;k++)if(i==con1[k]&&j==con2[k])road[i][j]=0;
            */
        }
        /*
        for(int i=0;i<=8;i++){
            for(int j=0;j<=10;j++){
                printf("[%3d]",road[i][j]);
            }
            puts("");
        }
        */
        cout<<road[a][b]<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

char a[102][102];
int h,w,ans;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
const char c[] = {'#','*','@'};

void dfs(int i,int j,int k)
{
    a[i][j]='.';
    for(int di=0;di<4;di++){
        int x=i+dx[di],y=j+dy[di];
        if(a[x][y]==c[k]) dfs(x,y,k);
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    ios::sync_with_stdio(false);
    while(cin>>h>>w&&h){
        for(int i=0;i<=w+1;i++) a[0][i]=a[h+1][i]='.';
        for(int i=0;i<=h+1;i++) a[i][0]=a[i][w+1]='.';
        for(int i=1;i<=h;i++)
            for(int j=1;j<=w;j++)
                cin>>a[i][j];
        ans=0;
        for(int i=0;i<3;i++)
            for(int j=1;j<=h;j++)
                for(int k=1;k<=w;k++)
                    if(a[j][k]==c[i]) {dfs(j,k,i);ans++;}
        cout<<ans<<endl;
    }
    return 0;
}


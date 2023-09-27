//??????????¨????????????????????¬¬??????????¢?
//??????????´¢+DFS ??????
#include <iostream>
#define MAX_N 10
#define MAX_M 10000
using namespace std;
bool ex[MAX_N][MAX_M];
int n,m,ans;
void Dfs(int x)
{
    if(x==n)
    {
        int sum=0;
        for(int j=0;j<m;j++) {
            int right=0;
            for(int i=0;i<n;i++) {
                if(ex[i][j]) right++;
            }
            sum+=(right>(n-right))?right:(n-right);
        }
        ans=max(ans,sum);
        return;
    }
        //????????¢????????¬
    Dfs(x+1);

        //????????¢?????¬
    for(int i=0;i<m;i++)
        ex[x][i]=!ex[x][i];
    Dfs(x+1);
}

int main()
{
    while(true)
    {
        ans=0;
        cin>>n>>m;
        if(n!=0&&m!=0)
        {
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                cin>>ex[i][j];
            Dfs(0);
            cout<<ans<<endl;
        }
        else break;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int dfs(int x, int y, int acc, vector<vector<bool> > &map)
{
    acc=0;
    if(map[x][y]==false)return 0;
map[x][y]=false;
for(int i=0;i<4;i++){
    int nx=x+dx[i];
    int ny=y+dy[i];

    acc+=dfs(nx,ny,acc,map);
}
acc++;
return acc;
}
/*void dfs(int x,int y,vector<vector<bool> > &map,vector<int> &ans){
    if(map[x][y]){
        ans.push_back(x);
    map[x][y]=false;
for(int i=0;i<4;i++){
    int nx=x+dx[i];
    int ny=y+dy[i];
    dfs(nx,ny,map,ans);
}
    }
}*/
int main(void)
{
    int h, w;
    while (1)
    {
        cin >> h >> w;
        if (h == 0)
            break;
        vector<vector<bool> > map(w + 2, vector<bool>(h + 2, false));
        char temp;
        int x, y;
        for (int i = 1; i <= w; i++)
        {
            for (int j = 1; j <= h; j++)
            {
                cin>>temp;
                if(temp!='#')
                map[i][j]=true;
                if(temp=='@'){
                    x=i;
                    y=j;
                 }
            }
        }
        cout<<dfs(x,y,0,map)<<endl;
   /*     vector<int> ans;
dfs(x,y,map,ans);
cout<<ans.size()<<endl;*/

    }
    return 0;
}
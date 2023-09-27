#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
char map[107][107];
int x[4]={0,-1,0,1};
int y[4]={-1,0,1,0};
int W,H;
void dfs(int row,int line,char s){
    int new_row,new_line;
    char new_s=s;
    map[row][line]='.';
    for(int i=0;i<4;i++){
            new_row=row+x[i];
            new_line=line+y[i];
            if(map[new_row][new_line]!=new_s||new_row<0||new_row>=H||new_line<0||new_line>=W)
                continue;
            dfs(new_row,new_line,new_s);
    }
}

int main()
{

    while(~scanf("%d%d",&H,&W)&&H&&W)
    {
        int ans=0;
        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                cin>>map[i][j];
            }
        }
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(map[i][j]!='.'){
                    ans++;
                    dfs(i,j,map[i][j]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
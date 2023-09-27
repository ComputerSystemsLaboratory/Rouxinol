#include <bits/stdc++.h>
using namespace std;

int main()
{
vector<vector<int>> board;
vector<vector<bool>> check;
vector<int> count;
int H,ans=0;bool c=true;scanf("%d",&H);
while(H!=0)
{
ans=0;c=true;
board.resize(0);check.resize(0);board.resize(H);check.resize(H);
for(int i=0;i<H;i++){board[i].resize(5);check[i].resize(5,false);}
for(int i=0;i<H;i++)for(int j=0;j<5;j++)scanf("%d ",&board[i][j]);
while(c)
{
c=false;
for(int i=0;i<H;i++)
{
count.resize(0);count.resize(5,1);
for(int j=0;j<5;j++){if(check[i][j]){count[j]=0;continue;}if(j==0)continue;if(board[i][j-1]==board[i][j])count[j]+=count[j-1];}
for(int j=4;j>-1;j--)if(count[j]>2&&!check[i][j]){ans+=count[j]*board[i][j];for(int k=j;k>j-count[j];k--)check[i][k]=true;c=true;break;}
}
for(int j=0;j<5;j++)
{
  int stack=H-1;
  for(int i=H-1;i>-1;i--)if(!check[i][j]){board[stack][j]=board[i][j];check[i][j]=true;check[stack][j]=false;stack--;}
}
}
printf("%d\n",ans);
scanf("%d",&H);
}
}

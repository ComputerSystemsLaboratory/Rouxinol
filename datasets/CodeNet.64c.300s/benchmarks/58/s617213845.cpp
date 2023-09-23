#include<cstdio>
#include<iostream>
using namespace std;
char m[101][101];
int H,W;
void bfs(char c,int h,int w)
{
 if(m[h][w]!=c)
  return;
 m[h][w]='1';
 for(int v=-1;v<=1;v++)
  for(int k=-1;k<=1;k++)
   if(v==0||k==0)
    if(h+v>=0&&h+v<H&&w+k>=0&&w+k<W)
      bfs(c,h+v,w+k);
  return;
}
int main()
{
  int i,k,ans;
 while(scanf("%d%d",&H,&W)&&H!=0&&W!=0)
 {
  ans=0;
  for(i=0;i<H;i++)
   for(k=0;k<W;k++)
    //scanf("%c",&m[i][k]);
    cin>>m[i][k];
  for(i=0;i<H;i++)
   for(k=0;k<W;k++)
    if(m[i][k]!='1')
    { 
      char d=m[i][k];
      bfs(d,i,k);
      ans++;
    }
   printf("%d\n",ans);
  }
  return 0;
} 
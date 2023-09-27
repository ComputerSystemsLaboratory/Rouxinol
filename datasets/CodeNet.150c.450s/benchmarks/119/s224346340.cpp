
#include<iostream>
using namespace std;

int field[50+2][50+2];
int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={-1,-1,0,1,1,1,0,-1};

int rec(int x, int y)
{
  int i;

  if(field[x][y]!=1) return 0;
  field[x][y] = 0;
  for(i=0;i<8;i++) rec(x+dx[i],y+dy[i]);
  return 1;
}

int main()
{
  int w,h;
  int i,j;
  int n;
  while(cin>>w>>h,w|h){
    for(j=1;j<=h;j++)
      for(i=1;i<=w;i++)
	cin>>field[i][j];
    for(j=1;j<=h+1;j++)
      field[w+1][j]=0;
    for(i=1;i<=w+1;i++)
      field[i][h+1]=0;

    n = 0;
    for(j=1;j<=h;j++) for(i=1;i<=w;i++) n += rec(i,j);

    cout<<n<<endl;
  }
}
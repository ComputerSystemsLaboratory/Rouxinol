#include <iostream>
#include <algorithm>
#define L_MAX 21
using namespace std;
int gem[L_MAX][L_MAX] = {};
int main(void)
{
  int n,m;
  int x,y;
  while(cin>>n,n)
  {
    int px = 10,py = 10;
    for(int i = 0;i < L_MAX;i++)
      for(int j = 0; j < L_MAX;j++)
        gem[i][j] = 0;
    for(int i = 0;i < n;i++){
      cin>>x>>y;
      gem[y][x] = 1;
    }
    cin>>m;
    char dist;int l;
    for(int i = 0;i < m;i++)
    {
      int dx = 0,dy = 0;
      cin>>dist>>l;
      switch(dist)
      {
        case 'N':
          dy = 1;
          break;
        case 'S':
          dy = -1;
          break;
        case 'E':
          dx = 1;
          break;
        case 'W':
          dx = -1;
      }
      if(gem[py][px])n--;
      gem[py][px] = 0;
      for(int j = 0;j < l;j++)
      {
        px+=dx;
        py+=dy;
        if(gem[py][px])n--;
        gem[py][px] = 0;
      }
    }
    if(!n)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
  return 0;
}
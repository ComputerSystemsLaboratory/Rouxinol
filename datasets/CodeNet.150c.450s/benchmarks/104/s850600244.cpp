#include<iostream>
using namespace std;

int main()
{
  int map[30][32];
  int x,y;
  int w,n;
  int tmp;

  cin >> w;
  cin >> n;
  for(int i=0;i<w;i++){
    for(int j=0;j<=n;j++)map[i][j] = i;
  }

  for(int i=1;i<=n;i++){
    scanf("%d,%d ",&x,&y);
    map[x-1][i] = y-1;
    map[y-1][i] = x-1;
  }

  for(int i=0;i<w;i++){
    tmp=i;
    for(int j=1;j<=n;j++)tmp = map[tmp][j];
    map[tmp][n+1] = i;
  }

  for(int i=0;i<w;i++)cout << map[i][n+1]+1 << endl;

  return 0;
}
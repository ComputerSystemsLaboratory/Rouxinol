#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
  int n, m;
  int x[20];
  int y[20];
  char d[30];                   // ??????
  int s[30];                    // ?§???????

  bool grid[21][21];

  while (1)
  {
    cin >> n;
    if (n == 0) return 0;
    for (int i=0;i<n;i++) cin >> x[i] >> y[i];
    cin >> m;
    for (int i=0;i<m;i++) cin >> d[i] >> s[i];

    for (int i=0;i<21;i++)
      for (int j=0;j<21;j++) grid[i][j]=false;

    int posx = 10, posy = 10;
    grid[posx][posy]=true;

    for (int i=0;i<m;i++)
    {
      for (int k=0;k<s[i];k++)
      {
        switch (d[i])
        {
        case 'E': posx = min(posx+1, 20); break;
        case 'W': posx = max(posx-1, 0); break;
        case 'N': posy = min(posy+1, 20); break;
        case 'S': posy = max(posy-1, 0); break;
        }
        grid[posx][posy]=true;
      }
    }

    int r=n;
    for (int i=0;i<n;i++)
      if (grid[x[i]][y[i]]) r--;
    if (r==0) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
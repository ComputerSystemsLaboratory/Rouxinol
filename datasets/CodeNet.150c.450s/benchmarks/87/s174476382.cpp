#include<iostream>
using namespace std;

int d[10][10], dd[10], H;
int main()
{
  while(true)
  {
    cin >> H;
    if(!H)
      break;
    for(int i = 0; i < H; i++)
      for(int j = 0; j < 5; j++)
        cin >> d[i][j];
    bool f = true;
    int p = 0;
    while(f)
    {
      f = false;
      for(int i = 0; i < 10; i++)
        dd[i] = 0;

      for(int y = 0; y < H; y++)
      {
        int n = 0;
        for(int x = 0; x < 3; x++)
          if(d[y][x] && d[y][x] == d[y][x + 1] && d[y][x + 1] == d[y][x + 2])
            n = x + 2;
        if(n > 0)
        {
          f = true;
          for(int x = n; x >= 0; x--)
          {
            p += d[y][x];
            int tmp = d[y][x];
            d[y][x] = 0;
            if(x == 0 || tmp != d[y][x - 1])
              break;
          }
        }
      }

      for(int y = H - 1; y >= 0; y--)
      {
        for(int x = 0; x < 5; x++)
        {
          if(!d[y - dd[x]][x])
            for(; y - dd[x] >= 0 && !d[y - dd[x]][x]; dd[x]++);
          d[y][x] = d[max(0, y - dd[x])][x];
        }
      }
      for(int x = 0; x < 5; x++)
        for(int y = 0; y < dd[x]; y++)
          d[y][x] = 0;
    }
    cout << p << endl;
  }
}
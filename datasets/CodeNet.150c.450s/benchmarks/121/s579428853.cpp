#include<iostream>  
 
using namespace std;  
   
char table[100][100];  
int w, h;  
const int dir[4][2] = {{ -1, 0 },  { 1, 0 },  { 0, -1 },  { 0, 1 }};  
   

void Dfs(int x, int y, char cur) {
  table[x][y] = 'X';
  for (int i = 0; i < 4; ++i) {
    int next_x = x + dir[i][0];
    int next_y = y + dir[i][1];
    if (next_x >= 0 && next_x < w
        && next_y >=0 && next_y < h
        && table[next_x][next_y] == cur) {
        Dfs(next_x, next_y, cur);
    }
  }
}

int main()  
{  
   
  while (cin >> h >> w, w > 0)  
  {  
    int res = 0;  
    int x, y;  
    for (y = 0; y < h; ++y)  
    {  
      for (x = 0; x < w; ++x)  
      {  
        cin >> table[x][y];  
      }  
    }  
   
    for (y = 0; y < h; ++y)  
    {  
      for (x = 0; x < w; ++x)  
      {  
        if (table[x][y] != 'X')  
        {  
          Dfs(x, y, table[x][y]);  
          ++res;  
        }  
      }  
    }  
    cout << res << endl;  
  }  
  return 0;  
} 
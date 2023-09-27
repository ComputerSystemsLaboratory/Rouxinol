#include <bits/stdc++.h>
using namespace std;

string field[101];
int h, w;

const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

void sol(int x, int y, char c);

int main()
{
  while (cin >> h >> w){
    if (h == 0 && w == 0) break;
    long ct = 0;
    for (int i = 0; i < h; i++){
      field[i][0] = ' ';
    }
    for (int i = 0; i < h; i++){
      cin >> field[i];
    }
    for (int i = 0; i < w; i++){
      for (int j = 0; j < h; j++){
        char c = field[j][i];
        if (c != '0'){
          field[j][i] = '0';
          sol(i, j, c);
          ct++;
        }
      }
    }
    cout << ct << endl;
  }
}

void sol(int x, int y, char c)
{
  for (int i = 0; i < 4; i++){
    int a = x + dx[i], b = y + dy[i];
    if (!(0 <= a && a < w && 0 <= b && b < h)) continue;
    if (field[b][a] == c){
      field[b][a] = '0';
      sol(a, b, c);
    }
  }
}
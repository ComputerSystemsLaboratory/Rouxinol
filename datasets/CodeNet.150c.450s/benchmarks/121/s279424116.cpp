#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

char d[128][128];
int h, w;

bool in(int y, int x){return 0 <= y && y <= h && 0 <=x && x <= w;};

void po(int y, int x, char c)
{
  if (!in(y, x)) return;
  if (d[y][x] != c) return;

  d[y][x] = '.';
  for (int i = 0; i < 4; i++){
    po(y + dy[i], x + dx[i], c);
  }
}

int main()
{
  while (cin >> h >> w, h){
    for (int i = 0; i < h; i++){
      for (int j = 0; j < w; j++){
        cin >> d[i][j];
      }
    }

    char s[3] = {'@', '#', '*'};
    int cnt = 0;
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < h; j++){
        for (int k = 0; k < w; k++){
          if (d[j][k] == s[i]) {
            po(j, k, s[i]);
            cnt++;
          }
        }
      }
    }

    cout << cnt << endl;
  }
}
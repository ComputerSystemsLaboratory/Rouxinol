#include <cstdio>
#include <iostream>
using namespace std;

char map[200][200];
int H, W;

void orchard(int y, int x, char c);

int main()
{
  while (scanf("%d%d", &H, &W), H){
    int cnt = 0;
    for (int i = 0; i < H; i++){
      scanf("%s", map[i]);
    }

    for (int i = 0; i < H; i++){
      for (int j = 0; j < W; j++){
        if (map[i][j] != '0'){
          cnt++;
          orchard(i, j, map[i][j]);
        }
      }
    }
    printf("%d\n", cnt);
  }

  return (0);
}

void orchard(int y, int x, char c)
{
  map[y][x] = '0';

  if (x + 1 < W && c == map[y][x + 1]){
    orchard(y, x + 1, map[y][x + 1]);
  }
  if (x - 1 >= 0 && c == map[y][x - 1]){
    orchard(y, x - 1, map[y][x - 1]);
  }
  if (y + 1 < H && c == map[y + 1][x]){
    orchard(y + 1, x, map[y + 1][x]);
  }
  if (y - 1 >= 0 && c == map[y - 1][x]){
    orchard(y - 1, x, map[y - 1][x]);
  }
}
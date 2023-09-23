#include<cstdio>
using namespace std;

int N, x[20], y[20], M;
bool get[20];

void check(int X, int Y) {
  for (int i = 0; i < N; i++) if (x[i] == X && y[i] == Y) get[i] = true;
}

int main() {
  while (1) {
    scanf("%d", &N);
    if (N == 0) break;
    for (int i = 0; i < N; i++) scanf("%d%d", &x[i], &y[i]);
    for (int i = 0; i < N; i++) get[i] = false;
    scanf("%d", &M);
    char dir;
    int l, dx, dy;
    int nowx = 10, nowy = 10;
    check(nowx, nowy);
    for (int i = 0; i < M; i++) {
      scanf("%c", &dir);
      while (!(dir == 'N' || dir == 'E' || dir == 'S' || dir == 'W')) scanf("%c", &dir);
      scanf("%d", &l);
      dx = dy = 0;
      if (dir == 'N') dy = 1;
      if (dir == 'E') dx = 1;
      if (dir == 'S') dy = -1;
      if (dir == 'W') dx = -1;
      for (int j = 0; j < l; j++) {
        nowx += dx;
        nowy += dy;
        check(nowx, nowy);
      }
    }
    bool flag = true;
    for (int i = 0; i < N; i++) if (!get[i]) flag = false;
    if (flag) printf("Yes\n");
    else printf("No\n");
  }
}


#include <stdio.h>

#define W 21
#define H 20

int tileCount(char room[H][W], int row, int col, int h, int w);

int main()
{
  char room[H][W];
  int h;    // 部屋の行方向のタイルの枚数
  int w;    // 部屋の列方向のタイルの枚数
  int row;  // 最初に人が立っている行位置
  int col;  // 最初に人が立っている列位置
  int i, j;

  // 部屋の情報を、配列room[]に文字列として読み込む
  scanf("%d%d", &w, &h);
  while (h != 0 && w != 0) {
    for (i = 0; i < h; i++) {
      scanf("%s", room[i]);
      for (j = 0; j < w; j++) {
        if (room[i][j] == '@') {
          row = i;  // 最初に人が立っている行位置
          col = j;  // 最初に人が立っている列位置
        }
      }
    }
    printf("%d\n", tileCount(room, row, col, h, w));

    scanf("%d%d", &w, &h);
  }
  
  return(0);
}

int tileCount(char room[H][W], int row, int col, int h, int w){
  int dx[4]={0,1,0,-1};
  int dy[4]={1,0,-1,0};
  int nx,ny;
  int i,j;
  int cnt=1;
  if(row<0 || col<0 || col>=w || row>=h || room[row][col]=='#')return 0;
  room[row][col]='#';
  for(i=0;i<4;i++){
    nx=col+dx[i];
    ny=row+dy[i];
    cnt+=tileCount(room,ny,nx,h,w);
  }
  return cnt;
}
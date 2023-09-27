#include<stdio.h>
int w,h;
int c[100][100];

int qx[1000000];
int qy[1000000];
int X,Y,left,right;

void push(int x,int y){
  right++;
  qx[right]=x;
  qy[right]=y;
}

void pop(){
  X=qx[left];
  Y=qy[left];
  left++;
}

void bfs(int sx,int sy){
  left=0;
  right=-1;
  push(sx,sy);
  c[sx][sy]=0;
  while(left<=right){
    pop();
    for(int nx=X-1;nx<=X+1;nx++){
      for(int ny=Y-1;ny<=Y+1;ny++){
        if(nx>=0 && ny>=0 && c[nx][ny]!=0){
          c[nx][ny]=0;
          push(nx,ny);
        }
      }
    }
  }
}

int main(){

  while(1){
    scanf("%d %d",&w,&h);
    if(w==0&&h==0)break;
    
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        scanf("%d",&c[i][j]);
      }
    }

    int ans=0;
    
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(c[i][j]!=0){
          ans++;
          bfs(i,j);
        }
      }
    }

    printf("%d\n",ans);
    
  }
  return 0;
}
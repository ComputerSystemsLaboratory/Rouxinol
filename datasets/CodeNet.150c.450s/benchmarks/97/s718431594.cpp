#include<stdio.h>

#define MAX 200

const int dx[]={-1,0,1,0};
const int dy[]={0,1,0,-1};

const int infty = 1<<22;

int main()
{
  while(true){
    int N;

    int minx = infty;
    int maxx = -infty;
    int miny = infty;
    int maxy = -infty;

    int tx[MAX];
    int ty[MAX];

    scanf("%d", &N);
    if( N == 0 )break;

    tx[0]=0;
    ty[0]=0;
    for(int i = 1; i < N; ++i){
      int num,d;
      scanf("%d%d", &num, &d);
      
      tx[i] = tx[num] + dx[d];
      ty[i] = ty[num] + dy[d];
    }

    for(int i = 0; i < N; ++i){
      if( minx > tx[i] ){ minx = tx[i]; }
      if( maxx < tx[i] ){ maxx = tx[i]; }
      if( miny > ty[i] ){ miny = ty[i]; }
      if( maxy < ty[i] ){ maxy = ty[i]; }
    }

    printf("%d %d\n", maxx - minx + 1, maxy - miny + 1 );
  }
  return 0;
}
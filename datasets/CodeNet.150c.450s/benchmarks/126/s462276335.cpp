#include<stdio.h>
#include<algorithm>
#define repi(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,a) repi(i,0,a)

struct xy{
  int x;
  int y;
};

struct xy to{0,0};
int ign_cnt;
struct xy ign_point[40] = {0,0};
int anser;

void serch( int x, int y){
  if(x == to.x && y == to.y){
    anser++;
    return;
  }

  rep( i, ign_cnt )
    if(x == ign_point[i].x && y == ign_point[i].y) return; 

  if(x + 1 <= to.x) serch( x + 1, y ); 

  if(y + 1 <= to.y) serch( x, y + 1 ); 
 
  return;
}

int main(){
  int ansers[5];
  rep( ds, 6 ){
    scanf( "%d%d", &to.x, &to.y );
    if( to.x == 0 && to.y == 0 ) {
      rep( i, ds) printf( "%d\n", ansers[i] );
      return 0;    
    }
    scanf( "%d", &ign_cnt );
    rep( i, ign_cnt )
      scanf( "%d%d",  &ign_point[i].x, &ign_point[i].y );
    anser = 0; 
    serch(1,1);
    ansers[ds] = anser; 
  }
  return 0;
}
#include <stdio.h>

int parent(int);
int left(int);
int right(int);

int main(){

  int n;
  int id;
  int k[250];
  int pk;
  int lk;
  int rk;
 
  scanf("%d", &n);
  
  for( id=1; id<=n; id++ ) {
    scanf("%d", &k[id]);
  }

  for( id=1; id<=n; id++ ) {
    printf("node %d: key = %d, ",id, k[id]);
    if( id>1 ) {
      pk = parent(id);
      printf("parent key = %d, ",k[pk]);
    }
    lk = left(id);
    rk = right(id);
    if( lk<=n ) {
      printf("left key = %d, ",k[lk]);
    }
    if( rk<=n ) {
      printf("right key = %d, ",k[rk]);
    }
    printf("\n");
  }
  return 0;
}

int parent(int i) {
  return i/2;
}

int left(int i) {
  return 2*i;
}

int right (int i) {
  return 2*i+1;
}
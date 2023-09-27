#include <stdio.h>

int main() {
  int train[10];
  int in;
  int i = 0;
  int ii =0;
  int out[100];
  while( scanf("%d", &in ) != EOF) {
    if( in == 0 ) {
      out[i] = train[ii-1];
      train[ii -1] =0;
      ii--;
    } else if( in != 0){
      train[ii] = in;
      out[i] = 0;
      ii++;
    }
    i++;
  }
  for( int c = 0; c < i; c++ ) {
    if( out[c] != 0 ) {
      printf( "%d\n", out[c] );
    }
  }
  return 0;
}
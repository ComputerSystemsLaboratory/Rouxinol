#include <stdio.h>
#include <string.h>

int main() {
  int i, string, I;
  char word[200];
  char ring[300];
  scanf( "%s", &ring );
  scanf( "%s", &word );
  string = strlen( ring );
  for( i = 0; i < string; i++ ) {
    I = i + string;
    ring[I] = ring[i];
  }
  if( strstr(ring, word) != 0 ) {
    printf( "Yes\n" );
  } else {
    printf( "No\n" );
  }
  return 0;
}
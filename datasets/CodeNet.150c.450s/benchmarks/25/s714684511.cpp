#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  int alpha;
  int cnt[256] = {0};
  while( (alpha = getchar()) != EOF ) {
    alpha = tolower( alpha );
    cnt[alpha]++;
  }
  for(alpha = 'a'; alpha <= 'z'; alpha++) {
    printf( "%c : %d\n", alpha, cnt[alpha] );
  }
  return 0;
}
#include <bits/stdc++.h>

int main() {

  int input;
  int count = 1;
  
  for(;;) {
    scanf("%d", &input);
    if( input == 0 ) break;
    printf("Case %d: %d\n", count, input);
    count += 1;
  }
  
  
  return 0;
}
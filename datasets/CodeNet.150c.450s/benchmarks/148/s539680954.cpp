#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int a = 0, b = 0, c = 0, d = 0;
  for(int i = 0; i < n; i++) {
    char str[5];
    scanf("%s", str);
    if(str[0] == 'A') a++;
    else if(str[0] == 'W') b++;
    else if(str[0] == 'T') c++;
    else d++;
  }
  printf("AC x %d\n", a);
  printf("WA x %d\n", b);
  printf("TLE x %d\n", c);
  printf("RE x %d\n", d);
  return 0;
}
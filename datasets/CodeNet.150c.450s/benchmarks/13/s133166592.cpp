
#include <stdio.h>
#include <string.h>
 
int main() {
  char a[200], b[100], c[200];
 
  scanf("%s", a);
  scanf("%s", b);
  strcpy(c,a);
  strcat(c,a);
 
  if (strstr(c,b)) {
      printf("Yes\n");
  } else {
      printf("No\n");
  }
 
  return 0;
}
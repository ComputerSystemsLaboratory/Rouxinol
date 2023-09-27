#include<cstdio>
#include<cstring>

int main() {
  char ch1[101], ch2[101], ch3[201] = {};

  scanf("%s %s",ch1, ch2);

  strcat( ch3, ch1);
  strcat( ch3, ch1);

  if( strstr( ch3, ch2) == NULL) printf("No\n");
  else printf("Yes\n");

  return 0;
}
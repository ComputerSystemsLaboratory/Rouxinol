#include <bits/stdc++.h>

int main() {
  
  char str[1024];
  char ope[256];
  char obj[1024];
  int q;
  int a, b;
  char temp;

  scanf("%s", str);
  scanf("%d", &q);

  for(int i = 0; i < q; ++i) {
    scanf("%s", ope);
    if( strcmp("replace", ope) == 0 ) {
      scanf("%d %d", &a, &b);
      scanf("%s", obj);
      for(int j = a; j <= b; ++j) {
	str[j] = obj[j-a];
      }
    }
    else if( strcmp("reverse", ope) == 0 ) {
      scanf("%d %d", &a, &b);
      for(int j = a; j <= (a+b)/2; ++j) {
	temp = str[j]; str[j] = str[a+b-j]; str[a+b-j] = temp;
      }
    }
    else if( strcmp("print", ope) == 0 ) {
      scanf("%d %d", &a, &b);
      for(int j = a; j <= b; ++j) {
	printf("%c", str[j]);
      }
      printf("\n");
    }
    else {
      printf("nya------\n");
    }
      
  }
  
  return 0;
}
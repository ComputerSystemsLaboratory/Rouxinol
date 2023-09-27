#include<cstdio>
#include<cctype>

int main() {
  char c;

  for(;;) {
    scanf("%c", &c);

    if( isalpha(c) ) {
      if( islower(c) ) {
	printf("%c", toupper(c));
      } else {
	printf("%c", tolower(c));
      }
    } else {
      printf("%c", c);
    }

    if(c == '\n') break;

  }
  
  return 0;
}


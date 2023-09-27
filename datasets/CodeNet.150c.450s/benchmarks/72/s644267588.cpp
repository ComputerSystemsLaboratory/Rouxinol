#include<cstdio>
#include<cctype>
using namespace std;

int main(){
  char ch;

  while (1) {
    scanf("%c", &ch);
    if (ch == '\n' ) break;
    if (isalpha(ch)) {
      if (isupper(ch)) ch = tolower(ch);
      else if (islower(ch)) ch = toupper(ch);
    }

    printf("%c", ch);
  }

  printf("\n");
return 0;
}
#include <cstdio>
#include <cctype>
using namespace std;

int main(){
  while(true){
    char c;
    scanf("%c", &c);
    if(c == '\n'){
      printf("\n");
      break;
    }
    if(islower(c)) printf("%c", toupper(c));
    else printf("%c", tolower(c));
  }
  return 0;
}
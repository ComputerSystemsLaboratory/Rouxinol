#include<cstdio>
#include<cstring>
using namespace std;

int main() {

  for(;;) {

    char x[1000];
    scanf("%s", x);

    if(x[0] == '0') break;

    int sum = 0;
    for(int i = 0; i < strlen(x); i++) {
      sum += x[i] - '0';
    }
    printf("%d\n", sum);
  }
  
  return 0;
}


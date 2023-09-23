#include <cstdio>
using namespace std;

int main() {
  int a,b;
  while(scanf("%d %d",&a,&b) != EOF) {
    int num = a + b;
    int digit = 1;
    while(num >= 10) {
      digit++;
      num /= 10;
    }
    printf("%d\n",digit);
  }
}
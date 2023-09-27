#include <cstdio>
using namespace std;
int main(){
  int m, f, r, s;
  m = 0;
  f = 0;
  r = 0;
  s = 0;
  while(1){
  scanf("%d %d %d", &m, &f, &r);
  s = m + f;
    if(m == -1 && f == -1 && r == -1)
      break;
    if(m == -1 || f == -1)
      printf("F\n");
    else if(s >= 80)
      printf("A\n");
    else if(s >= 65)
      printf("B\n");
    else if(s >= 50)
      printf("C\n");
    else if(s < 30)
      printf("F\n");
    else if(s >= 30 && s < 50 && r >= 50)
      printf("C\n");
    else
      printf("D\n");
  }
}
#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int cal(int l, int r) {
  char in[81] = {};
  int i = 0;

  while(scanf("%s", in) != EOF) {

    //                  printf("l : %f, r : %f\n", l, r);
    if(in[0] == '+')       return l + r;
    else if(in[0] == '-')  return l - r;
    else if(in[0] == '*')  return l * r;
    //                  else if(in[0] == '/')  return 1.0 * l / r;
    else if(in[0] == '\n') return r;
    r = cal(r, atoi(in));
  }
  //                    printf("l : %f, r : %f\n", l, r);
  return r;
}

int main() {
  printf("%d\n", cal(0, 0));

  return 0;
}
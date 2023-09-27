#include <stdio.h>
#include <string.h>
#define rep(i, n) for(int i = 0; i < n; ++i)

class dice {
  private:
    int f[6];
  public:
    dice(int *a){
      int i;
      rep(i, 6) f[i] = a[i];
    }
    void n(){
      int t;
      t = f[0];
      f[0] = f[1];
      f[1] = f[5];
      f[5] = f[4];
      f[4] = t;
    }
    void s() {
      int t;
      t = f[0];
      f[0] = f[4];
      f[4] = f[5];
      f[5] = f[1];
      f[1] = t;
    }
    void w() {
      int t;
      t = f[0];
      f[0] = f[2];
      f[2] = f[5];
      f[5] = f[3];
      f[3] = t;
    }
    void e() {
      int t;
      t = f[0];
      f[0] = f[3];
      f[3] = f[5];
      f[5] = f[2];
      f[2] = t;
    }
    int print(int num) {
      return f[num];
    }
};

int main(void) {
  int a[6], i;
  char s[150];
  rep(i, 6) scanf("%d", &a[i]);
  dice d(a);
  scanf("%s", s);
  rep(i, strlen(s)) {
    if(s[i] == 'S') d.s();
    else if(s[i] == 'N') d.n();
    else if(s[i] == 'W') d.w();
    else if(s[i] == 'E') d.e();
  }
  printf("%d\n", d.print(0));
  return 0;
}

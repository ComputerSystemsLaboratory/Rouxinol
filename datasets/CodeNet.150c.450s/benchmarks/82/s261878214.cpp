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
  int a[6], i, q, j;
  char s[150];
  rep(i, 6) scanf("%d", &a[i]);
  dice d(a);
  scanf("%d", &q);
  for(i = 0; i < q; ++i) {
    int t, s;
    scanf("%d%d", &t, &s);
    if(d.print(1) == t) d.n();
    else if(d.print(2) == t) d.w();
    else if(d.print(3) == t) d.e();
    else if(d.print(4) == t) d.s();
    else if(d.print(5) == t) d.n(), d.n();
    if(d.print(1) == s) printf("%d\n", d.print(2));
    else if(d.print(2) == s) printf("%d\n", d.print(4));
    else if(d.print(3) == s) printf("%d\n", d.print(1));
    else if(d.print(4) == s) printf("%d\n", d.print(3));
  }
  return 0;
}

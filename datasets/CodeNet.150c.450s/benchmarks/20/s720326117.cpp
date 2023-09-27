#include <stdio.h>
int main(void) {
  int h, m, s;
  int S;
  scanf("%d", &S);

  if(!(0 <= S && S < 86400)) {
    printf("0〜86400で入力してください\n");
  } else {
    h = S / 3600;
    m = (S - h * 3600) / 60;
    s = S % 60;
    printf("%d:%d:%d\n", h, m, s);
  }
  return 0;
}
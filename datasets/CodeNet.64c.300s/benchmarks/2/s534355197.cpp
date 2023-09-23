#include <stdio.h>
struct STUDENT {
  int mid_res;
  int fin_res;
  int re_res;
};

int main(void) {
  struct STUDENT students[100000];

  int m, f, r;
  int i, num = 0;

  do {
    scanf("%d %d %d", &m, &f, &r);
    students[num].mid_res = m;
    students[num].fin_res = f;
    students[num].re_res = r;
    num++;
  } while (!(m == -1 && f == -1 && r == -1));

  // for (i = 0; i < num; i++) {
  //   printf("(%3d) (%3d) (%3d)\n", students[i].mid_res, students[i].fin_res, students[i].re_res);
  // }

  for (i = 0; i < num - 1; i++) {
    // printf("(%d)\n", i);
    int sum = students[i].mid_res + students[i].fin_res;
    if (students[i].mid_res == -1 || students[i].fin_res == -1) {
      printf("F\n");
    } else if (80 <= sum) {
      printf("A\n");
    } else if (65 <= sum) {
      printf("B\n");
    } else if (50 <= sum) {
      printf("C\n");
    } else if (30 <= sum) {
      if (50 <= students[i].re_res) {
        printf("C\n");
      } else {
        printf("D\n");
      }
    }else {
      printf("F\n");
    }
  }
  return 0;
}
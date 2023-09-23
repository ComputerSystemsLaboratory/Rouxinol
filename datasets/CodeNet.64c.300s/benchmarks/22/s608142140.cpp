#include <stdio.h>

int judge_right_triangle(int a, int b, int c);

int main(void)
{
    int number;
    scanf("%d", &number);
    for(int j = 0; j < number; j = j + 1){
      int print_right_triangle;
      int x, y, z;
      scanf("%d %d %d", &x, &y, &z);
      print_right_triangle = judge_right_triangle(x, y, z);
      if (print_right_triangle == 1) {
        printf("YES\n");
      } else if (print_right_triangle == 0) {
          printf("NO\n");
        }
    }
  return 0;
}

int judge_right_triangle(int a, int b, int c)
{
    int t;
    if (a * a + b * b == c * c){
      t = 1;
    } else if (a * a + c * c == b * b) {
      t = 1;
    } else if ( b * b + c * c == a * a) {
      t = 1;
    }
  //三平方の定理を満たすときt=１を返す                                                                                                                                               
    else{
      t = 0;
    }
    return t;
}
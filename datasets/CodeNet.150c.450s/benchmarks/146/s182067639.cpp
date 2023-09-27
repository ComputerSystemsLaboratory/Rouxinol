#include <stdio.h>

typedef struct _point {
  double x, y;
} point;

// テ」ツδ凖」ツつッテ」ツδ暗」ツδォa, bテ」ツ?ョテ・ツ、ツ姪ァツゥツ催」ツ?ョテ・ツ、ツァテ」ツ?催」ツ?陛」ツつ津ヲツアツづ」ツつ?」ツつ凝」ツ??
double cross(point a, point b) {
  return a.x * b.y - a.y * b.x;
}

int main() {
  int Tc, tc;
  point A, B, C, D;
  scanf("%d", &Tc);
  for(tc = 0; tc < Tc; ++tc) {
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
          &A.x, &A.y, &B.x, &B.y, &C.x, &C.y, &D.x, &D.y);
    point va, vb;
    va.x = B.x - A.x;
    va.y = B.y - A.y;
    vb.x = D.x - C.x;
    vb.y = D.y - C.y;
    // テ」ツδ凖」ツつッテ」ツδ暗」ツδォa, bテ」ツ?ョテ・ツ、ツ姪ァツゥツ催」ツ?ョテ・ツ、ツァテ」ツ?催」ツ?陛」ツ?? テ「ツ??テ」ツδ凖」ツつッテ」ツδ暗」ツδォa, bテ」ツ?ッテ・ツケツウティツ。ツ?
    if(cross(va, vb) == 0.0) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
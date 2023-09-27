/*
 * Problem     : AOJ0010
 * Title       : A Point in a Triangle
 * Author      : mizo0203
 * Copyright   : Your copyright free
 * Description : 三角形による包含判定
 *               http://www5d.biglobe.ne.jp/~tomoya03/shtml/algorithm/Hougan.htm
 */

#include <stdio.h>
#include <math.h>
using namespace std;

typedef struct point {
  double x;
  double y;
} POINT;

POINT t[3], p;

bool input() {
  int i;

  for (i = 0; i < 3; i++) {
    if (scanf("%lf %lf", &t[i].x, &t[i].y) == EOF) return false;
  }
  scanf("%lf %lf", &p.x, &p.y);

  return true;
}

double intersectM(POINT p1, POINT p2, POINT p3, POINT p4) {
  return ((p1.x - p2.x) * (p3.y - p1.y) + (p1.y - p2.y) * (p1.x - p3.x))
      * ((p1.x - p2.x) * (p4.y - p1.y) + (p1.y - p2.y) * (p1.x - p4.x));
}

bool PosIncludeTriEx(POINT tp1, POINT tp2, POINT tp3, POINT xp) {

  if ((tp1.x - tp3.x) * (tp1.y - tp2.y) == (tp1.x - tp2.x) * (tp1.y - tp3.y))
    return false;

  if (intersectM(tp1, tp2, xp, tp3) < 0)
    return false;
  if (intersectM(tp1, tp3, xp, tp2) < 0)
    return false;
  if (intersectM(tp2, tp3, xp, tp1) < 0)
    return false;

  return true;
}

int main() {
  while (input()) {
    if (PosIncludeTriEx(t[0], t[1], t[2], p))
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}
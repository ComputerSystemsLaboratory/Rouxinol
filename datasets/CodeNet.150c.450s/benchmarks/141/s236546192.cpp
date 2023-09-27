#include <stdio.h>
#include <stdlib.h>

 typedef struct  Point {
    float x;
    float y;
}fPoint;

float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}


bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
   /* Calculate area of triangle ABC */
   float A = area (x1, y1, x2, y2, x3, y3);

   /* Calculate area of triangle PBC */
   float A1 = area (x, y, x2, y2, x3, y3);

   /* Calculate area of triangle PAC */
   float A2 = area (x1, y1, x, y, x3, y3);

   /* Calculate area of triangle PAB */
   float A3 = area (x1, y1, x2, y2, x, y);

   /* Check if sum of A1, A2 and A3 is same as A */
   return (A == A1 + A2 + A3);
}
float sign(fPoint p1, fPoint p2, fPoint p3)
{
  return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

bool PointInTriangle(fPoint pt, fPoint v1, fPoint v2, fPoint v3)
{
  bool b1, b2, b3;

  b1 = sign(pt, v1, v2) < 0.0f;
  b2 = sign(pt, v2, v3) < 0.0f;
  b3 = sign(pt, v3, v1) < 0.0f;

  return ((b1 == b2) && (b2 == b3));
}

int main()
{

   float x1,x2,x3,x4,x5,x6,x7,x8;
   while(scanf("%f%f%f%f%f%f%f%f",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8)==8)
   {
       fPoint pt,v1,v2,v3;
       pt.x=x7;
       pt.y=x8;
       v1.x=x1;
       v1.y=x2;
       v2.x=x3;
       v2.y=x4;
       v3.x=x5;
       v3.y=x6;



       if (PointInTriangle( pt, v1, v2, v3))
        printf ("YES\n");
      else
         printf ("NO\n");

   }


   return 0;
}
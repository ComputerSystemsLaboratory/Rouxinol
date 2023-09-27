#include <cstdio>

using namespace std;

double nx[4], ny[4], a[3], b[3], c[3];

void line(double ax, double ay, double bx, double by, double *a, double *b, double *c)
{

  if(ax == bx){
    *b = 0;
    *c = ax;
    return;
  }
  if(ay == by){
    *a = 0;
    *c = ay;
    return;
  }

  double aa = ax - bx;
  double bb = ay - by;
  *a = bb / aa;
  *c = (*b) * ay - (*a) * ax;
}

int position(double a, double b, double c, double px, double py)
{
  if(a == 0)
    return c<py?1:-1;

  if(b == 0)
    return c<px?1:-1;

  return (a * px + c < py)?1:-1;
}

int main()
{
  while(scanf("%lf%lf", &nx[0], &ny[0]) != -1){
    for(int i=0;i<3;i++) a[i] = b[i] = c[i] = 1;
    
    for(int i=1;i<4;i++)
      scanf("%lf%lf", &nx[i], &ny[i]);

    line(nx[0], ny[0], nx[1], ny[1], &a[0], &b[0], &c[0]);
    line(nx[1], ny[1], nx[2], ny[2], &a[1], &b[1], &c[1]);
    line(nx[0], ny[0], nx[2], ny[2], &a[2], &b[2], &c[2]);

    //    for(int i=0;i<3;i++)
    //      printf("%lf %lf %lf\n", a[i], b[i], c[i]);
    
    puts((position(a[0], b[0], c[0], nx[2], ny[2]) * position(a[0], b[0], c[0], nx[3], ny[3]) > 0 &&
	  position(a[1], b[1], c[1], nx[0], ny[0]) * position(a[1], b[1], c[1], nx[3], ny[3]) > 0 &&
	  position(a[2], b[2], c[2], nx[1], ny[1]) * position(a[2], b[2], c[2], nx[3], ny[3]) > 0)?"YES":"NO");
  }
  return 0;
}
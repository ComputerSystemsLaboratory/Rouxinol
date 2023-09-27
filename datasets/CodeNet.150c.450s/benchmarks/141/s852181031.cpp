#include <stdio.h>
#include <math.h>

void swap(double *a, double *b)
{
  double tmp = *a;
  *a = *b;
  *b = tmp;
}

double angle(double x, double y)
{
  double angle = acos(x/sqrt(x*x+y*y));
  if(y<0){
    angle = 2*M_PI-angle;
  }

  return angle;
}

int main(void)
{
  double x1,y1,x2,y2,x3,y3,xp,yp;
  while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF){
    double alpha = angle(x1-xp, y1-yp);
    double beta = angle(x2-xp, y2-yp);
    double gamma = angle(x3-xp, y3-yp);
    
    if(alpha>beta){
      swap(&alpha, &beta);
    }
    if(beta>gamma){
      swap(&beta, &gamma);
    }
    if(alpha>beta){
      swap(&alpha, &beta);
    }

    if(beta-alpha<M_PI && gamma-beta<M_PI && gamma-alpha>M_PI){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }

  return 0;
}
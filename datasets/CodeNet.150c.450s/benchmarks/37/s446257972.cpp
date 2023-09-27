#include <cstdio>
using namespace std;
int main(){
  double a,b,c,d,e,f;
  double x,y;
  while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF){
    y = (f - (d * c) / a) / ((d * -1 * b) / a + e);
    x = (c - b * y) / a;
    printf("%.3f %.3f\n",x,y);
  }
  return(0);
}
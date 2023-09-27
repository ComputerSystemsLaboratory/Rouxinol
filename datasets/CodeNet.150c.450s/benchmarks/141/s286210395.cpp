#include <cstdio>
#include <cmath>

using namespace std;

int main(void){
  double x[3], y[3], cx, cy;
  double p[3];
  
  while (scanf("%lf%lf", &x[0], &y[0])>0){
    scanf("%lf%lf%lf%lf%lf%lf", &x[1], &y[1], &x[2], &y[2], &cx, &cy);
    for (int i=0; i<3; i++){
      int j=(i+1)%3;
      p[i] = (x[i]-cx)*(y[j]-cy)-(x[j]-cx)*(y[i]-cy);
    }
    puts(p[0]*p[1]<0||p[1]*p[2]<0||p[2]*p[0]<0 ? "NO": "YES");
  }
  return 0;
}

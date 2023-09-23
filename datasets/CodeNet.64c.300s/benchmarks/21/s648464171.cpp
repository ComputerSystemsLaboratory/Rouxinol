#include <cstdio>
using namespace std;
float a,b,c,d,e,f,t;
int main(){
  for(;~scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    t=a*e-b*d,printf("%.3f %.3f\n",(e*c-b*f)/t+0.,(a*f-d*c)/t+0.)
  );
  return 0;
}
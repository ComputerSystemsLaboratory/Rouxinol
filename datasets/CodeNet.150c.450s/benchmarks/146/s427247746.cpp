#include <cstdio>
#include <cmath>
using namespace std;
const double EPS = 1e-10;
typedef struct{
  double x,y;
}point;

int main(void){
  int n;
  char str[200];
  point A,B,C,D;

  fgets(str,sizeof(str),stdin);
  sscanf(str,"%d",&n);
  while(n--){
    fgets(str,sizeof(str),stdin);
    sscanf(str,"%lf %lf %lf %lf %lf %lf %lf %lf",&A.x,&A.y,&B.x,&B.y,&C.x,&C.y,&D.x,&D.y);
    if(fabs((B.x-A.x)*(D.y-C.y)-(D.x-C.x)*(B.y-A.y)) < EPS){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
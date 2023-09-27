#include <cstdio>

int main(){
  double x[4],y[4],s[3];
  while(1){
    for(int i=0; i<4; i++)
      if(scanf("%lf %lf",&x[i],&y[i]) == EOF)
	goto outer;

    for(int i=0; i<3; i++){
      int j=(i+1)%3;
      s[i] = (x[i]-x[j])*(y[j]-y[3])-(y[i]-y[j])*(x[j]-x[3]);
    }

    if((s[0]>0&&s[1]>0&&s[2]>0)||(s[0]<0&&s[1]<0&&s[2]<0))
      printf("YES\n");
    else
      printf("NO\n");
  }
 outer: ;
}
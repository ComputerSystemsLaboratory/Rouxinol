#include <iostream>
#include <cstdio>

void hantei(double x[], double y[]);

int main() {
  int n;
  double x[4], y[4];
  scanf("%d", &n);
  for(int i=0;i<n;i++) {
    for(int j=0;j<4;j++) scanf("%lf %lf", &x[j], &y[j]);
    hantei(x, y);
  }
}

void hantei(double x[], double y[]) {
  if(x[0]==x[1]) {
    if(x[2]==x[3])printf("YES\n");
    else printf("NO\n");
  } else if(x[2]==x[3])printf("NO\n");
  else {
    if((y[1]-y[0])/(x[1]-x[0])==(y[3]-y[2])/(x[3]-x[2]))
      printf("YES\n");
    else printf("NO\n");
  }
  /*
    if(x[0]==x[1]) {
    if(x[2]==x[3]) return true;
    else return false;
    } else if(x[2]==x[3]) return false;
    else {
    if(x[1]-x[0]/y[1]-y[0] == x[3]-x[2]/y[3]-y[2]) return true;
    else  return false;
    }
  */
}
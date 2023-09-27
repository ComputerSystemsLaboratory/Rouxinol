#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){

  long n,m,l,*nm,*ml,r,*p;

  scanf("%ld %ld %ld\n",&n,&m,&l);

  nm=(long *)malloc(n*m*sizeof(long));
  ml=(long *)malloc(m*l*sizeof(long));

  p = nm;

  for(int i=0;i<n*m;i++){
          scanf("%ld ",p);
          p++;
  }
  p = ml;

  for(int i=0;i<m*l;i++){
          scanf("%ld ",p);
          p++;
  }

  for(int i=0;i<n;i++){
    r=0;
    for(int k=0;k<l;k++){
      for(int j=0;j<m;j++){
        r += nm[m*i+j] * ml[j*l+k];
      }
      printf("%ld",r);
      r=0;
      if(k<l-1)
      putchar(' ');
    }
  putchar('\n');
  }
}

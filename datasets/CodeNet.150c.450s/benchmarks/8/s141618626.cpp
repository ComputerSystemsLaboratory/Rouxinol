#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){

  int n,score_a=0,score_b=0;
  char a[101],b[101];

  scanf("%d\n",&n);

  for(int i=0;i<n;i++){
     scanf("%s %s\n",a,b);
     int cmp = strcmp(a,b);
     if(cmp>0)
      score_a+=3;
     else if(cmp<0)
      score_b+=3;
     else {
      score_a++;
      score_b++;
     }
  }
  printf("%d %d\n",score_a,score_b);


}

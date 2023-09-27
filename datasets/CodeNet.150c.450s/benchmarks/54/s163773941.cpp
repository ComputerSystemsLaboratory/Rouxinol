#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){
  char w[11],t[1001],*p;
  int count=0;

  scanf("%s\n",w);

  while(1){
      scanf("%s\n",t);
      if(strcmp(t,"END_OF_TEXT")==0){
        printf("%d\n",count);
        return 0;
      }

      p = t;
      if(strcasecmp(p,w)==0) {
        count++;
      }
  }


}

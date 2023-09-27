#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  long max;
  char str[10];
  int i, j, k;
  int num, nnum;
  long setdata[2][5001], tmp;
  int focus;

  while(cin>>num){
    if(num==0) break;
    for(i=0; i<num; i++){
      cin>>str;
      setdata[0][i]=(long)atol(str);
    }

    max=100001*(-1);
    for(i=0; i<num; i++){
      if(max<setdata[0][i]) max=setdata[0][i];
    }
    focus=1;
    for(i=num-1; i>=1; i--){
      for(j=0; j<i; j++){
        if(i==num-1){
          setdata[1][j]=setdata[0][j]+setdata[0][j+1];
          if(max<setdata[1][j]) max=setdata[1][j];
        }
        else {
          setdata[focus][j]=setdata[1-focus][j]+setdata[1-focus][j+1]-setdata[focus][j+1];
          if(max<setdata[focus][j]) max=setdata[focus][j];
        }
      }
      focus=1-focus;
    }
    printf("%ld\n", max);
  }

  return 0;
}
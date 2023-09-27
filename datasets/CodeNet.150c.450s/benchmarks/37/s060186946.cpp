#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstdlib>
using namespace std;


int main(void){

  int a;
  int b;
  int c;
  int d;
  int e;
  int f;

  float x;
  float y;

  while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF){
    x = a * e - b * d ;
    y = b * d - a * e ;

    if ((x == 0) && (y == 0)){
      cerr << "error" << endl;
      exit(1);
    }else if(x == 0){
      cerr << "error" << endl;
      exit(1);
    }else if(y == 0){
      cerr << "error" << endl;
      exit(1);
    }else{

      if(c * e - b * f == 0){
        x = 0;
      }else{
        x = ( c * e - b * f ) / x ;
      }

      if(c * d - a * f == 0){
        y = 0;
      }else{
        y = ( c * d - a * f) / y;
      }

      printf("%.3f %.3f\n",x,y);
    }
  }


  return 0;


}
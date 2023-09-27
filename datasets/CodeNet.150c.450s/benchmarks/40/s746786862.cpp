#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iomanip>

#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main(){

  int t=0;
  int num[6]={0};
  char point;

  for(int i=0;i<6;i++){
  cin >>num[i];
  }

  while(cin >>point){
    if(point=='E'){
      swap(num[0],num[3]);
      swap(num[3],num[5]);
      swap(num[5],num[2]);
    }
    if(point=='W'){
      swap(num[0],num[2]);
      swap(num[2],num[5]);
      swap(num[5],num[3]);
}
    if(point=='S'){
      swap(num[0],num[4]);
      swap(num[4],num[5]);
      swap(num[5],num[1]);
    }
    if(point=='N'){
      swap(num[0],num[1]);
      swap(num[1],num[5]);
      swap(num[5],num[4]);
    }
  }

    cout <<num[0] <<endl;

  return 0;
}
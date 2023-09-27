#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main(){

  int r,c;
  int sum=0;
  int i,j;
  int m[256][256]={0};

  cin >>r >>c;

  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      cin >>m[i][j];
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      m[r][j]+=m[i][j];
      m[i][c]+=m[i][j];
    }
      sum+=m[i][c];
  }

  m[r][c]=sum;

  for(i=0;i<r+1;i++){
    for(j=0;j<c;j++){
      cout <<m[i][j] <<" ";
    }
    cout <<m[i][c] <<endl;
  }

  return 0;
}
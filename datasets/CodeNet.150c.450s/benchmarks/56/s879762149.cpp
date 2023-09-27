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

  long long min=1000000,max=-1000000,sum=0;
  int n=0,m=0,i=0;

  cin >>n;

  for(i=0;i<n;i++){
    cin >>m;
    if(min>m) min=m;
    if(max<m) max=m;
    sum=sum+m;
  }

  cout <<min <<" " <<max <<" " <<sum <<endl;

  return 0;
}
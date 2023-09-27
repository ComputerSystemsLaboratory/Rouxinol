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

  string tarou,hanako;
  int T=0,H=0;
  int i,n;


  cin >>n;

  for(i=0;i<n;i++){
    cin >>tarou >>hanako;
    if(tarou>hanako) T=T+3; 
    else if(tarou<hanako) H=H+3;
    else{++T;++H;}
  }

  cout <<T <<" " <<H <<endl;

  return 0;
}
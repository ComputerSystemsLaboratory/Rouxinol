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

  string x;
  int total=0;
  int i=0;
  while(1){
    cin >> x;
    if(x=="0") break;

    else{
      total=0;
      i=0;
      while(i<x.size()){
	total+=x[i]-'0';
	i++;
      }
      cout <<total <<endl;
    }
  }
  return 0;
}
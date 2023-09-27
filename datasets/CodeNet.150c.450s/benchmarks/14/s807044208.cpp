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

  int n;
  int i=0;

  cin >>n;

  while(i<n){
    i++;
    if(i%10==3 || (i/10)%10==3 || (i/100)%10==3 || (i/1000)%10==3 || i%3==0)cout <<" " <<i;
  }
  cout <<endl;

  return 0;
}
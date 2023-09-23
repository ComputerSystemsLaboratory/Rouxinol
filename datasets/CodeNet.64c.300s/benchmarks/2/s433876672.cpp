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

  int m,f,r;

  while(1){
    cin >>m >>f >>r;

    if(m==-1&&f==-1&&r==-1) break;
    else if(m==-1 || f==-1) cout <<"F" <<endl;
    else if(80<=m+f) cout <<"A" <<endl;
    else if(65<=m+f) cout <<"B" <<endl;
    else if(50<=m+f) cout <<"C" <<endl;
    else if(30<=m+f && 50<=r) cout <<"C" <<endl;
    else if(30<=m+f && r<50) cout <<"D" <<endl;
    else if(0<=m+f) cout <<"F" <<endl;
  }
  return 0;
}
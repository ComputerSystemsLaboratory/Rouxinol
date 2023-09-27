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

  char word;


  while(1){

    if((word=getchar())==EOF) break;

    if(islower(word)==0){
      word=tolower(word);
    }
    else if(isupper(word)==0){
      word=toupper(word);
    }
      cout <<word;

  }
  return 0;
}
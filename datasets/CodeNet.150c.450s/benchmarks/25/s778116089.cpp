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

  char ch;
  char s[27]={"abcdefghijklmnopqrstuvwxyz"};
  int counter[27]={0};
  int i,j=0;
 
  while(cin >>ch){
    ch=tolower(ch);
    if(ch>='a' && ch<='z') counter[ch-'a']++;
  }

  for(i=0;i<26;i++){
    cout <<s[i] <<" " <<":" <<" " <<counter[i] <<endl;
  }

  return 0;
}
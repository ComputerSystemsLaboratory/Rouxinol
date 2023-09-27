#include<iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>

using namespace std;
int main(){

  
  int a[26];
  memset(a,0,26*sizeof(int));

  string str;
  while(getline(cin , str)){  
    for(int i=0;i<str.size();i++){
      int x = (int)str[i];
      if(65<=x && x <=90) x += 32;
      if(97 <= x && x <=122) a[x-97]++;
    }
  }

  for(int i=0;i<26;i++) cout << (char)(i+97)<<" : " << a[i] << endl;
  

}

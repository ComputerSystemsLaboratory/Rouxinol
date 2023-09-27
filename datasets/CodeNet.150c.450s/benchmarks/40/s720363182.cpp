#include<iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>

using namespace std;
int main(){


  int x[7];
  for(int i=1;i<7;i++){
    cin >> x[i];
  }
  string str;
  cin >> str;

  for(int i=0;i<str.size();i++){
    char c = str[i];
    int tmp = 0;
    if(c == 'N'){
      tmp = x[1];
      x[1] = x[2];
      x[2] = x[6];
      x[6] = x[5];
      x[5] = tmp;
    }else if(c== 'S'){
      tmp = x[1];
      x[1] = x[5];
      x[5] = x[6];
      x[6] = x[2];
      x[2] = tmp;
    }else if(c=='E'){
      tmp = x[1];
      x[1] = x[4];
      x[4] = x[6];
      x[6] = x[3];
      x[3] = tmp;
    }else if(c == 'W'){
      tmp = x[1];
      x[1] = x[3];
      x[3] = x[6];
      x[6] = x[4];
      x[4] = tmp;
    }
  }
  cout << x[1] << endl;



}




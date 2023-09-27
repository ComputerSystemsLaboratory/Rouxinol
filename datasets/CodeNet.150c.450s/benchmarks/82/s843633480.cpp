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

  int n=0;
  cin >> n;

  bool t[7][7];
  memset(t,0,7*7*sizeof(bool));
  t[1][2] = true;
  t[2][3] = true;
  t[3][1] = true;

  for(int i=0;i<n;i++){
    int top=0,front=0;
    cin >> top >> front;

    int top_i=0,front_i=0;

    for(int j=1;j<7;j++){
      if(top == x[j]) top_i = j;
      if(front == x[j]) front_i = j;
    }

    bool rev = false;
    if(top_i > 3){
      top_i = 7 - top_i;
      rev = !rev;
    }
    if(front_i > 3){
      front_i = 7 - front_i;
      rev = !rev;
    } 
    if( ! t[top_i][front_i]) rev = !rev;

    int result = 0;
    for(int j=1;j<4;j++){
      if(j!= top_i && j!=front_i){
        result = j;
        break;
      }
    }

    if(rev) cout << x[7-result] << endl;
    else cout << x[result] << endl;

  }

  



}




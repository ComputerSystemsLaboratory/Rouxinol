#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iomanip>

#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main(){

  int i=0,n;
  int num[6]={0};
  int top,front;

  for(i=0;i<6;i++){
    cin >>num[i];
  }
  cin >>n;
  for(i=0;i<n;i++){
    cin >>top >>front;

    if(top==num[0]){
      if(front==num[1]) cout<<num[2] <<endl;
      if(front==num[2]) cout<<num[4] <<endl;
      if(front==num[3]) cout<<num[1] <<endl;
      if(front==num[4]) cout<<num[3] <<endl;
    }
    if(top==num[1]){
      if(front==num[0]) cout<<num[3] <<endl;
      if(front==num[2]) cout<<num[0] <<endl;
      if(front==num[3]) cout<<num[5] <<endl;
      if(front==num[5]) cout<<num[2] <<endl;
    }
    if(top==num[2]){
      if(front==num[0]) cout<<num[1] <<endl;
      if(front==num[1]) cout<<num[5] <<endl;
      if(front==num[4]) cout<<num[0] <<endl;
      if(front==num[5]) cout<<num[4] <<endl;
    }
    if(top==num[3]){
      if(front==num[0]) cout<<num[4] <<endl;
      if(front==num[1]) cout<<num[0] <<endl;
      if(front==num[4]) cout<<num[5] <<endl;
      if(front==num[5]) cout<<num[1] <<endl;
    }
    if(top==num[4]){
      if(front==num[0]) cout<<num[2] <<endl;
      if(front==num[2]) cout<<num[5] <<endl;
      if(front==num[3]) cout<<num[0] <<endl;
      if(front==num[5]) cout<<num[3] <<endl;
    }
    if(top==num[5]){
      if(front==num[1]) cout<<num[3] <<endl;
      if(front==num[2]) cout<<num[1] <<endl;
      if(front==num[3]) cout<<num[4] <<endl;
      if(front==num[4]) cout<<num[2] <<endl;
    }

  }

  return 0;
}
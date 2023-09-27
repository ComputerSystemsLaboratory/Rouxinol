#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
  int flag = 0;
  string s, p, ring;

  getline(cin, s);
  getline(cin, p);

  ring = s + s;

  for(int i = 0; i < 100; i++ ){
    if(ring[i] == '\0' || flag == 1)  break;
    if(ring[i] == p[0]){
      flag = 1;
      for(int j = 1; j < 100; j++){
        if(p[j] == '\0') break;
        if(p[j] != ring[i + j]){
          flag = 0;
          break;
        }
      }
    }
  }

  if(flag == 1){ cout << "Yes" <<endl;}
  else{ cout << "No" << endl;}

  return 0;
}
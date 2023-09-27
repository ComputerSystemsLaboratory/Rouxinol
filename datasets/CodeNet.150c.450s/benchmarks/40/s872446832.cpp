#include <iostream>
using namespace std;

int main(){
  int a[6];
  int d[6] = {0,1,2,3,4,5};
  char r;

  for(int i=0; i<6; i++){
    cin >> a[i];
  }

  int n[6] = {4,0,2,3,5,1};
  int e[6] = {2,1,5,0,4,3};
  int s[6] = {1,5,2,3,0,4};
  int w[6] = {3,1,0,5,4,2};

  while(cin >> r){
    //cout << r << endl;
    if(r=='N'){
      for(int i=0; i<6; i++){
        d[i] = n[d[i]];
      }
    } else if(r=='E'){
      for(int i=0; i<6; i++){
        d[i] = e[d[i]];
      }
    } else if(r=='S'){
      for(int i=0; i<6; i++){
        d[i] = s[d[i]];
      }
    } else if(r=='W'){
      for(int i=0; i<6; i++){
        d[i] = w[d[i]];
      }
    }
  }
  for(int i=0; i<6; i++){
    if(d[i] == 0)cout << a[i] << endl;
  }
}

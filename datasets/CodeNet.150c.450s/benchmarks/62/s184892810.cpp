#include <iostream>
#include <array>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]){
  int a[3];
  int tmp, i;
  cin >> a[0];
  cin >> a[1];
  cin >> a[2];
  for(i = 0; i <= 3;i++){
  tmp = a[0];
  if(a[0] < a[1]){
  }else{
    a[0] = a[1];
    a[1] = tmp;
    
  }
  tmp = a[1];
  if(a[1] < a[2]){
  }else{
    a[1] = a[2];
    a[2] = tmp;
  }
  }
  cout << a[0] << " " << a[1] << " " << a[2] << endl;
  return 0;
}
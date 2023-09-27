#include<iostream>

using namespace std;

int main(){
  int a;
  int b;
  int c;
  int x;
  int y;
  int z;
  cin >> a >> b >> c;
  if (a <= b && a <= c){
    x = a;
    if(b <= c){
    y = b;
    z = c;
    }else{
    y = c;
    z = b;
    }
  }else if(b <= a && b <= c){
    x = b;
    if(a <= c){
      y = a;
      z = c;
    }else{
      y = c;
      z = a;
    }
  }else{
    x = c;
    if (a <= b){
      y = a;
      z = b;
    }else{
      y = b;
      z = a;
    }
  }
  cout << x << " " << y << " " << z << endl;
  return 0;
}


#include<iostream>
using namespace std;

int main(){

  int x,y;
  int tmp;

  cin >> x >> y;

  if(y>x){
    tmp=x;
    x=y;
    y=tmp;
  }

  while(y>0){
    tmp = x%y;
    x=y;
    y=tmp;
  }

  cout << x << endl;

  return 0;
}
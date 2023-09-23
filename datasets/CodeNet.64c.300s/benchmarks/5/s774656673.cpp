#include<iostream>
using namespace std;
int main(){
  int a;
  int x=0;
  int y=0;
  int z=0;
  for(int i=1;i<=10;i++){
    cin >> a;
    if(a>x){
      z=y;
      y=x;
      x=a;
    }else if(y<a && a<=x){
      z=y;
      y=a;
    }else if(z<a && a<=y){
      z=a;
    }
  }
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;
}
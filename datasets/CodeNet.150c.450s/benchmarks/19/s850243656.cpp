#include<iostream>
using namespace std;

int main(){
  int x,y;
  while(1){
    cin >> x >> y;
    if(x==0 && y==0){
      break;
    }else{
      if(y<x){
	cout << y << " " << x << '\n';
      }else{
	cout << x << " " << y << '\n';
      }
    }
  }
  return 0;
}


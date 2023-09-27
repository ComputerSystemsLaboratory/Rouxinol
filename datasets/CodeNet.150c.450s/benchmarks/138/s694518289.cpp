//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B&lang=jp
#include <iostream>
using namespace std;

int isState(int x, int y){
    if(x > y) return 1;
    else{
      if(x == y) return 0;
      else return -1;
    }
}

int gcd(int x, int y){
  int state = isState(x, y);
  if(state == 0) return x;
  else{
    if(state == 1) return gcd(x-y,y);
    else return gcd(x,y-x);
  }
}


int main(){
  int x,y;
  cin >> x >> y;
  /*
  int gcd = 1;
  int n = min(x,y);

  for(int i = 1; i <= n; i++){
    if(x % i == 0 && y % i ==0){
      gcd = i;
    }
  }*/
  cout << gcd(x,y) << endl;
}
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_D
#include <iostream>
using namespace std;

bool div(int n){
  if(n % 3 == 0) return true;
  else return false;
}
bool isIn3(int n){
  if((n-3) % 10 == 0) return true;
  else return false;
}

bool in3(int n){
  while(n > 10){
    n /= 10;
    if(isIn3(n)) return true;
  }
  return false;
}


int main(){
  int n;
  cin >> n;
  for(int i=1; i <= n; i++){
    if(div(i) || isIn3(i)|| in3(i)) cout << " " << i;
  }
  cout << endl;
}
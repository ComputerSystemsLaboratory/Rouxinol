#include<iostream>
#include<cmath>
using namespace std;
int gcd(int x, int y){
  int X = max(x,y);
  int Y = min(x,y); 
  int mod = X % Y;
  if(mod == 0) 
    return Y;
  else 
    return gcd(Y, X % Y); 
}

int main(){
  int x, y;
  cin >> x >> y;
  cout << gcd(x,y) << "\n";
}
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int gcd(int x, int y){
  if(y==0)return x;
  else if(x>=y){
    return gcd(y,x%y);
  }
}

int main(){
  int x;
  int y;

  cin >> x >> y;
  if(y>x)swap(x,y);
  cout << gcd(x,y) << endl;
  return 0;
}
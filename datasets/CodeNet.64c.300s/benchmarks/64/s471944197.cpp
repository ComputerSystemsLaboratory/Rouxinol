#include<iostream>
using namespace std;
 
int gcd(int x, int y){
  // x >= y のときgcd(x,y)とgcd(y,yをxで割った余りが)等しいことをもちいた
  if ( y == 0 ) return x;
  else return gcd(y,x%y);
}
 
int main(){
  int x,y;
  cin >> x >> y;
  int result = gcd(x,y);
 
  cout << result << endl;
   
  return 0;
}
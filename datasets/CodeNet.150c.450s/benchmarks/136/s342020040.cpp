#include<iostream>
using namespace std;
int gcd(int x, int y);
int main(){
  int a,b;
  while(cin >>a>>b){
    int c = gcd(a,b);
    cout <<c<<" "<<a/c*b<<endl;
  }
  return 0;
}
int gcd(int x, int y){
  if(y == 0) return x;
  return gcd(y,x%y);
}
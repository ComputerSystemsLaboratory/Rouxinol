#include<cstdio>
#include<iostream>
     
using namespace std;
    
int GCD(int a, int b){
  int ans;
  int big, small;
     
  big = a;
  small = b;
     
  while (big) {
    if (small > big) swap(big, small);
    big = big % small;
  }
  ans = small;

  return ans;
}
     
int LCM(int a, int b, int gcd) {
  int ans;
  
  ans = a / gcd * b;

  return ans;
}
     
     
     
     
int main(){
  int a, b;
  int gcd, lcm;

  while (cin >> a >> b) { 

    gcd = GCD(a, b);
    lcm = LCM(a, b, gcd);

    cout << gcd << " " << lcm << endl;
  }

  return 0;
}
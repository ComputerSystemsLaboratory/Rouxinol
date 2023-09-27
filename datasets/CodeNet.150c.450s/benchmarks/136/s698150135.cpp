#include<cstdio>
#include<iostream>
     
using namespace std;
    
int gcd(int a, int b){

  if(b == 0)  return a;

  return gcd(b, a % b);
}
     
int lcm(int a, int b, int ans_gcd) {
  int ans;
  
  ans = a / ans_gcd * b;

  return ans;
}
     
     
     
     
int main(){
  int a, b;
  int ans_gcd, ans_lcm;

  while (cin >> a >> b) {
    if((a == 0) && (b == 0)) break;

    ans_gcd = gcd(a, b);
    ans_lcm = lcm(a, b, ans_gcd);

    cout << ans_gcd << " " << ans_lcm << endl;
  }

  return 0;
}
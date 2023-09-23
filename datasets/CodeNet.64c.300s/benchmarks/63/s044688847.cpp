#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int gcd(int a,int b){
  return b?gcd(b,a%b):a;
}

int main(void){

  int a,b;

  while(cin >> a >> b){
    int res=gcd(a,b);
    cout << gcd(a,b) << " " << a/res*b << endl;
  }
  return 0;
}
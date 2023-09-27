#include <iostream>

using namespace std;

int Gcd(int a, int b){
  if(a >= b){
	if(a % b == 0){
	  return b;
	}
	return Gcd(b, a%b);
  }else{
	if(b % a == 0){
	  return a;
	}
	return Gcd(a, b%a);
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  
  cout << Gcd(a, b) << endl;
  return 0;
}
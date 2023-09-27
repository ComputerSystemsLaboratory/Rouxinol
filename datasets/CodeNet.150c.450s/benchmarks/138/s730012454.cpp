#include <iostream>

using namespace std;


long long gcd(long long x,long long y){
	long long int tmp;
  if(x < y)
		swap(x, y);

  while( y > 0){
  	tmp = x % y;
    x = y;
    y = tmp;
	}
  return x;
}

int main(){
  int n, m;
  cin>> n >> m;
  cout<< gcd( n, m) <<endl;
  return 0;
}
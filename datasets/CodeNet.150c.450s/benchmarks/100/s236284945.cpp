#include <iostream>
using namespace std;

int main(){
 long long int n;
  while(cin >> n){
    if(1<=n && n<=20){
      for(int i=n-1;0<i;i--)
	n *= (long long int)i;
      cout << n << endl;
    }
  }
  return 0;
}
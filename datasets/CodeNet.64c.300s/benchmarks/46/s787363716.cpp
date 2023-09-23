
#include <iostream>
#include <cmath>

using namespace std;

const int N = 1000001;

int main() {

  int primes[N] = {0}; // 素数ならば0, 素数でなければ1
  primes[0] = 1;
  primes[1] = 1;

  for(int i=3; i<N; i++) {
    bool flag = true;
    for(int j=2; j<sqrt(i)+1 && flag==true; j++) {
      if(i%j == 0) { // 割りきれたならば素数でない
	primes[i] = 1;
	flag = false;
      }
    }
  }

  /*
  for(int i=0; i<100; i++) {
    cout<<i<<":"<<primes[i]<<" ";
  }
  */

  int a, d, n;

  while(cin>>a>>d>>n && !(a==0 && d==0 && n==0)) {
    int nTh = 0;
    int ans;
    for(int i=0; nTh<n; i++) {
      //cout<<a+i*d<<":"<<primes[a+i*d]<<endl;
      if(primes[a+i*d] == 0) {
	//cout<<"added"<<endl;
	nTh++;
	ans = i;
      }
    }
    cout<<a+ans*d<<endl;
  }

}
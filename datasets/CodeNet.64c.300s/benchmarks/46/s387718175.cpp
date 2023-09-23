#include<iostream>
#include<cmath>

using namespace std;

int isPrime(int a) {
  int flag = 1;
  if(a<2) {
    return 0;
  }
  for(int i=2; i<sqrt(a)+1 && flag==1; i++) {
    if(a%i==0 && a!=i) {
      flag = 0;
    }
  }
  return flag;
}

int main() {
  int a, d, n;
  while(cin>>a>>d>>n && a>0 && d>0) {
    int count = 0;
    int i = 0;
    while(count<n) {
      if(isPrime(a+d*i)) {
	count++;
	if(count == n) {
	  cout<<a+d*i<<endl;
	}
      }
      i++;
    }
  }
}
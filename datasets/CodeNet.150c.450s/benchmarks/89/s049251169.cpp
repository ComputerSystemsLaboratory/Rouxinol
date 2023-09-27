#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

vector<int> primes;

bool isPrime(int i){
  if(i<=1)return false;
  for(int p:primes){
    if(p>=i)break;
    if(i%p==0)return false;
  }
  return true;
}

int main(){ _;
  primes.push_back(2);
  for(int i=3;i<10000;i+=2)
    if(isPrime(i))
      primes.push_back(i);
  int a,d,n;
  while(cin>>a>>d>>n,(a|d|n)!=0){
    int count=0;
    for(int i=0;;i++){
      if(isPrime(a+d*i)){
	count++;
	if(count==n){
	  cout<<a+d*i<<endl;
	  break;
	}
      }
    }
  }
}
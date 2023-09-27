#include <iostream>
#include <cmath>
using namespace std;

int primes[1500];
int primescnt;

int isprime(int n){
  int flg=0;
  if (n<2)return 0;
  if (sqrt(n)>=primes[primescnt-1]){
    for (int i=primes[primescnt-1];i<=sqrt(n);i++){
      flg=0;
      for (int j=0;j<primescnt;j++){
	if (i%primes[j]==0){flg=1;break;}
      }
      if (!flg) {
	primes[primescnt]=i;
	primescnt++;
      }
    }
  }
  flg=0;
  for (int j=0;j<primescnt;j++){
    if (primes[j]>sqrt(n))break;
    if (n%primes[j]==0){flg=1;break;}
  }
  return !flg;
}

int main(){
  int a,d,n,pcnt,tret;
  primes[0]=2;
  primes[1]=3;
  primes[2]=5;
  primes[3]=7;
  primes[4]=11;
  primescnt=5;

  while (1){
    cin >> a >> d >> n;
    if (a==0&&d==0&&n==0) break;
    pcnt=0;
    tret=a-d;
    while (pcnt!=n){
      tret+=d;
      pcnt+=isprime(tret);
    }
    cout << tret << endl;
  }
  return 0;
}
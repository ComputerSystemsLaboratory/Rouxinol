#include<iostream>
using namespace std;

bool isPrime(int x){
  if(x<=1)return false;
  for(int i=2;i*i<=x;i++)
    if(x%i==0)return false;
  return true;
}

int main(){
  int a,d,n;
  
  while(cin >> a >> d >> n,a){
    int cnt = 0;
    for(int i=a;;i+=d){
      if(isPrime(i))cnt++;
      if(cnt == n){
	cout << i << endl;
	break;
      }
    }
  }
}
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(const int64_t &v){
  for(int i=2;i<=(int)sqrt(v);i++){
    if(v%i==0){
      return false;
    }
  }
  return true;
}

int main(){
  int64_t N,v,count=0;
  cin >> N;

  for(int i=0;i<N;i++){
    cin >> v;
    if(isPrime(v)){
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
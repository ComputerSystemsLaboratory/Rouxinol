#include<iostream>
using namespace std;

int isprime(int x){
  int i;
  if(x == 2)return true;
  
  if(x < 2 || x%2==0)return false;
  
  i = 3;
  
  while(i*i <=x){
    if(x%i==0)return false;
    i = i + 2;
  }
  return true;
}

int main(){
  int i,n,cnt=0;
  cin >> n;
  for(i = 0;i < n; i++){
    // cout << "i " << i <<endl;
    int prime;
    cin >> prime;
    bool ans = isprime(prime);
    if(ans == 1)cnt++;
  }
   cout << cnt << endl;
  return 0;
}
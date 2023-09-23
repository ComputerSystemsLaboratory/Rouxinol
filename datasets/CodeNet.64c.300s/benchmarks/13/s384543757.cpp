#include<iostream>
using namespace std;
int n,fibonacci,f[44]={0};

int makefibnacci(int n){
  f[0]=1;
  f[1]=1;
  for(int i = 2; i <=n; i++){
    f[i]=f[i-2]+f[i-1];
  }
  return f[n];
}

int main(){
  cin >> n;
  fibonacci = makefibnacci(n);
  cout << fibonacci << endl;
  return 0;
}
#include<iostream>
using namespace std;

int main(){

  int n, m;
  
  cin >> n;
  
  m = 100000;
  for(int i=0; i<n; i++){
    m *= 1.05;
    if(m % 1000 != 0)
      m -= (m % 1000) - 1000;
  }
  
  cout << m << endl;

  return 0;
}
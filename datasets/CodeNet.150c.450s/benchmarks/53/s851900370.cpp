#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  
  int n, m;
  
  cin >> n;
  m = n;
  
  cout << n << ":";
  for(int i = 2;i * i <= m;i++){
    while(!(n % i)){
      cout << " " << i;
      n /= i;
    }
  }
  if(n != 1) cout << " " << n;
  cout << endl;
  
  return 0;
}

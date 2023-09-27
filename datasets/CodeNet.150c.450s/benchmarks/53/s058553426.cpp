#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  cin >> n;
  cout << n << ":";
  for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
      while(n % i == 0){
        n /= i;
        cout << " " << i;
      }
    }
  }
  if(n > 1){
    cout << " " << n;
  }
  cout << endl;
  return 0;
}
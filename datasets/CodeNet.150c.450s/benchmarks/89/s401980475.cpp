#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define M 1e6

int main(){
  vector<bool> hurui(M, true);
  hurui[1] = false;
  for(int i=2; i<=sqrt(M); i++){
    if(hurui[i]){
      for(int j=2*i; j<M; j+=i){
        hurui[j] = false;
      }
    }
  }
  
  int a, d, n;
  while(true){
    cin >> a >> d >> n;
    if(a == 0)
      break;

    for(int i=a; i<M; i+=d){
      if(hurui[i])
        n--;
      if(n == 0){
        cout << i << endl;
        break;
      }
    }
  }
  
  return 0;
}
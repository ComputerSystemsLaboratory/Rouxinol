#include <iostream>
#define rep(i,n) for(long i=0; i<(n); i++)
using namespace std;

int main(){
  long n,k;
  cin >> n >> k;
  long a[n];
  rep(i,n){
    cin >> a[i];
  }
  
  rep(i,n-k){
    if(a[i] < a[i+k]){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }

  return 0;
}

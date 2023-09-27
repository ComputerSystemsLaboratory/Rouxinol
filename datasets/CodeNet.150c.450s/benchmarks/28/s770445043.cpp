#include <algorithm>
#include <iostream>
#define ll long long
using namespace std;

ll N, K, W[100000];

bool ok(ll P){
  ll cnt = 1;
  ll totalweight = 0;
  for(ll i = 0; i < N; i++){
    if(W[i] > P)
      return false;
    if(totalweight + W[i] > P){
      cnt++;
      totalweight = W[i];
    }else{
      totalweight += W[i];
    }
  }
  if(cnt <= K){
    return true;
  }else{
    return false;
  }

}
int main(){
  cin >> N >> K;
  for(ll i = 0; i < N; i++){
    cin >> W[i];
  }
  ll left = 0;
  ll right = 100000000000000;
  while(right - left > 2){
    if(ok((left + right) / 2))
      right = (left + right) / 2 + 1;
    else
      left = (right + left) / 2 + 1;
    
  }

  for(ll i = left; i < right; i++){
    if(ok(i)){
      cout << i << endl;
      return 0;
    }

  }

  
}
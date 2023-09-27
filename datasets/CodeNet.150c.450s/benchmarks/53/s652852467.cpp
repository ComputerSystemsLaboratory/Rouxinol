#include <queue>
#include <iostream>
#include <algorithm>
#define ll long long
#define INF 100000000000000
using namespace std;


int main(){
  ll n;
  cin >> n;
  cout << n << ":";
  vector<ll> ans;
  ll divisor = 2;
  while(1){
    if(divisor * divisor > n){
      ans.push_back(n);
      break;
    }
    if(n % divisor == 0){
      ans.push_back(divisor);
      n /= divisor;
    }else{
      divisor++;
    }
  }

  for(auto i : ans){
    cout << ' ' << i;
  }
  cout << endl;

}
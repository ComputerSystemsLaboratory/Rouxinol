#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
#define ll long long
int main(){
  ll n;
  while(cin >> n && n){
    ll last = 0;
    unordered_set<ll> us;
    for(ll i = 1; i <= n; i++){
      last += i;
      us.insert(last);
    }
    ll cnt = 0;

    for(ll i : us){
      if(us.find(i + n) != us.end()){
	cnt++;
      }
    }
    if(us.find(n) != us.end()){
      cnt++;
    }
    cout << --cnt << endl;
  }
}
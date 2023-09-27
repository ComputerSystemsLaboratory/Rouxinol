#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
int main(){
  ll e;
  while(cin >> e && e){
    ll m = 100000000000;
    for(ll z = 0; z * z * z <= e; z++){
      for(ll y = 0; y * y + z * z * z <= e; y++){
	m = min(m, y + z + e - y * y - z * z * z);
      }
    }
    cout << m << endl;
  }
}
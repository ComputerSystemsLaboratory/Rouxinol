#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int H; cin >> H;
  vector<ll> v(H+1);
  for(int i = 0; i < H; i++){
    cin >> v[i+1];
  }
  for(int i = 1; i <= H; i++){
    cout << "node " << i << ": key = " << v[i] << ", ";
    if(i/2 > 0){
      cout << "parent key = " << v[i/2] << ", ";
    }
    if(2 * i < v.size()){
      cout << "left key = " << v[i*2] << ", ";
    }
    if(2*i+1 < v.size()){
      cout << "right key = " << v[i*2+1] << ", ";
    }
    cout << endl;
  }
  return 0;
}
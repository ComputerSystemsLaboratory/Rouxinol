#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
vector<int> a(500000);

void maxheapify(int i){
  int largest = i;
  if(2 * i <= n){
    if(a[largest] < a[2 * i]) largest = 2 * i;
  }
  if(2 * i + 1 <= n){
    if(a[largest] < a[2 * i + 1]) largest = 2 * i + 1;
  }
  if(largest == i) return;
  int t = a[i];
  a[i] = a[largest];
  a[largest] = t;
  maxheapify(largest);
}

void solve(){
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for(int i = n / 2; i >= 1; i--){
    maxheapify(i);
  }
  for(int i = 1; i <= n; i++){
    cout << " " << a[i];
  }
  cout << endl;
}

int main(){
  solve();
  return 0;
}


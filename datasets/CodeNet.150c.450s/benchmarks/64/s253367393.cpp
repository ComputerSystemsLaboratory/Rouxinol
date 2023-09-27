#include <iostream>
#include <algorithm>
using namespace std;

int A[20], n, q, k;

bool Comb(int sum, int i){
  if(sum == k) return true;
  if(i == n) return false;

  return Comb(sum + A[i], i + 1) + Comb(sum, i + 1);
}

int main(void){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> A[i];
  }

  cin >> q;
  for(int i = 0; i < q; i++){
    cin >> k;
    if(Comb(0, 0)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}
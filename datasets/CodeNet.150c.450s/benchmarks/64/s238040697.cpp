#include <bits/stdc++.h>
using namespace std;
#define REP(asd, fgh) for(int asd = 0; asd < fgh; asd++)
int n, q, m;
int A[20];

bool func(int i, int sum){
  if(sum > m) return false;
  if(sum == m) return true;
  if(i >= n) return false;
  return func(i+1,sum+A[i]) || func(i+1, sum);
}

int main(void){
  cin >> n;
  REP(i, n) cin >> A[i];
  cin >> q;
  REP(i, q){
    cin >> m;
    if(func(0, 0)){
      cout << "yes" << endl;
    }else{
      cout << "no" << endl;
    }
  }
  return 0;
}
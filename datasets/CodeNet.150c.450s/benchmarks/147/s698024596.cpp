#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep1(i, n) for(int i = 1; i < n+1; i++)
#define all(A) A.begin(),A.end()
typedef long long ll;

int main(){
  int n;
  cin >> n;
  vector<int> buc(10001,0);
  rep1(x,100){
    rep1(y,100){
      rep1(z,100){
        int key = x*x + y*y+ z*z;
        key += x*y + y*z + z*x;
        if(key > 10000) continue;
        buc[key] += 1;
      }
    }
  }
  rep1(i,n){
    cout << buc[i] << endl;
  }
}
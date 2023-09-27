#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int INF = 1e9;
const int MOD = 1e9 + 7;

int main(){
  int N;
  cin >> N;
  vector<int> V(N + 1, 0);
  for(int x = 1; x < 105; x++){
    for(int y = 1; y < 105; y++){
      for(int z = 1; z < 105; z++){
        int a = x*x + y*y + z*z + x*y + y*z + z*x;
        if(a <= N)
          V.at(a)++;
      }
    }
  }
  for(int i = 1; i < N+1; i++){
    cout << V.at(i) << endl;
  }
  
}
#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int n;
  while(cin >> n, n){
    vector<int> a(n);
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    int ans = INF;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(i != j){
          ans = min(ans, abs(a[i]-a[j]));
        }
      }
    }
    cout << ans << endl;
  }
}
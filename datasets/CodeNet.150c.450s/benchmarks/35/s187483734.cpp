#include <iostream>
#include <climits>
using namespace std;

int t[5002];

int main(){
  int n;

  while(cin >> n, n){
    for(int i = 0; i < n; i++){
      cin >> t[i];
    }

    int ans = INT_MIN;

    for(int i = 0; i < n; i++){
      int sum = 0;

      for(int j = i; j < n; j++){
        sum += t[j];
        ans = max(ans, sum);
      }
    }

    cout << ans << endl;
  }
}
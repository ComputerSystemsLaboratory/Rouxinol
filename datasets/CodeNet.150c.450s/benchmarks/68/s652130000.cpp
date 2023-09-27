#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int INF = 1<<30;
int main(){
  while(true){
    int n;
    cin >> n;
    if(n == 0) return 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = INF;
    for(int i = 0; i < n-1; i++){
      ans = min(ans, a[i+1] - a[i]);
    }
    cout << ans << endl;
  }
}


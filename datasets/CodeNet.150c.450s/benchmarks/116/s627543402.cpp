#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <numeric>
using namespace std;
int main(){
  int n, k, l;
  int N[100001], ans, sum, tmp;
  while(cin >> n >> k, n && k){
    ans = 0, sum = 0;
    for(int i = 0 ; i < n ; i++){
      cin >> N[i];
    }

    for(l = 0 ; l < k ; l++){
      sum += N[l];
    }
    ans = max(ans, sum);
    tmp = sum;
    for(int i = l ; i < n ; i++){
      tmp = sum;
      sum += N[i];
      sum -= N[i-k];
      tmp = sum;
      ans = max(ans, sum);
    }
    cout << ans << endl;
  }
  return 0;
}
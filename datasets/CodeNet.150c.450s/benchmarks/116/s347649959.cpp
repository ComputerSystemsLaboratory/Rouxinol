#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>

using namespace std;

int main(){
  while(true){
    int a[100000] = {0};
    int n, k;
    cin >> n >> k;
    if(!n)
      break;
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    int ans = 0;
    for(int j = 0; j < k; j++){
      ans += a[j];
    }
    int ab = ans;  
    //cout << "f:" << aa << endl;
    for(int i = k; i < n; i++){
      int aa = ab - a[i - k] + a[i];
      ab = aa;
      ans = aa > ans ? aa : ans;
      //cout << aaa << ":" << aa << " - " << a[i - k] << " + " << a[i] << endl;
    }
    cout << ans << endl;
  }
  return 0;
}
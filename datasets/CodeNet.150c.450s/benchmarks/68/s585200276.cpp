#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(){
  int n;
  while(1){
    cin >> n;
    if(n==0)break;
    vector<int> a(n);
    rep(i,n)cin >> a[i];
    sort(a.begin(),a.end(),greater<int>());
    int mini=10000000;
    rep(i,n-1){
      mini = min(mini,a[i]-a[i+1]);
      if(mini==0)break;
    }
    cout << mini << endl;
  }
  return 0;
}


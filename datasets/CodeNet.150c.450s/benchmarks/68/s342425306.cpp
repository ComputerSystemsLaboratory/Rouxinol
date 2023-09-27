#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(cin >> n && n){
    vector<int> a(n);
    for(int i=0;i<n;++i) cin >> a[i];
    sort(a.begin(),a.end());
    int mini=1000005;
    for(int i=0;i<n-1;++i){
      mini=min(mini,(a[i]<a[i+1])?a[i+1]-a[i]:a[i]-a[i+1]);
    }
    cout << mini <<endl;
  }
  
  return 0;
}


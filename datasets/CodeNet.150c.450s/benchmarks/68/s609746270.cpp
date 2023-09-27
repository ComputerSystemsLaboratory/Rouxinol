#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int a[1000+10];
  while(cin >> n && n!=0){
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int ans[1000+10];
    for(int i=0;i<n-1;i++){
      ans[i]=abs(a[i+1]-a[i]);
    }
    sort(ans,ans+n-1);
    cout << ans[0] << endl;
  }
  return 0;
}


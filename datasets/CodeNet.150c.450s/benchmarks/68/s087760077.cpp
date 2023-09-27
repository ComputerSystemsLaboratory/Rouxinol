#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define all(c) (c).begin(),(c).end()

using namespace std;

int main(void){

  int n;
  while(cin >> n,n){
    vector<int>a(n);
    for(int i=0;i<n;i++)cin >> a[i];
    sort(all(a));
    int ans = 1<<29;
    for(int i=0;i+1<n;i++)
      ans = min(ans,a[i+1]-a[i]);
    cout << ans << endl;
  }
  
  return 0;
}
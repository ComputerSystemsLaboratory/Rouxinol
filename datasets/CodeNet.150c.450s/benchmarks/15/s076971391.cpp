#include <iostream>
#include <set>
using namespace std;

int main(){
  int ans=0, n, q, a;
  set<int> arr;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a;
    arr.insert(a);
  }
  cin >> q;
  for(int i=0; i<q; i++){
    cin >> a;
    if(arr.find(a)!=arr.end())
      ans++;
  }
  cout << ans << endl;

  return 0;
}
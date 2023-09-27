#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  while(1){
    cin >> n;
    if(n==0) break;
    vector<int> v;
    for(int i=0;i<n;++i){
      int tmp;
      cin >> tmp;
      v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=1;i<n-1;i++){
      ans += v[i];
    }
    cout << ans / (n-2) << endl;

  }
  return 0;
}
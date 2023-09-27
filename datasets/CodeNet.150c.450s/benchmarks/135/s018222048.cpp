
#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;
const int MAX = 1500000;
int check(vector<int> h,vector<int> w,int x,int y,int b){
  if(h[y]&&w[x]&&h[y+b]&&w[x+b])return 1;
  return 0;
}
int main(){
  int n,m;
  while(cin >> n >> m,n || m){
    vector<int> h(n+1,0);
    vector<int> w(m+1,0);
    h[0] = 0;w[0] = 0;
    for(int i = 1;i <= n;i++){
      int tmp;
      cin >> tmp;
      h[i] = h[i-1] + tmp;
    }
    for(int i = 1;i <= m;i++){
      int tmp;
      cin >> tmp;
      w[i] = w[i-1] + tmp;
    }
    map<int,int> cnt;
    for(int i = 0;i <= n;i++){
      for(int j = 0;j <= m;j++){
	cnt[h[i]-w[j]]++;
      }
    }
    int ans = 0;
    map<int,int>::iterator it = cnt.begin();
    while(it != cnt.end()){
      ans += (*it).second*((*it).second-1)/2;
      it++;
    }
    cout << ans << endl;
  }
  return 0;
}
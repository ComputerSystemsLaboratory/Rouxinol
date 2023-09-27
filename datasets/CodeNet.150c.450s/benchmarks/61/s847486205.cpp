#include<iostream>
#include<vector>
#include<algorithm>
#define N 10000

using namespace std;

int main(){
  int n, a, b, c, x;

  while(1){
    cin >> n >> a >> b >> c >> x;
    if(!n && !a && !b && !c && !x) break;

    vector<int> data(n,0);
    for(int i=0; i<n; ++i) cin >> data[i];

    int ans=-1;
    for(int i=0; i<=N; ++i){
      if(x==data[0]) data.erase(data.begin());
      if(data.empty()){ ans=i; break; }
      x = (a*x + b)%c;
    }
    cout << ans << endl;
  }
  return 0;
}
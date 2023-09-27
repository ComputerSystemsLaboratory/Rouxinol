#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
bool used[10001];
int main(){
  int n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x,n||a||b||c||x){
    int id = 0;
    int t = 0;
    int ans = -1;
    vector<int> y(n);
    for(int i=0;i<n;++i) cin>>y[i];
    while(true){
      if(y[id]==x) ++id;
      if(id==n){
	ans = t;
	break;
      }
      ++t;
      x = (a*x+b)%c;
      if(t>10000) break;
    }
    cout << ans << endl;
  }
  return 0;
}
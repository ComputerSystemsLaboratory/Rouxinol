#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
#define P pair<int , int>
using namespace std;

int main(){
  int n, a[109][109];
  bool check[109];
  priority_queue<P, vector<P>, greater<P> > Q;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)cin >> a[i][j];
  }
  memset(check, false, sizeof(check));
  int ans = 0;
  Q.push(P(0, 0));
  while(!Q.empty()){
    P p = Q.top();Q.pop();
    if(check[p.second])continue;
    ans += p.first;
    check[p.second] = true;
    for(int i=0;i<n;i++){
      if(!check[i] && a[p.second][i]!=-1){
        Q.push(P(a[p.second][i], i));
      }
    }
  }
  cout << ans << endl;
}

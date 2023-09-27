#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  
  int n,a,b,c,ans[101];
  vector<int> vec[101];
  queue<int> que;
  
  fill(ans,ans+101,105);
  ans[1] = 0;
  
  cin >> n;
  for(int i=0;i<n;i++){ 
    cin >> a >> b;
    for(int j=0;j<b;j++){
      cin >> c;
      vec[a].push_back(c);
    }
  }

  que.push(1);
  
  while(!que.empty()){
    
    int d = que.front();
    que.pop();
    
    for(int i=0;i<vec[d].size();i++){
      int e = vec[d][i];
      if(ans[e] > ans[d]+1){
	ans[e] = ans[d]+1;
	que.push(e);
      }
    }
    
  }
  for(int i=1;i<=n;i++){
    cout << i << ' ' ;
    if(ans[i]==105) cout << -1 << endl;
    else cout << ans[i] << endl;
  }
  return (0);
}
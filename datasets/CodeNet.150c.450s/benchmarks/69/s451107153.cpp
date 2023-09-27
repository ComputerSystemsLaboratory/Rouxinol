#include<cmath>
#include<queue>
#include<iostream>
#include<algorithm>
#define debug(ARGS) cout << #ARGS << ": " << ARGS << endl;
#define ll long long
using namespace std;

bool dfs(queue<int> &v, int l, int r){
  if(v.size() == 0) return true;
  
  int ball = v.front(); v.pop();
    
  if(ball > l) return dfs(v, ball, r);
  if(ball > r) return dfs(v, l, ball);
  
  return false;
}

int main(){
  int n; cin >> n;
  int size = 10;

  for(int c = 0; c < n; c++){
    queue<int> v;
    for(int i = 0; i < size; i++){
      int tmp; cin >> tmp;
      v.push(tmp);
    }

    if(dfs(v, 0, 0)) cout << "YES" << endl;
    else cout << "NO" << endl;  
  }

  return 0;
}
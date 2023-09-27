#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calc(int i, int c, const vector<int>& v, const vector<int>& w, vector<vector<int> >& ans){
  if(i <= -1 || c < 0){
    return 0;
  }else if(c == 0){
    ans[i][c] = 0;
  }else if(ans[i][c] >= 0){
    return ans[i][c];
  }else if(c - w[i] < 0){
    ans[i][c] = calc(i-1, c, v, w, ans);
  }else{
    ans[i][c] = max(
      v[i] + calc(i-1, c - w[i], v, w, ans),
      calc(i-1, c, v, w, ans)
    );
  }
  return ans[i][c];
}

int main(){
  int n,c;
  cin >> n >> c;
  vector<int> v(n),w(n);
  for(int i = 0; i < n; i++)
    cin >> v[i] >> w[i];
  vector<vector<int> > ans(n, vector<int>(c+1, -1));
  cout << calc(n-1, c, v, w, ans) << endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
  int D;
  cin >> D;
  vector<int64_t> down(26);
  for(int i=0; i<26; i++){
    cin >> down[i];
  }
  vector<vector<int64_t>> contest(D,vector<int64_t>(26));
  for(int i=0; i<D; i++){
    for(int j=0; j<26; j++){
      cin >> contest[i][j];
    }
  }
  
  vector<int64_t> last(26,-1);
  
  int64_t ans = 0;
  
  for(int i=0; i<D; i++){
    int c;
    cin >> c;
    c--;
    for(int j=0; j<26; j++){
      if(j == c){
        ans += contest[i][j];
        last[c] = i;
      }
      else{
        ans -= down[j]*(i - last[j]);
      }
    }
    cout << ans << endl;
  }
  
}
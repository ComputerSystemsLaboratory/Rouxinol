#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<climits>
#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<string>
#include<queue>
#include<map>
#include<set>
#include<utility>
#include<queue>

using namespace std;
int R,C;
const int MAX = 10000;
bool senbei[MAX][MAX];
int count(){
  /*cout << "begin" << endl;
  for(int i = 0;i < R;i++){
    for(int j = 0;j < C;j++){
      cout << (int)senbei[i][j];
    }
    cout << endl;
  }
  */

  int ans = 0;

  for(int i = 0;i < C;i++){
    int num = 0;
    for(int j = 0;j < R;j++){
      if(senbei[j][i])num++;
    }
    ans+=max(num,R-num);
  }

  //cout << ans << endl;
  //cout << "end" << endl;
  return ans;
}


int dfs(int r){
  if(r == 0)return count();
  int ans = dfs(r-1);
  for(int i = 0;i < C;++i)senbei[r][i] = !senbei[r][i];
  ans = max(dfs(r-1),ans);
  for(int i = 0;i < C;++i)senbei[r][i] = !senbei[r][i];
  return ans;
}
int main(){
  ios::sync_with_stdio(false);

  while(cin >> R >> C && (R+C)>0){
    for (int r = 0; r < R; ++r){
      for (int c = 0; c < C; ++c){
	bool b;
	cin >> b;senbei[r][c] = b > 0 ? true:false;
      }
    }
    cout << dfs(R) << endl;
  }

  return 0;
}
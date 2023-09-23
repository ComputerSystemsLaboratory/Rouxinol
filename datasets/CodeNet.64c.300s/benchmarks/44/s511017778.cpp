#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstdio>

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
#include<climits>

using namespace std;
const int MAX = 10;
const int INF = INT_MAX/3;
int main(){
  ios::sync_with_stdio(false);
  int cost[MAX][MAX];
  bool existTown[MAX];
  int n;
  while(cin >> n && n != 0){
    fill(*cost,*(cost+MAX),INF);
    fill(existTown,existTown+MAX,false);
    for(int i = 0;i < n;i++){
      int a,b,c;
      cin >> a >> b >> c;
      cost[a][b] = cost[b][a] = c;
      existTown[a] = existTown[b] = true;
    }

    for (int k = 0; k < MAX; ++k){
      for (int j = 0; j < MAX; ++j){
	for (int i = 0; i < MAX; ++i){
	  int sum = cost[i][k] + cost[k][j];
	  if(cost[i][j] > sum){
	    cost[i][j] = cost[j][i] = sum;
	  }
	}
      }
    }
    /*
    for (int i = 0; i < MAX; ++i){
      for (int j = 0; j < MAX; ++j){
	if(cost[i][j] == INF)cout << INF;
	else cout << cost[i][j];
	cout << ' ';
      }
      cout << endl;
    }
    */
    int ans = 100;
    int mini = INF;
    for(int i = 0;i < MAX;i++){
      if(!existTown[i])continue;
      int sum = 0;
      for(int j = 0;j < MAX;j++){
	if(existTown[j] && j != i)sum += cost[i][j];
      }
      if(mini > sum){
	mini = sum;
	ans = i;
      }
    }
    cout << ans  << ' ' << mini << endl;
  }
  
  return 0;
}
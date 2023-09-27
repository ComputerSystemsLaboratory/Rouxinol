#include <utility>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>


using namespace std;

int N;
int D[100+10] = {};
int U = 0;
int K[100+10] = {0};
int V = -1;
int G[100+10][100+10] = {0};
int curtime_st[100+10] = {0};
int curtime_en[100+10] = {0};



//stack dst   queue bfs


int time_ = 1;
int prev1 = 0;
int prev_b = 0;
void dfs(int cur){
  if (cur == -1)return;//??¢??±
  if (curtime_st[cur] == 0)curtime_st[cur] = time_;

  D[cur] = 0;
  time_ += 1;
  //
  //cerr << "visiting " << cur << " " << time_ - 1  << endl;
  
  for(int dst=1;dst<=N;++dst){
    if(D[dst] == -1 && G[cur][dst] == 1){
      dfs(dst);
	}
  }
  if(curtime_en[cur] == 0 || curtime_en[cur] == curtime_st[cur])curtime_en[cur] = time_;
  time_ += 1;
  return;
}







int main(){
  cin >> N;

  for(int i=0;i<101;++i){
    D[i] = -1;//?????????
  }

  for(int i=0;i<N;++i){
    cin >> U;
    cin >> K[U];
    for(int j=0;j<K[U];++j){
      cin >> V;
      G[U][V] = 1;
    }
  }

  for(int j=1;j<=N;++j){
    for(int i=1;i<=N;++i){
      //cout << G[i][j] << " ";
    }
    //cout << endl;
  }

  dfs(1);
  for(int i=2;i<=N;++i){
    if(D[i] == -1)dfs(i);
  }

  for(int i=1;i<=N;++i){
    cout << i << " " << curtime_st[i] << " " << curtime_en[i] << endl; 
  }
}
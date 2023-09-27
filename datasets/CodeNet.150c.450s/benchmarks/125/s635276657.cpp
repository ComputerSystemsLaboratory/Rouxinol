#include<bits/stdc++.h>
using namespace std;

#define White 0 //未訪問
#define Gray 1 //訪問中、または未訪問へのEdgeがある
#define Black 2 //訪問済み

int n;
int Graph[100][100] = {};

int color[100] = {}, d[100], f[100], tt; 
// d[v] = v 訪問時の時間 f[v] = v の隣接リスト調査後の時間 tt = 時間の記録

int nt[100] = {};


//u に隣接する v を番号順に取得
int next(int u){
  for(int v = nt[u] ; v < n ; v++ ){
    nt[u] = v + 1;
    if(Graph[u][v] != 0) return v;
  }
  return -1;
}

void dfs_visit(int r){
  stack<int> S;
  S.push(r); //スタート地点をスタックに積む

  color[r] = Gray; //スタート地点を訪問済みに

  tt++;
  d[r] = tt; //時間を取得

  while(!S.empty()){
    int u = S.top();  //topの値を入れる
    int v = next(u);
    if(v != -1){
      //末訪問なら訪問中にし時間を取得、次の頂点をスタックに積む
      //どちらでもなければ、popでスタックから外し訪問済みにする
      if(color[v] == White){ 
	color[v] = Gray;
	tt++;
	d[v] = tt;
	S.push(v);
      }
    }else{
      S.pop();
      color[u] = Black;
      tt++;
      f[u] = tt;
    }
  }
}
  
void dfs(){
  tt = 0;

  for(int u = 0 ; u < n ; u++){
    if(color[u] == White) dfs_visit(u); //その頂点が未訪問なら
  }

  for(int i = 0 ; i < n ; i++){
    cout << i + 1 << " " << d[i] << " " << f[i] << endl;
  }
}

int main(){
  int u, k, v; //u = 頂点番号 k = 出次数 v = u に隣接する頂点番号

  cin >> n;
     
  for(int i = 0 ; i < n ; i++){
    cin >> u >> k; 
    u--;
    for(int j = 0 ; j < k ; j++){
      cin >> v; 
      v--;
      Graph[u][v] = 1;
    }
  }

  dfs();
     
  return 0;
}
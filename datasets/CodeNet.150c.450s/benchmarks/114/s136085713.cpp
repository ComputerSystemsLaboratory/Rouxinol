#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

#if 0
所用時間: 1h

感想: 思ったより実装すべきコード量が多かった。DisjointSetは今後も使う機会が多そうなので、クラス化してみた。
Pの配列を動的に確保するよう工夫した、良い復習になった。

#endif

int N, buff, M = 0, SUM = 0, A[101][101], cost[5000], dpt[5000], dst[5000];//A[Y][X]
vector<pair<int, int> > edges;

class disjointSet {
private:
    int* P;
    
public:
    disjointSet(){
        P = new int[100000];
    }
    disjointSet(int N){     
        P = new int[N];
    }
    ~disjointSet(){
        delete[] P;
    }

    void init(int N){ //木構造の初期化
        for(int i = 0; i <= N; ++i){
            P[i] = i;
        }
    }

    int root(int a){ //根の参照
        if(P[a] == a) return a;
        return (P[a] = root(P[a]));
    }

    bool is_same_set(int a, int b){ //同じ根か?
        return root(a) == root(b);
    }

    void unite(int a, int b){
        P[root(a)] = root(b); //aのrootをbの子にする
    }
};


void preprocess(){//辺の前処理
  for(int r = 0; r < N; ++r){
    for(int c = r+1; c < N; ++c){
      if (A[r][c] > -1) {
        cost[M] = A[r][c];
        dpt[M] = r;
        dst[M] = c;
        M++;
      }
    }
  }

  //for(int i = 0; i < M; ++i) cout << cost[i] << endl;

  for(int i = 0; i < M; ++i){
    edges.push_back(make_pair(cost[i], i));
  }
  // for(int i = 0; i < M; ++i) cout << edges[i].first << " " << edges[i].second << endl;

  sort(edges.begin(), edges.end());

  // for(int i = 0; i < M; ++i) cout << edges[i].first << " " << edges[i].second << endl;

}

void solve(){
  disjointSet Union(100000);

  int ans = 0;
  preprocess();

  Union.init(N);

  for(int i = 0; i < M; ++i){
    int index = edges[i].second;
    if(Union.is_same_set(dpt[index], dst[index])) continue;
    else {
      Union.unite(dpt[index], dst[index]);
      // cout << "unite " << dpt[index] << " and " << dst[index] << endl;
      ans += cost[index];
    }
  }
  cout << ans << endl;
}

int main(){

cin >> N;

for(int i = 0; i < N; ++i){
  for(int j = 0; j < N; ++j){
    cin >> buff;
    A[i][j] = buff;
    }
  }

  //行列の表示
  // cout << "Matrix:" << endl;
  // for(int row=0; row < N; ++row){
  //   for(int col = 0; col < N; ++col){
  //     cout << A[row][col];
  //   }
  //   cout << endl;
  // }

  solve();
}


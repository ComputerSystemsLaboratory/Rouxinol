
#include <bits/stdc++.h>
using namespace std;

//コピペ
struct union_find{//rank,経路圧縮で高速化
    vector<int> par;//parは添字の親（または自分が根の時自身）を示す。
    vector<int> rank;//rankは木の高さ（根についてのみ実装,0-indexed）
    union_find(int sz){//コンストラクタ,sz個のノードを作成し、自分を親につける
        par.resize(sz);
        rank.assign(sz,0); //rankは最初0
        for(int i = 0;i < sz;++i) par[i]=i;
    }
    int find(int a){//根を探す
        if(par[a]==a) return a; //親が自身を指す時、根である
        else return par[a] = find(par[a]);//根に直接つける
    }
    void unite(int a,int b){//小さい方の木の根に大きい方の根を上書きする
        int root_a,root_b;
        root_a = find(a),root_b = find(b);
        if(rank[root_a]>rank[root_b]){ //rankの高い方の根に低い方の根をつける
            par[root_b] = root_a;
        }else if(rank[root_a]<rank[root_b]){
            par[root_a] = root_b;
        }else{ //rankが同じ時、適当な方につけ、つけられた方のrankを1増やす
            rank[root_a]++;
            par[root_b] = root_a;
        }
    }
    bool same(int a,int b){return find(a)==find(b);}
};

struct command{
  int typ;
  int x;
  int y;
};

int main(){
  int n,q;
  cin >> n >> q;
  vector<command> coms;
  union_find S(n);
  for (int i=0;i<q;i++){
    int aaaa, x, y;
    cin >> aaaa >> x >> y;
    coms.push_back(command{aaaa,x,y});
  }

  for(int i=0;i<q;i++){
    if (coms[i].typ){
      bool ssame =S.same(coms[i].x, coms[i].y);
      cout << ((ssame) ? 1:0) << endl;
    }else  S.unite(coms[i].x, coms[i].y);
  }


}

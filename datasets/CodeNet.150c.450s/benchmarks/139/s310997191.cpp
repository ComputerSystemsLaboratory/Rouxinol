#include<bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  
  vector<int> c[100005]; //どことつながっているかを記録する二次元配列
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    c[a].push_back(b);
    c[b].push_back(a); //じつはこれで二次元配列を作れる
  }
  
  queue<int> q; //これから調べるぞリスト,調べ終わったものは削除する
  vector<int> p(n,-1); //道しるべとなる部屋番号,決まっていない場合は-1
  
  q.push(0); //queueに0を入れる
  while (!q.empty()) { //queueが空になるまでループする
    int v = q.front(); //queueの一番前を取り出しそれをvとする
    q.pop(); //queueの一番前を削除
    for (int u : c[v]) { //vとつながっている部屋uを全探索
      if (p[u] != -1) continue; //道しるべが決まっていたらskip
      p[u] = v; //uの目印をvにする
      q.push(u); //queueにuを入れる(つまりこれから調べるということ)
    }
  }
  
  cout << "Yes" << endl;
  rep(i,n) {
    if (i==0) continue;
    cout << p[i] + 1 << endl;
  }
}
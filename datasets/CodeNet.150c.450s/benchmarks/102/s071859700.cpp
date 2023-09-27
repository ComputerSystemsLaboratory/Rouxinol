#include<bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector< int > data;
  UnionFind(int sz) {
    data.assign(sz, -1);
  }
  int Size(int x) {
    return(-data[Find(x)]);
  }
  int Find(int k) {
    return(data[k] < 0 ? k : data[k] = Find(data[k]));
  }
  void Unite(int a, int b) {
    a = Find(a), b = Find(b);
    if(a == b) return;
    data[a] += data[b];
    data[b] = a;
  }
};

int main() {
  int W, H;
  while(cin >> W >> H, W) {
    string mas[50];
    for(int i = 0; i < H; i++) cin >> mas[i];
    UnionFind uf(W * H);
    for(int i = 0; i < H; i++) {
      for(int j = 1; j < W; j++) {
        if(mas[i][j - 1] != '#' && mas[i][j] != '#') uf.Unite(i * W + j - 1, i * W + j);
      }
    }
    for(int i = 1; i < H; i++) {
      for(int j = 0; j < W; j++) {
        if(mas[i - 1][j] != '#' && mas[i][j] != '#') uf.Unite(i * W - W + j, i * W + j);
      }
    }
    for(int i = 0; i < H; i++) {
      for(int j = 0; j < W; j++) {
        if(mas[i][j] == '@') cout << uf.Size(i * W + j) << endl;
      }
    }
  }
}

  
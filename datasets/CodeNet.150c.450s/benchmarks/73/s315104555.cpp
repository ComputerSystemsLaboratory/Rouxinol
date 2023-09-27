#include <iostream>
#include <vector>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)(n);++i)

typedef long long Data;

struct SegTreeLazy {
  static const int MAX_DEPTH = 18;
  static const int STsize = 1 << MAX_DEPTH;
  Data data[STsize];
  Data lazy[STsize]; int n;
  SegTreeLazy(void) : n(STsize / 2) {
    REP(i,STsize){
      data[i]=lazy[i]=0;
    }
  }
  void update (int pos, Data value) {
    data[pos] += value;
    while (pos < 2*n-1) {
      int l = pos, r = pos^1;
      pos = pos / 2 + n;
      data[pos] = data[l] + data[r];
    }
  }
  void add(int fr, int to, Data val) { upd_sub(fr, to, 2*n-2, 0, n, val); }
  Data sum(int fr, int to) { return sum_sub(fr, to, 2*n-2, 0, n); }
 private:
  void upd_sub(int fr, int to, int node, int la, int ra, Data val) {
    if (ra<=fr || to<=la) return;
    if (fr<=la && ra<=to) {
      lazy[node] += val; return;
    }
    data[node] += (min(to, ra) - max(fr, la)) * val;
    upd_sub(fr, to, (node-n)*2+0, la, (la+ra)/2, val);
    upd_sub(fr, to, (node-n)*2+1, (la+ra)/2, ra, val);
  }
  Data sum_sub(int fr, int to, int node, int la, int ra) {
    if (ra<=fr || to<=la) return Data(0);
    if (fr<=la && ra<=to) return data[node];// + lazy[node]*(ra-la);
    Data res = 0;//lazy[node] * (min(to, ra) - max(fr, la));
    res += sum_sub(fr, to, (node-n)*2+0, la, (la+ra)/2);
    res += sum_sub(fr, to, (node-n)*2+1, (la+ra)/2, ra);
    return res;
  }
};

/*
int main() {
  SegTreeLazy sgt;
  int n,q;
  cin >> n >> q;
  REP(i,n) {
    int x;
    cin >> x;
    sgt.update(i, x);
  }
  REP(i,q) {
    int x, y;
    char c;
    cin >> c >> x >> y;
    if(c == 'C') {
      int v;
      cin >> v;
      sgt.add(x-1, y, v);
    } else {
      cout << sgt.sum(x-1, y) << endl;
    }
  }
  return 0;
}
*/
int main() {
  SegTreeLazy sgt;
  int n,q;
  cin>>n>>q;
  REP(i,q){
    int c,x,y;
    cin>>c>>x>>y;
    if(c==0){
      sgt.update(x,y);
    }else{
      cout<<sgt.sum(x,y+1)<<endl;
    }
  }
  return 0;
}
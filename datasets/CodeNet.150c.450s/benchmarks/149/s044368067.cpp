#include<iostream>
#include<vector>

using namespace std;

class DisjointSet{
  public:
    vector<int> r, p;

    DisjointSet(){}
    DisjointSet(int num){
      r.resize(num, 0);
      p.resize(num, 0);
      for(int i=0 ; i<num ; ++i) makeSet(i);
    }
    ~DisjointSet(){}

    void makeSet(int x){
      p[x] = x;
      r[x] = 0;
    }

    void unite(int x, int y){
      link(findSet(x), findSet(y));
    }

    void link(int x, int y){
      if(r[x] > r[y]){
        p[y] = x;
      }else{
        p[x] = y;
        if(r[x] == r[y]) r[y] = r[y]+1;
      }
    }

    bool same(int x, int y){
      return findSet(x) == findSet(y);
    }

    int findSet(int a){
      if(a != p[a]) p[a] = findSet(p[a]);
      return p[a];
    }
};

int main(){
  int n=0, m=0;
  int x=0, y=0, com=0;

  cin >> n >> m;
  DisjointSet ds = DisjointSet(n);

  for(int i=0 ; i<m ; ++i){
    cin >> com >> x >> y;

    if(com == 0) ds.unite(x, y);
    else if (com == 1){
      if(ds.same(x, y)) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
}


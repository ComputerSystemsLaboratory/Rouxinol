#include<bits/stdc++.h>

using namespace std;

template< class T >
struct DecomposableSearchingStructure
{
  struct DecomposableSearchingProblem
  {
    T structure;
    int length;

    DecomposableSearchingProblem(T t, int l) : structure(t), length(l) {}

    DecomposableSearchingProblem operator+(const DecomposableSearchingProblem &p)
    {
      return (DecomposableSearchingProblem(structure + p.structure, length + p.length));
    }
  };

  vector< DecomposableSearchingProblem > vs;

  DecomposableSearchingStructure() {}

  void add(const T &st)
  {
    vs.emplace_back(DecomposableSearchingProblem(st, 1));
    while(vs.size() > 1 && vs[vs.size() - 2].length == vs[vs.size() - 1].length) {
      DecomposableSearchingProblem renew(vs[vs.size() - 2] + vs[vs.size() - 1]);
      vs.pop_back(), vs.pop_back();
      vs.push_back(renew);
    }
  }

  size_t size()
  {
    return (vs.size());
  }

  T &operator[](int k)
  {
    return (vs[k].structure);
  }
};

struct Vector
{
  int top;
  vector< int > vs;

  Vector() : top(0) {}

  Vector(int v) : top(0)
  {
    vs.push_back(v);
  }

  int size() const
  {
    return ((int) vs.size() - top);
  }
};

Vector operator+(const Vector &a, const Vector &b)
{
  Vector ret;
  int x = 0, y = 0;
  while(x < a.size() || y < b.size()) {
    if(y == b.size() || (x != a.size() && a.vs[x] < b.vs[y])) {
      ret.vs.push_back(a.vs[x++]);
    } else {
      ret.vs.push_back(b.vs[y++]);
    }
  }
  return (ret);
}

int main()
{
  char S[16];
  int K;

  DecomposableSearchingStructure< Vector > dss;
  while(scanf("%s", S), S[2] != 'd') {
    if(S[0] == 'i') {
      scanf("%d", &K);
      dss.add(Vector(K));
    } else {
      pair< int, int > ret = {-1, -1};
      for(int i = 0; i < dss.size(); i++) {
        auto &p = dss[i];
        if(p.size()) ret = max(ret, {p.vs[p.size() - 1], i});
      }
      printf("%d\n", ret.first);
      ++dss[ret.second].top;
    }
  }
}
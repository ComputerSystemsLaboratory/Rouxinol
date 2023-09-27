#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>

template <typename Container, class T>
bool contains(const Container& c, T v)
{
  return std::find(c.begin(), c.end(), v) != c.end();
}

class Graph {
public:
  // key: to
  using Edges = std::vector<int>;

  // n_v: number of verteces
  Graph(int n) : n_v_(n) {
    edges_.resize(n);
  }

  // add edge
  // return true: success, false: failed
  bool add_edge(int from,
                int to)
  {
    edges_[from].push_back(to);
    return true;
  }

  int n_v_;
  std::vector<Edges> edges_;
};

void find_path_dijistra2(const Graph &g,
                         std::vector<int> &ptr)
{
  ptr[0] = 0;

  std::queue<int> ts;
  for(auto e : g.edges_[0]) {
    ts.push(e);
    ptr[e] = 0;
  }

  while(!ts.empty()) {
    auto t = ts.front();
    ts.pop();

    Graph::Edges edges = g.edges_[t];
    for(auto it = edges.begin(); it != edges.end(); it++) {
      if(ptr[*it] < 0) {
        // std::cout << "edge: " << t << " -> "<< *it << std::endl;
        ptr[*it] = t;
        ts.push(*it);
     }
    }
  }
}

void find_path_dijistra(const Graph &g,
                        const std::set<int> &ts,
                        std::vector<bool> &seen,
                        std::vector<int> &ptr)
{
  /*
  std::cout << "find_path_dijistra handle: " << std::endl;
  std::for_each(ts.begin(), ts.end(),
                [](auto x) { std::cout << x << ","; });
  std::cout << std::endl;
  */
  std::set<int> nexts;
  for(auto _t=ts.begin(); _t != ts.end(); _t++) {
    auto t = *_t;
    if(seen[t]) continue;

    Graph::Edges edges = g.edges_[t];
    seen[t] = true;
    for(auto it = edges.begin(); it != edges.end(); it++) {
      if(ptr[*it] < 0) {
        ptr[*it] = t;
      }
      if(!seen[*it] && !contains(ts, *it)) {
        nexts.insert(*it);
      }
    }
  }

  if(!nexts.empty()) {
    find_path_dijistra(g, nexts, seen, ptr);
  }
}

int main()
{
  int N, M;
  std::cin >> N >> M;
  Graph g(N);
  // std::cout << "N = " << N << "M =" << M << std::endl;;

  for(int i=0; i<M; i++) {
    int f, t;
    std::cin >> f >> t;
    f--;
    t--;
    // std::cout << "f =" << f << " t=" << t << std::endl;
    g.add_edge(f, t);
    g.add_edge(t, f);
  }

  std::vector<int> ptr(N);
  std::for_each(ptr.begin(), ptr.end(),
                [](auto &x) -> void { x = -1; });

  // std::vector<bool> seen(N);
  // find_path_dijistra(g, {0}, seen, ptr);
  find_path_dijistra2(g, ptr);

  bool has_no_reachable = std::any_of(
      ptr.begin(), ptr.end(),
      [](auto x)->bool { return x < 0; });

  if(has_no_reachable) {
    std::cout << "No" << std::endl;
    return 0;
  }

  std::cout << "Yes" << std::endl;
  for(int i=1; i<N; i++) {
    std::cout << ptr[i] + 1 << std::endl;
  }
  return 0;
}


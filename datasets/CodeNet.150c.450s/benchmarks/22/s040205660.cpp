#include <stdint.h>

#include <limits>
#include <vector>

using namespace std;

template <typename T>
struct Edge {
  int64_t from;
  int64_t to;
  T cost;
  Edge(int64_t from_, int64_t to_, T cost_)
      : from(from_), to(to_), cost(cost_) {}

  T From(void) const { return from; }
  T To(void) const { return to; }
  T Cost(void) const { return cost; }
};

template <typename T>
using Edges = vector<Edge<T>>;

template <typename T>
bool BellmanFord(const Edges<T>& es, const int64_t V, const int64_t s,
                 vector<T>* dst, const T kInf = numeric_limits<T>::max()) {
  dst->resize(size_t(V));
  fill(dst->begin(), dst->end(), kInf);

  (*dst)[s] = 0;

  const int64_t E = int64_t(es.size());

  for (int64_t i = 0; i < V; ++i) {
    bool update = false;
    for (int64_t j = 0; j < E; ++j) {
      auto& e = es[j];
      if ((*dst)[e.From()] < kInf &&
          (*dst)[e.To()] > (*dst)[e.From()] + e.Cost()) {
        (*dst)[e.To()] = (*dst)[e.From()] + e.Cost();
        update         = true;
      }
    }
    if (!update) break;
    if (update && i == V - 1) {
      return false;
    }
  }
  return true;
}

#include <iostream>

#ifdef USE_STACK_TRACE_LOGGER
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"
#include <glog/logging.h>
#pragma clang diagnostic pop
#endif  //__clang__
#endif  // USE_STACK_TRACE_LOGGER

signed main(int argc, char* argv[]) {
  (void)argc;
#ifdef USE_STACK_TRACE_LOGGER
  google::InitGoogleLogging(argv[0]);
  google::InstallFailureSignalHandler();
#else
  (void)argv;
#endif  // USE_STACK_TRACE_LOGGER
  int64_t V, E, r;
  cin >> V >> E >> r;
  Edges<int64_t> es;
  for (size_t i = 0; i < size_t(E); ++i) {
    int64_t s, t, d;
    cin >> s >> t >> d;

    es.emplace_back(s, t, d);
  }
  vector<int64_t> ds;
  if (BellmanFord(es, V, r, &ds)) {
    for (auto d : ds) {
      if (d < numeric_limits<int64_t>::max())
        cout << d << endl;
      else
        cout << "INF" << endl;
    }
  } else {
    cout << "NEGATIVE CYCLE" << endl;
  }
  return EXIT_SUCCESS;
}

#include <cstdio>
#include <vector>

const size_t V_MAX = 100000;

std::vector<std::pair<size_t, int>> edges[V_MAX];
int ds[V_MAX];
size_t paeh[V_MAX];
std::vector<size_t> heap;

void bubble_up(size_t i) {
  while (i) {
    auto j = (i - 1) / 2;
    if (ds[heap[j]] <= ds[heap[i]])
      break;
    std::swap(paeh[heap[i]], paeh[heap[j]]);
    std::swap(heap[i], heap[j]);
    i = j;
  }
}

void bubble_down(size_t i) {
  for (;;) {
    auto j = 2 * i + 1, k = 2 * i + 2;
    if (k < heap.size() && ds[heap[k]] < ds[heap[i]]) {
      if (ds[heap[j]] < ds[heap[k]]) {
        std::swap(paeh[heap[i]], paeh[heap[j]]);
        std::swap(heap[i], heap[j]);
        i = j;
      } else {
        std::swap(paeh[heap[i]], paeh[heap[k]]);
        std::swap(heap[i], heap[k]);
        i = k;
      }
    } else if (j < heap.size() && ds[heap[j]] < ds[heap[i]]) {
      std::swap(paeh[heap[i]], paeh[heap[j]]);
      std::swap(heap[i], heap[j]);
      i = j;
    } else
      break;
  }
}

int main() {
  size_t V, E, r;
  scanf("%zd%zd%zd", &V, &E, &r);
  for (size_t i = 0; i < E; i++) {
    size_t s, t;
    int d;
    scanf("%zd%zd%d", &s, &t, &d);
    edges[s].push_back(std::make_pair(t, d));
  }
  std::fill(ds, ds + V, -1);
  ds[r] = 0;
  heap.push_back(r);
  while (heap.size()) {
    size_t s = heap.front();
    if (heap.size() == 1)
      heap.pop_back();
    else {
      paeh[heap.front() = heap.back()] = 0;
      heap.pop_back();
      bubble_down(0);
    }
    for (auto&& p : edges[s]) {
      auto t = p.first;
      auto d = ds[s] + p.second;
      if (ds[t] < 0) {
        ds[t] = d;
        heap.push_back(t);
        paeh[t] = heap.size()-1;
        bubble_up(heap.size()-1);
      } else if (ds[t] > d) {
        ds[t] = d;
        bubble_up(paeh[t]);
      }
    }
  }
  for (size_t s = 0; s < V; s++)
    if (ds[s] < 0)
      puts("INF");
    else
      printf("%d\n", ds[s]);
  return 0;
}
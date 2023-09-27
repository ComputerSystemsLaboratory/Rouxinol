#include <bits/stdc++.h>

int N, M;
const int MAX_N = 200005, MAX_M = 200005;
std::vector<int> adj[MAX_N];
int posts[MAX_N];
bool seen[MAX_N];

int main() {
  scanf("%d %d", &N, &M);
  for (int i = 0; i < M; ++i) {
    int a, b;
    scanf("%d %d", &a, &b);
    a--; b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  std::deque<std::pair<int, int>> q;
  q.push_back({0, -1});
  int count = 0;
  while (!q.empty()) {
    auto next = q.front();
    q.pop_front();
    if (seen[next.first]) continue;
    count++;
    seen[next.first] = true;
    if (next.second >= 0) {
      posts[next.first] = next.second;
    }
    for (int nn : adj[next.first]) {
      q.push_back({nn, next.first});
    }
  }
  if (count == N) {
    printf("Yes\n");
    for (int i = 1; i < N; ++i)
      printf("%d\n", posts[i] + 1);
  } else {
    printf("No\n");
  }
}

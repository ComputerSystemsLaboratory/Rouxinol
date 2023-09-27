#include <iostream>
#include <string>
#include <map>

typedef long long ll;
int N, Q;
ll A[100005];

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::cin >> N;
  ll sum = 0;
  std::map<ll, ll> cnt;
  for (int i = 0; i < N; ++i) {
    std::cin >> A[i];
    sum += A[i];
    cnt[A[i]]++;
  }

  std::cin >> Q;
  while (Q--) {
    ll b, c;  std::cin >> b >> c;
    ll d = c - b;
    sum += d * cnt[b];
    std::cout << sum << "\n";
    cnt[c] += cnt[b];
    cnt[b] = 0;
  }

  return 0;
}

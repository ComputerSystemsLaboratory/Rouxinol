#include <iostream>
#include <map>

int main()
{
  int N;
  std::cin >> N;
  std::map<uint64_t, uint64_t> vals;
  uint64_t sum = 0;
  for(int i=0; i<N; i++) {
    uint64_t a;
    std::cin >> a;
    vals[a]++;
    sum += a;
  }
  int Q;
  std::cin >> Q;

  for(int i=0; i<Q; i++) {
    uint64_t b, c;
    std::cin >> b >> c;
    auto it = vals.find(b);

    if(it != vals.end()) {
      uint64_t cnt = it->second;
      vals.erase(it);
      vals[c] += cnt;
      sum -= b * cnt;
      sum += c * cnt;
    }

    std::cout << sum << std::endl;
  }

  return 0;
}

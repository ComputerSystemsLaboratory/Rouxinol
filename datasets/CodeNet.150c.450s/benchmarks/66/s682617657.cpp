#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

enum State {
  Opened,
  Closed
};

int main(int argc, char const* argv[])
{
  int N;
  std::cin >> N;
  std::vector<std::string> members(N);
  for (int i = 0; i < N; ++i)
    std::cin >> members[i];
  int M;
  std::cin >> M;
  State st = Closed;
  for (int i = 0; i < M; ++i) {
    std::string s;
    std::cin >> s;
    if (std::find(members.begin(), members.end(), s) == members.end()) {
      std::cout << "Unknown " << s << std::endl;
    } else {
      if (st == Closed) {
        std::cout << "Opened by " << s << std::endl;
        st = Opened;
      } else {
        std::cout << "Closed by " << s << std::endl;
        st = Closed;
      }
    }
  }
  return 0;
}
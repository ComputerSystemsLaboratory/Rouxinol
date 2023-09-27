#include <iostream>
#include <string>

enum EResult { ETaro, EHanako, EDraw };

EResult decideWinner(const std::string& taro, const std::string& hanako) {
  for (int i = 0; i < taro.size(); i++) {
    const char &tc = taro[i], &hc = hanako[i];
    if (tc > hc) return ETaro;
    if (tc < hc) return EHanako;
    if (tc == hc) {
      int nextIndex = i + 1;
      if (nextIndex == taro.size() || nextIndex == hanako.size()) {
        if (taro.size() > hanako.size()) return ETaro;
        if (taro.size() < hanako.size()) return EHanako;
        break;
      }
    }
  }
  return EDraw;
}

int main() {
  int n, tScore = 0, hScore = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::string taro, hanako;
    std::cin >> taro >> hanako;

    switch (decideWinner(taro, hanako)) {
      case ETaro:
        tScore += 3;
        break;
      case EHanako:
        hScore += 3;
        break;
      case EDraw:
        tScore += 1;
        hScore += 1;
        break;
    }
  }

  std::cout << tScore << ' ' << hScore << std::endl;
  return 0;
}


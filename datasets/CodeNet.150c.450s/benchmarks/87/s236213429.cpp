#include <cstdio>
#include <cstdint>
#include <cstddef>
#include <algorithm>
#include <vector>

int disappear(std::vector<std::vector<int> > &p) {
  size_t W=p.size(), H=p[0].size();
  std::vector<std::vector<int> > to_erase(W, std::vector<int>(H));
  int diff=0;

  for (size_t i=0; i<H; ++i) {
    int l=2, r=3;
    if (p[2][i] == 0) continue;

    while (l > 0) {
      if (p[l][i] == p[l-1][i]) {
	--l;
      } else {
	break;
      }
    }

    while (r < 5) {
      if (p[r][i] == p[r-1][i]) {
	++r;
      } else {
	break;
      }
    }

    if (r-l < 3)
      continue;

    diff += (r-l)*p[2][i];
    for (int j=l; j<r; ++j)
      to_erase[j][i] = 1;
  }

  for (size_t j=0; j<W; ++j) {
    std::vector<int> tmp(H);
    size_t k=0;
    for (size_t i=H; i--;) {
      if (to_erase[j][i]) continue;
      if (p[j][i] == 0) break;

      tmp[k++] = p[j][i];
    }

    std::reverse(tmp.begin(), tmp.end());
    p[j] = std::move(tmp);
  }

  return diff;
}

int solve_testcase() {
  size_t H, W=5;
  scanf("%zu", &H);
  if (H == 0)
    return 1;

  int score=0;
  std::vector<std::vector<int> > board(W, std::vector<int>(H));  // irreg
  for (size_t i=0; i<H; ++i) {
    for (size_t j=0; j<W; ++j) {
      scanf("%d", &board[j][i]);
    }
  }

  int diff;
  while ((diff = disappear(board))) {
    score += diff;
  }

  printf("%d\n", score);
  return 0;
}

int main() {
  while (!solve_testcase()) {}

  return 0;
}
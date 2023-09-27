#include <iostream>
using namespace std;

class rect {
public:
  int h,w;
  // 対角線の2乗
  int diagonal() {
    return h * h + w * w;
  }
};

// x > y なら1を返す
int rect_cmp(rect x, rect y) {
  if(x.diagonal() > y.diagonal()) return 1;
  else if(x.diagonal() == y.diagonal()) {
    if(x.h > y.h) return 1;
    else return 0;
  }
  else return 0;
}

int main() {
  rect r;
  while(cin >> r.h >> r.w && r.h && r.w) {
    rect ans, cmp;
    ans.w = 150; ans.h = 150;
    for(cmp.h = 1; cmp.h < 150; ++cmp.h) {
      for(cmp.w = cmp.h + 1; cmp.w < 150; ++cmp.w) {
        if(rect_cmp(cmp, r) && rect_cmp(ans, cmp)) ans = cmp;
      }
    }
    cout << ans.h << ' ' << ans.w << endl;
  }
  return 0;
}


#include <set>
#include <cstdio>
inline int getInt(){ int s; scanf("%d", &s); return s; }

using namespace std;

int main(){
  while(true){
    const int h = getInt();
    const int w = getInt();
    const int s = h * h + w * w;

    if(s == 0) break;

    pair<int, pair<int, int> > base = make_pair(s, make_pair(h, w));
    pair<int, pair<int, int> > ans = make_pair(300 * 300 + 300 * 300, make_pair(300, 300));

    for(int hh = 1; hh * hh <= s; hh++){
      for(int ww = hh + 1; ; ww++){
        const int ss = hh * hh + ww * ww;
        pair<int, pair<int, int> > tmp = make_pair(ss, make_pair(hh, ww));
        if(tmp > base){ ans = min(ans, tmp); break; }
      }
    }

    printf("%d %d\n", ans.second.first, ans.second.second);
  }

  return 0;
}
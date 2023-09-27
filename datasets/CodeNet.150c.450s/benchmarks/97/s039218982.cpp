#include <cstdio>
#include <vector>
#include <algorithm>

class Point
{
public:
  int x, y;
  Point(int _x, int _y)
    :x(_x), y(_y) {}
};

const int INF = 1 << 30;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

int main()
{
  int N;
  while (~scanf("%d", &N)) {
    if (N == 0)
      break;

    std::vector<Point> fig(1, Point(0, 0));
    for (int i = 0; i < N-1; ++i) {
      int n, d;
      scanf("%d %d", &n, &d);
      fig.push_back(Point(fig[n].x+dx[d], fig[n].y+dy[d]));
    }

    Point min(INF, INF), max(-INF, -INF);
    for (unsigned int i = 0; i < fig.size(); ++i) {
      min.x = std::min(min.x, fig[i].x);
      min.y = std::min(min.y, fig[i].y);
      max.x = std::max(max.x, fig[i].x);
      max.y = std::max(max.y, fig[i].y);
    }

    printf("%d %d\n", max.x-min.x+1, max.y-min.y+1);
  }

  return 0;
}
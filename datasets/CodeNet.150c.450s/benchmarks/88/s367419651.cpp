#include<bits/stdc++.h>

using namespace std;

int main()
{
  int H, W;
  vector< tuple< int, int, int > > data;
  for(int i = 1; i <= 150; i++) {
    for(int j = i + 1; j <= 150; j++) {
      data.emplace_back(i * i + j * j, i, j);
    }
  }
  sort(begin(data), end(data));

  while(scanf("%d %d", &H, &W), H) {
    auto p = upper_bound(begin(data), end(data), make_tuple(H * H + W * W, H, W));
    printf("%d %d\n", get< 1 >(*p), get< 2 >(*p));
  }
}
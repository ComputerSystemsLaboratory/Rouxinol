#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  while (cin >> N && N != 0) {
    vector<pair<int,int> > squares(N);
    squares[0] = make_pair(0, 0);
    int max_height = 0, min_height = 0, max_width = 0, min_width = 0;
    for (int i = 1; i < N; i++) {
      int n, d;
      cin >> n >> d;
      squares[i] = squares[n];
      switch (d) {
        case 0:
          squares[i].second--;
          min_width = min(min_width, squares[i].second);
          break;
        case 1:
          squares[i].first--;
          min_height = min(min_height, squares[i].first);
          break;
        case 2:
          squares[i].second++;
          max_width = max(max_width, squares[i].second);
          break;
        case 3:
          squares[i].first++;
          max_height = max(max_height, squares[i].first);
          break;
      }
    }
    cout << (max_width - min_width + 1) << ' ' << (max_height - min_height + 1) << endl;
  }
  return 0;
}
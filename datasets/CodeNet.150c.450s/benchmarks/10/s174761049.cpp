#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct data_t {
  int b;
  int f;
  int r;
  int v;

  bool operator<(const data_t& right) const {
    return b == right.b ? f == right.f ? r < right.r : f < right.f : b < right.b;
  }
};

int main(void) {
  int n;
  int count[4][3][10] = {};
  int b,f,r,v;
  cin >> n;
  vector<data_t> data_array(n);
  for(int i = 0; i < n; i++) {
    cin >> b >> f >> r >> v;
    data_array[i].b = b;
    data_array[i].f = f;
    data_array[i].r = r;
    data_array[i].v = v;
  }
  sort(data_array.begin(), data_array.end());
  int t = 0;
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 10; k++) {
        while(i + 1 == data_array[t].b && j + 1 == data_array[t].f && k + 1 == data_array[t].r) {
          count[i][j][k] += data_array[t++].v;
        }
      }
    }
  }
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 10; k++) {
        cout << ' ' << count[i][j][k];
      }
      cout << endl;
    }
    if(i < 3)
      cout << "####################" << endl;
  }
  return 0;
}
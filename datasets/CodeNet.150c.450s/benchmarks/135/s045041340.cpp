#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector<T> >;

template<class T>
int SearchVectorForN(T x, vector<T> &v) {
  return distance(lower_bound(v.begin(), v.end(), x), upper_bound(v.begin(), v.end(), x));
}

int main() {
  vi results;
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0) { break; }
    vi h = {0};
    for (int in = 1 ; in <= n ; in++) {
      int tmp;
      cin >> tmp;
      h.push_back(tmp + h[in-1]);
    }
    vi w = {0};
    for (int im = 1 ; im <= m ; im++) {
      int tmp;
      cin >> tmp;
      w.push_back(tmp + w[im-1]);
    }
    vi d_h;
    for (int in0 = 0 ; in0 < n ; in0++) {
      for (int in1 = in0 + 1 ; in1 <= n ; in1++) {
        d_h.push_back(h[in1] - h[in0]);
      }
    }
    sort(d_h.begin(), d_h.end());
    vi d_w;
    for (int im0 = 0 ; im0 < m ; im0++) {
      for (int im1 = im0 + 1 ; im1 <= m ; im1++) {
        d_w.push_back(w[im1] - w[im0]);
      }
    }
    sort(d_w.begin(), d_w.end());
    int result = 0;
    for (int itr = 0 ; itr < d_h.size() ; ) {
      result += SearchVectorForN(d_h[itr], d_h) * SearchVectorForN(d_h[itr], d_w);
      itr = distance(d_h.begin(), upper_bound(d_h.begin(), d_h.end(), d_h[itr]));
    }
    results.push_back(result);
  }

  for (int i = 0 ; i < results.size() ; i++) {
    printf("%d\n", results[i]);
  }

  return 0;
}
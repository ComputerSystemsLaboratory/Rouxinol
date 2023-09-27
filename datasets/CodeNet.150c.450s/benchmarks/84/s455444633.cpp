#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < int(n); i++)
#define SENTINEL INT_MAX
using namespace std;

long long counter = 0;
template <typename Iter>
void merge(Iter leftBegin, Iter leftEnd, Iter rightBegin, Iter rightEnd,
           Iter target) {
  while (leftBegin != leftEnd && rightBegin != rightEnd) {
    if (*leftBegin <= *rightBegin) {
      *target++ = *leftBegin++;
    } else {
      *target++ = *rightBegin++;
      counter+= leftEnd - leftBegin;
    }
  }
  while (leftBegin != leftEnd) {
    *target++ = *leftBegin++;
  }
  while (rightBegin != rightEnd) {
    *target++ = *rightBegin++;
  }
}

template <typename Iter> void merge_sort(Iter begin, Iter end) {
  auto dest = end - begin;
  if (dest < 2) {
    return;
  }
  auto middle = begin + dest / 2;
  vector<typename iterator_traits<Iter>::value_type> left(begin, middle);
  vector<typename iterator_traits<Iter>::value_type> right(middle, end);
  merge_sort(left.begin(), left.end());
  merge_sort(right.begin(), right.end());
  merge(left.begin(), left.end(), right.begin(), right.end(), begin);
}

int main() {
  int n;
  cin >> n;
  vector<int> S;
  int temp;
  rep(_, n) {
    cin >> temp;
    S.push_back(temp);
  }
  merge_sort(S.begin(), S.end());
  cout << counter << endl;
}


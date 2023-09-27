#include <stdio.h>
#include <utility>
#include <vector>
#include <stack>
#include <string.h>

int main(void) {
  int i, j, k, n;
  long long ans = 0, now = 0, nm = -1;
  std::vector<long long> v;
  char s[60000], c = 92;
  scanf("%s", s);
  n = strlen(s);
  int d[n + 1], max;
  d[0] = 0;
  for(i = 0; i < n; ++i) {
    d[i + 1] = d[i];
    if(s[i] == c) d[i + 1]--;
    else if(s[i] == '/') d[i + 1]++;
  }
  std::pair<int, int> p[n + 1];
  p[n].first = d[n], p[n].second = n;
  for(i = n - 1; i >= 0; --i) {
    p[i] = p[i + 1];
    if(p[i].first < d[i]) p[i].first = d[i], p[i].second = i;
  }
  for(i = 0; p[i].second != i; ++i) {
    //printf("%lld %lld %lld\n", i, nm, now);
    if(nm > d[i]) {
      now += 2 * nm - d[i] - d[i + 1];
    } else if(nm < d[i] && d[i + 1] < d[i]) {
      nm = d[i];
      now += 2 * nm - d[i] - d[i + 1];
    } else if(nm == d[i] && d[i + 1] < d[i]) {
      if(now) {
        v.push_back((long long)now / 2);
        ans += now / 2;
        now = 0;
      }
      now += 2 * nm - d[i] - d[i + 1];
    } else {
      if(now) {
        v.push_back((long long)now / 2);
        ans += now / 2;
        now = 0;
      }
      nm = d[i];
    }
  }
  //printf("%lld\n", now);
  if(now) v.push_back(now / 2), ans += now / 2, now = 0;
  std::stack<long long> st;
  nm = d[n] - 1;
  j = i;
  for(i = n; i > j; --i) {
    //printf("%d %d %lld\n", i, nm, now);
    if(nm > d[i]) {
      now += 2 * nm - d[i] - d[i - 1];
    } else if(nm < d[i] && d[i - 1] < d[i]) {
      nm = d[i];
      now += 2 * nm - d[i] - d[i - 1];
    } else if(nm == d[i] && d[i - 1] < d[i]) {
      if(now) {
        st.push((long long)now / 2);
        ans += now / 2;
        now = 0;
      }
      now += 2 * nm - d[i] - d[i - 1];
    } else {
      if(now) {
        st.push((long long)now / 2);
        ans += now / 2;
        now = 0;
      }
      nm = d[i];
    }
  }
  if(now) st.push(now / 2), ans += now / 2, now = 0;
  while(!st.empty()) {
    long long tmp = st.top();
    st.pop();
    v.push_back(tmp);
  }
  printf("%lld\n%d", ans, (v.end() - v.begin()));
  std::vector<long long>::iterator it;
  for(it = v.begin(); it != v.end(); ++it) printf(" %lld", *it);
  printf("\n");
  return 0;
}

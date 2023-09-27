#include <cstdio>
#include <stack>
using namespace std;


int main() {
  int total_area = 0;

  stack<int> s1;
  stack<pair<int, int> > s2;

  char c;
  int i = 0;
  int ip, area;
  for (scanf("%c", &c); c != '\n'; scanf("%c", &c), ++i) {
    switch(c) {
      case '\\':
        s1.push(i);
        break;
      case '_':
        break;
      case '/':
        if (s1.empty()) break;
        ip = s1.top();
        s1.pop();
        area = i - ip;
        total_area += area;
        while (s2.empty() == false && s2.top().first > ip) {
          area += s2.top().second;
          s2.pop();
        }
        s2.push(make_pair(ip, area));
        break;
    }
  }

  int s = s2.size();
  int a[s];
  for (int i = s - 1; i >= 0; --i) {
    a[i] = s2.top().second;
    s2.pop();
  }

  printf("%d\n", total_area);
  printf("%d", s);
  for (int i = 0; i < s; ++i)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}
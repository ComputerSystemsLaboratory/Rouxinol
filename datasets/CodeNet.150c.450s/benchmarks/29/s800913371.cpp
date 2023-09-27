#include <cstdio>
#include <list>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
  int n, i, a;
  char s[20];
  list<int> v;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s", s);
    if (s[0] == 'i') {
      scanf("%d", &a);
      v.push_front(a);
    }
    else if (s[6] == 'F')
      v.pop_front();
    else if (s[6] == 'L')
      v.pop_back();
    else {
      scanf("%d", &a);
      for (list<int>::iterator it = v.begin(); it != v.end(); it++) {
	if (*it == a) {
	  v.erase(it);
	  break;
	}
      }
    }
  }
  i = 0;
  for (list<int>::iterator it = v.begin(); it != v.end(); it++) {
    if (i++)
        printf(" ");
    printf("%d", *it);
  }
  putchar('\n');
}


#include <stdio.h>
#include <string.h>
#include <list>
#define rep(i, n) for(int i = 0; i < n; ++i)
using namespace std;
 
int main(void) {
  int n;
  list<int> ls;
  list<int>::iterator it;
  scanf("%d", &n);
  rep(i, n) {
    char s[20];
    scanf("%s", s);
    if(strlen(s) == 6) {
      int x;
      scanf("%d", &x);
      if(s[0] == 'i') {
        ls.push_front(x);
      } else {
        for(it = ls.begin(); it != ls.end(); ++it) {
          if(*it == x) {
            ls.erase(it);
            break;
          }
        }
      }
    } else {
       if(s[6] == 'F') ls.pop_front();
       else ls.pop_back();
    }
  }
  list<int>::iterator itt = ls.end();
  itt--;
  for(it = ls.begin(); it != itt; ++it) {
    printf("%d ", *it);
  }
  printf("%d\n", *it);
  return 0;
}

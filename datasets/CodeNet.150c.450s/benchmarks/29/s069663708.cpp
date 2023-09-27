#include <iostream>
#include <cstdio>
#include <cstring>
#include <list>
using namespace std;

int main() {
  int n;
  scanf("%d",&n);
  list<int> l;
  char com[20];
  for (int i=0; i<n; i++) {
    scanf("%s",com);
    int x;
    if (!strcmp(com,"insert")) {
      scanf("%d",&x);
      l.push_front(x);
    } else if (!strcmp(com,"delete")) {
      scanf("%d",&x);
      for (list<int>::iterator it=l.begin(); it!=l.end(); it++) {
        if (*it==x) {
          l.erase(it);
          break;
        }
      }
    } else if (!strcmp(com,"deleteFirst")) {
      l.pop_front();
    } else if (!strcmp(com,"deleteLast")) {
      l.pop_back();
    }
  }
  for (list<int>::iterator it=l.begin(); it!=l.end(); it++) {
    cout<<(it!=l.begin()?" ":"")<<*it<<flush;
  }
  cout<<endl;
  return 0;
}


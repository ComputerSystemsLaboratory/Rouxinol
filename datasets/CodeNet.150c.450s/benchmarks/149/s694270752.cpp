//HOME- DSL-DSL_1-A

#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

struct List {
  int num;
  int type;
};

int main(void) {
  int n, q, com, x, y, i, j;

  cin >> n >> q;

  List l[n];

  for(i = 0; i < n; i++) {
    l[i].num = i;
    l[i].type = i;
  }

  for(i = 0; i < q; i++) {
    cin >> com >> x >> y;

    if(com)
      if(l[x].type == l[y].type)
	printf("1\n");
      else
	printf("0\n");
    else {
      int s, t;
      s = min(l[x].type, l[y].type);
      t = max(l[x].type, l[y].type);
      for(j = 0; j < n; j++)
	if(l[j].type == t)
	  l[j].type = s;
    }
  }

  return 0;
}
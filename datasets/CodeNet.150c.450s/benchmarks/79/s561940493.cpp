#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

list <int> hsf(list <int> li, int c, int p) {
  list <int> :: iterator i1, i2;
  list <int> :: iterator ii;

  if (p == 1) return li;

  i1 = i2 = li.begin();

  advance(i1, p-1);
  advance(i2, c + (p-1));

  li.splice(li.begin(), li, i1, i2);

  return li;

}


int main(void) {

  for (;;) {
    list <int> c1, c2;
    vector <int> c, p;
    int i, j;
    int n, r;

    cin >> n;
    cin >> r;
    if (n == 0 || r == 0) {
      break;
    }
    
    for (i = 0; i < r; i++) {
      int x, y;
      cin >> x;
      cin >> y;
      c.push_back(y);
      p.push_back(x);
    }

    for (j = 0; j < n; j++) {
      c1.push_front(j+1);
    }
  
    for (i = 0; i < r; i++) {
      c2 = hsf(c1, c[i], p[i]);
      c1 = c2;
    }

    list <int> :: iterator ii;

    ii = c1.begin();
    cout << *ii;
    cout << endl;
  }

  
  return 0;

}
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct S {
  int x;
  int y;
};

struct L {
  int st;
  int w;
};

int main() {
  stack<S> ls;
  stack<L> ll;

  char c;
  int px = 0;
  int py = 0;
  while(cin >> c) {
    if(c == '\\') {
      S _s;
      _s.x = px;
      _s.y = py;
      ls.push(_s);
      py--;
    }
    else if(c == '/') {
      py++;
      if(!ls.empty()) {
        if(ls.top().y == py) {
          L _l;
          _l.w = 0;
          while(!ll.empty()) {
            if(ll.top().st > ls.top().x) {
              _l.w += ll.top().w;
              ll.pop();
            }
            else {
              break;
            }
          }
          _l.st = ls.top().x;
          _l.w += px - ls.top().x;
          ll.push(_l);
          ls.pop();
        }
      }
    }
    px++;
  }

  // output
  vector<int> vec;
  int A = 0;
  int k = ll.size();
  while(!ll.empty()) {
    vec.push_back(ll.top().w);
    A += ll.top().w;
    ll.pop();
  }
  cout << A << endl;
  if(k == 0) {
    cout << k << endl;
  }
  else {
    cout << k << " ";
    for(int i=k-1;i>=0;i--) {
      cout << vec[i] << (i == 0 ? "" : " ");
    }
    cout << endl;
  }
}
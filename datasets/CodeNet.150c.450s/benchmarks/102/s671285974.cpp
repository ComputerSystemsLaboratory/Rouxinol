#include <iostream>
#include <queue>
#include <map>
#include <utility>
#include <cstring>

#define BLACK 1
#define RED 0

using namespace std;

int main() {
  while(true) {
    int h, w, ans = 0;
    cin >> w >> h;
    if(w == 0) break;
    map<pair<int, int>, bool> visits;
    map<pair<int, int>, int> table;
    queue<pair<int, int> > q;
    char t;
    pair<int, int> now;
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
	cin >> t;
	pair<int, int> index = make_pair(i, j);
	if(t == '.') {
	  visits[index] = false;
	  table[index] = BLACK;
	}
	else if(t == '#') {
	  visits[index] = false;
	  table[index] = RED;
	}
	else {
	  visits[index] = true;
	  table[index] = BLACK;
	  now = index;
	}
      }
    }
    q.push(now);
    ans++;
    while(!q.empty()){
      now = q.front();
      q.pop();
      pair<int, int> s = now;
      if(s.first > 0) {
	s.first--;
	if(table[s] == BLACK && visits[s] == false) {
	  ans++;
	  q.push(s);
	  visits[s] = true;
	}
	s = now;
      }
      if(s.first < h-1) {
	s.first++;
	if(table[s] == BLACK && visits[s] == false) {
	  ans++;
	  q.push(s);
	  visits[s] = true;
	}
	s = now;
      }
      if(s.second > 0) {
	s.second--;
	if(table[s] == BLACK && visits[s] == false) {
	  ans++;
	  q.push(s);
	  visits[s] = true;
	}
	s = now;
      }
      if(s.second < w-1) {
	s.second++;
	if(table[s] == BLACK && visits[s] == false) {
	  ans++;
	  q.push(s);
	  visits[s] = true;
	}
	s = now;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
  
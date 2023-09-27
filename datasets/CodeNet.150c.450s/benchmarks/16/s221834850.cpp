#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>



using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;

int main(int argc, char *argv[]){
  string buf;
  cin >> buf;

  int x = 0;
  int y = 0;
  stack<int> st;
  priority_queue<pii, vector<pii>, greater<pii> > q;
  for (size_t i = 0; i < buf.size(); i++) {
    char c = buf[i];
    x++;
    switch(c){
    case '/':
      y++;
      if(!st.empty()){
        q.push(pii(st.top(), x));
        st.pop();
      }
      break;
    case '\\':
      y--;
      st.push(x);
      break;
    }
  }
  vector<int> ret;
  int total = 0;
  while(!q.empty()){
    pii p1 = q.top(); q.pop();
    int s = p1.second - p1.first;
    while(!q.empty() && q.top().second < p1.second){
      pii p2 = q.top(); q.pop();
      s += p2.second - p2.first;
    }
    ret.push_back(s);
    total += s;
  }
  cout << total << endl;
  if(ret.size() == 0){
    cout << ret.size() << endl;
    return 0;
  } else{
    cout << ret.size() << " ";
    for (size_t i = 0; i < ret.size()-1; i++) {
      cout << ret[i] << " ";
    }
    cout << ret.back() << endl;
  }
  return 0;
}
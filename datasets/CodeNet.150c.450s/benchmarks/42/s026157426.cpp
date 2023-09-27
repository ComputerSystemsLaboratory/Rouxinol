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
typedef pair<string, int> psi;

int main(int argc, char *argv[]){
  size_t n;
  int q;
  cin >> n >> q;
  queue<psi> qu;
  for (size_t i = 0; i < n; i++) {
    string buf;
    int bufi;
    cin >> buf >> bufi;
    qu.push(psi(buf, bufi));
  }
  int now = 0;
  while(qu.size() > 0){
    psi buf = qu.front(); qu.pop();
    if(buf.second <= q){
      now += buf.second;
      cout << buf.first << " " << now << endl;
    } else{
      now += q;
      qu.push(psi(buf.first, buf.second-q));
    }
  }

  return 0;
}
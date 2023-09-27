#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_N 50
using namespace std;

int n, p, np, id;

void PRINT(vector<int> &a) {
  cout << " -------" << endl;
  cout << "np : " << np << endl;
  for(int i = 0; i < n; ++i) {
    cout << "a[" << i << "]: " << a[i] << endl;
  }
  cout << endl;
}

bool step(vector<int> &a) {

  if(np > 0) {
    np--;
    a[id]++;

    if(np == 0 && count(a.begin(), a.end(), p) == 1) {
      return 1;
    }
  }
  else {
    np += a[id];
    a[id] = 0;
  }
  return 0;
}

int play() {
  vector<int> a(n, 0);
  id = 0;
  np = p;
  while(1) {
    if(step(a)) break;
    id++;
    id %= n;
  }
  return id;
}

int main() {
  while(cin >> n >> p && n && p) {
    cout << play() << endl;
  }
  return 0;
}


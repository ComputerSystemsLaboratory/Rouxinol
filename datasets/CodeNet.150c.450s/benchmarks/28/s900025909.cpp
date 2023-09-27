#include<iostream>
using namespace std;

int n, k, p, *w;

bool check(){
  int tk = k, i=0;
  int rest = p;

  while(i<n) {
    if ((rest -= w[i]) < 0) {
      if (tk == 1) return false;
      tk--;
      rest = p;
    } else {
      i++;
    }
  }
  return true;
}

int main() {
  int left = 0, right = 1;
  cin >> n >> k;
  int sbe6oj[n];
  w = sbe6oj;
  for(int i=0; i<n; i++) {
    cin >> w[i];
    right += w[i];
  }
  while(left+1 != right) {
    p = (left+right)/2;
    if (check()) right = p;
    else left = p;
  }
  cout << right << endl;
  return 0;
}
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

int main() {
  int n,num;
  char suit;
  int s[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int h[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int c[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int d[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  cin >> n;
  for(int i = 0; i < n;i++){
    cin >> suit >> num;
    if(suit == 'S'){
      s[num-1] = 0;
    }else if(suit == 'H'){
      h[num-1] = 0;
    }else if(suit == 'C'){
      c[num-1] = 0;
    }else{
      d[num-1] = 0;
    }
  }
  for(int i = 0;i < 13;i++){
    if (s[i] != 0) cout << "S " << s[i] << endl;
  }
  for(int i = 0;i < 13;i++){
    if (h[i] != 0) cout << "H " << h[i] << endl;
  }
  for(int i = 0;i < 13;i++){
    if (c[i] != 0) cout << "C " << c[i] << endl;
  }
  for(int i = 0;i < 13;i++){
    if (d[i] != 0) cout << "D " << d[i] << endl;
  }
  return 0;
}


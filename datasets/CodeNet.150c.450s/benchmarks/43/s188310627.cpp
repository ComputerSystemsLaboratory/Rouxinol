#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <limits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <complex>

using namespace std;

//define
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define dump(x)  cerr << #x << " = " << (x) << endl;

#define INF (INT_MAX/3)
#define PI (2*acos(0.0))
#define EPS (1e-8)

typedef long long ll;
typedef unsigned long long ull;

int main(){
  ios_base::sync_with_stdio(0);
  int n;
  while(cin >> n, n){
    int score_a = 0, score_b = 0;
    int a, b;
    for(int i = 0; i < n; i++){
      cin >> a >> b;
      if(a == b){
        score_a += a;
        score_b += b;
      }else if(a > b){
        score_a += a + b;
      }else{
        score_b += a + b;
      }
    }
    cout << score_a << " " << score_b << endl;
  }
  return 0;
}
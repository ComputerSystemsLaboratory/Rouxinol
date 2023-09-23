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
  int n,x;
  cin >> n;
  for(int i = 1; i <= n; i++){
    if(i % 3 == 0){
      cout << " " << i;
    }else{
      if(i % 10 == 3){
        cout << " " << i;
      }else{
        x = i;
        while(x /= 10){
          if(x % 10 == 3){
            cout << " " << i;
            break;
          }
        }
      }
    }
  }
  cout << endl;
  return 0;
}


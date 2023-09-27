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
  int n,tmp;
  cin >> n;
  int a[110];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = n-1; i >= 0;i--){
    cout << a[i];
    if(i != 0){
      cout << " ";
    }
  }
  /*ソートじゃなかった！
  for(int i = 0;i < n-1; i++){
    for(int j = n-1;j > i;j--){
      if(a[j-1] < a[j]){
        tmp = a[j-1];
        a[j-1] = a[j];
        a[j] = tmp;
      }
    }
  }
  for(int i = 0;i < n; i++){
    cout << a[i];
    if(i != n-1){
      cout << " ";
    }
  }
  */
  cout << endl;
  return 0;
}


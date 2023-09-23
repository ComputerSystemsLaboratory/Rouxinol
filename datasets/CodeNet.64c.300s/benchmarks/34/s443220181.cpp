#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define INF (2 << 28)
#define fr first
#define sc second
using namespace std;

typedef long long ll;
typedef pair<int, int> iP;

int main(){
  
  int N, a[100];

  cin >> N;
  for(int i = 0; i < N; i++) 
    cin >> a[i];
  
  for(int i = 0; i < N; i++) {
    int j, v = a[i];
    for(j = i - 1; j >= 0 && a[j] > v; j--)
      a[j + 1] = a[j];
    a[j + 1] = v;
    
    for(int i = 0; i < N; i++)
      printf("%d%c", a[i], (i != N - 1 ? ' ' : '\n'));
  }
}
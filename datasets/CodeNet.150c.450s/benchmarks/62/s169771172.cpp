#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <string>
#include <string.h>
#include <sstream>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

typedef long long ll;

int main(){
  int a, b, c;
  cin >> a >> b >> c;

  int array[3] = { a, b, c };
  sort(array, array+3);

  printf("%d %d %d\n", array[0], array[1], array[2]);
  
  return 0;
}
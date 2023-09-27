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
  int time;
  cin >> time;
  int hour = time/3600;
  time %= 3600;
  int minute = time/60;
  int sec = time % 60;

  printf("%d:%d:%d\n", hour, minute, sec);
  return 0;
}
#include <bits/stdc++.h>

int ans1[1048576];
int ans2[1048576];
std::vector<int> num4;
std::vector<int> numodd4;

int main(int argc, char *argv[]) {

  // step 1
  for(int i = 1; ; ++i) {
    int t = i * (i + 1) * (i + 2) / 6;
    if( t >= 1048576 ) break;
    num4.push_back(t);
    if( t % 2 == 1 ) numodd4.push_back(t);
  }
  std::sort(std::begin(num4), std::end(num4));
  std::sort(std::begin(numodd4), std::end(numodd4));
  num4.erase(std::unique(std::begin(num4), std::end(num4)), std::end(num4));
  numodd4.erase(std::unique(std::begin(numodd4), std::end(numodd4)), std::end(numodd4));

  // step 2
  for(int i = 1; i < 1048576; ++i) {
    int min = 1048576;
    for(int dx : num4) {
      int previ = i - dx;
      if( previ < 0 ) break;
      min = std::min(min, ans1[previ] + 1);
    }
    ans1[i] = min;
  }

  // step 3
  ans2[0] = 0;
  for(int i = 1; i < 1048576; ++i) {
    int min = 1048576;
    for(int dx : numodd4) {
      int previ = i - dx;
      if( previ < 0 ) break;
      min = std::min(min, ans2[previ] + 1);
    }
    ans2[i] = min;
  }
  
  // step 4
  for(;;) {
    int N;
    scanf("%d", &N);
    if( N == 0 ) break;
    printf("%d %d\n", ans1[N], ans2[N]);
  }
  
  return 0;
}
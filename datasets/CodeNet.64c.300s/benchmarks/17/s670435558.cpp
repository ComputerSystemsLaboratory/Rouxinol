#include <algorithm>
#include <vector>
#include <cfloat>
#include <string>
#include <cmath>
#include <set>
#include <cstdlib>
#include <map>
#include <ctime>
#include <iomanip>
#include <functional>
#include <deque>
#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
#include <stack>
#include <climits>
#include <sys/time.h>
#include <cctype>

using namespace std;

typedef long long ll;

int includeTax(int a, int x) {
  return (int)(double(a)*(100.+double(x))/100.);
}

int main(int argc, char *argv[]) {
  char heap[80];
  int before_tax;
  int after_tax;
  int sum;
  int a, b;
  int a_x, b_x;

  while(1){
    scanf("%d %d %d", &before_tax, &after_tax, &sum);
    if(before_tax ==0 && after_tax == 0 && sum == 0) break;

    int ans = 0;
    for(a = 1; a <= sum-1; a++){
      for(b = a; b <= sum-1; b++){
	a_x = includeTax(a, before_tax);
	b_x = includeTax(b, before_tax);
	// if (includeTax(a, after_tax)+includeTax(b, after_tax) > sum) break;

	if (a_x+b_x == sum) {
	  ans = max(ans, includeTax(a, after_tax)+includeTax(b, after_tax));
	}
      }
    }

    std::cout << ans << std::endl;
  }
}
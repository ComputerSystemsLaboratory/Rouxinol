#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <string>
#include <bitset>

using namespace std;

int main(void)
{
  while (true) {

    int n;
    cin >> n;
    if (n == 0) break;
    int p[n];
    for (int i = 0; i < n; i++)
      cin >> p[i];
    int top,bottom,sum;
    top = -1;
    bottom = 1001;
    sum = 0;
    for (int i = 0; i < n; i++) {
      if (top < p[i])
	top = p[i];
      if (bottom > p[i])
	bottom = p[i];
    }
    //cout << top << "  " << bottom << endl;
    
    bool t, b;
    t = b = true;
    for (int i = 0; i < n; i++) {
      if (top == p[i] && t) {
	t = false;
      }
      else if (bottom == p[i] && b) {
	b = false;
      }
      else
	sum+=p[i];
    }
    cout << (int)(sum/(n-2)) << endl;
    
  }
  return 0;	
}
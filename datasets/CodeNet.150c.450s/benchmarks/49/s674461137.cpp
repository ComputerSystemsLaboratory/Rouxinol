#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int a[10];
int n;
int s[100];
int s_max, s_min;
int sum = 0;
int ave = 0;

int main() {
  while(cin >> n, n)
  {
  for(int i =0; i < n; i++){
    cin >> s[i];
  }
  
  s_max = *max_element(s, s + n);
  s_min = *min_element(s, s + n);

  sum = accumulate(s, s + n, 0);

  sum = sum - s_max - s_min;

  ave = sum/(n-2);
  cout << ave << endl;
  }
  return 0;
}
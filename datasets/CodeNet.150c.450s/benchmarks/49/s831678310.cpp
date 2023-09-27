#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int n;
  while(cin >> n && n != 0){
    int maximum = 0, minimum = 1000, sum = 0, s;
    for(int i = 0 ; i < n; ++i){
      cin >> s;
      maximum = max(maximum, s);
      minimum = min(minimum, s);
      sum += s;
    }
    sum = sum - maximum -minimum;
    cout << sum/(n - 2) << endl;
  }
  return 0;
}
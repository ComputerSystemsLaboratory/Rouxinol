#include <bits/stdc++.h>
using namespace std;
#define Rep(i,N) for(int i = 0; i < N; i++)
int main()
{
  int data;
  int sum = 0;
  int maxv = INT_MIN;
  Rep(p,2) {
    Rep(i,4) {
      cin >> data;
      sum += data;
    }
    maxv = max(maxv,sum);
    sum = 0;
  }
  cout << maxv << endl;
  return 0;
}
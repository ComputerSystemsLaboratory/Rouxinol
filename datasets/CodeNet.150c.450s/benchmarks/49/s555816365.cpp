#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;

  while(cin >> n, n){
    int mini = 114514, maxi = -114514;
    int sum = 0;

    for(int i = 0; i < n; i++){
      int s;
      cin >> s;
      sum += s;
      mini = min(mini, s);
      maxi = max(maxi, s);
    }
  
    cout << (sum - mini - maxi) / (n - 2) << endl;
  }
  
  return 0;
}
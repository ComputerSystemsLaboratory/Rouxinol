#include <iostream>
#include <algorithm>
using namespace std;

#define MAX (1000000)
#define INF (1<<30)

int main() {
  
  int dp_all[MAX+2], dp_odd[MAX+2];
  
  fill(dp_all, dp_all+MAX+1, INF);
  fill(dp_odd, dp_odd+MAX+1, INF);
  
  dp_all[0] = dp_odd[0] = 0;
  
  for(int i=1; ; i++) {
    int num = i*(i+1)*(i+2) / 6;
    if(num > MAX) break;
    for(int j=num; j<=MAX; j++) {
      dp_all[j] = min(dp_all[j], dp_all[j-num]+1);
      if(num % 2)
	dp_odd[j] = min(dp_odd[j], dp_odd[j-num]+1);
    }
  }
  
  int n;
  while(cin >> n && n) {
    cout << dp_all[n] << " " << dp_odd[n] << endl;
  }
  
  return 0;
}
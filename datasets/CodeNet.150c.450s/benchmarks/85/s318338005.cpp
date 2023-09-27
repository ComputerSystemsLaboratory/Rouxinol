#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100
#define INF (1 << 21)
int cost[MAX_N][MAX_N];
int rc[MAX_N+1];

int main() {
  int n; cin >> n;
  for(int i=0;i<n;i++) {
    int tmp;
    if(i==0) {
      cin >> rc[i] >> rc[i+1];
    }
    else {
      cin >> tmp >> rc[i+1];
    }
  }

  // cost[i][i] = 0
  /*
  for(int i=0;i<n;i++) {
    cost[i][i] = 0;
  }
  */
  // cost[i][i+1] = rc[i]*rc[i+1]*rc[i+2]
  for(int i=0;i<n-1;i++) {
    cost[i][i+1] = rc[i]*rc[i+1]*rc[i+2];
  }
  // calculation cost[i][i+j]
  for(int j=2;j<n;j++) {
    for(int i=0;i+j<n;i++) {
      cost[i][i+j] = INF;
      for(int k=i+1;k<=i+j;k++) {
        cost[i][i+j] = min(cost[i][i+j], cost[i][k-1] + cost[k][i+j] + rc[i]*rc[k]*rc[i+j+1]);
      }
    }
  }

  cout << cost[0][n-1] << endl;
}
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int n, m;
  int taro[104];
  int hanako[104];
  while(scanf("%d %d", &n,&m), n||m) {
    int taro_sum = 0;
    int hanako_sum = 0;
    
    for (int i=0; i<n; i++) {
      scanf("%d", &taro[i]);
      taro_sum += taro[i];
    }
    for (int i=0; i<m; i++) {
      scanf("%d", &hanako[i]);
      hanako_sum += hanako[i];
    }
    
    sort(taro, taro+n);
    sort(hanako, hanako+m);

    // cout << "debug" << endl;
    // cout << taro_sum << endl;
    // cout << hanako_sum << endl;
    
    int diff = taro_sum - hanako_sum;
    int taro_found, hanako_found;

    // cout << "debug" << endl;
    // cout << diff << endl;
    
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
	// cout << "taro[i]" << taro[i] << " hanako[j]" << hanako[j] << endl;
	
	if ((taro[i] - hanako[j])*2 == diff) {
	  taro_found = taro[i];
	  hanako_found = hanako[j];
	  goto found;
	} 
      }
    }

    printf("-1\n");
    continue;
  found:
    printf("%d %d\n", taro_found, hanako_found);
  }
}
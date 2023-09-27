#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
  int n;
  int h1, m1, s1;
  int h2, m2, s2;

  while(cin >> n, n!=0){
    int res = 0;
    signed int time[24*3600+60*60+60] = {0};
    for(int i = 0; i < n; i++) {
      scanf("%d:%d:%d", &h1, &m1, &s1);
      scanf("%d:%d:%d", &h2, &m2, &s2);
      time[h1*3600+m1*60+s1]++;
      time[h2*3600+m2*60+s2]--;
    }

    for(int i = 0; i < 24*3600+59*60+59; i++) {
      time[i+1]+=time[i];
      if(res < time[i+1])
        res = time[i+1];
    }
    cout << res << endl;
  }
  return 0;
}


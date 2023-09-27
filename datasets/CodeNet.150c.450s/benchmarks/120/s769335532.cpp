#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int r,c;
int s[11][11111];
int main(void)
{
  while(1){
    cin >> r >> c;
    if(!r && !c) break;
    for(int i = 0; i < r; i++){
      for(int j = 0; j < c; j++){
	cin >> s[i][j];
      }
    }

    int best = 0;
    for(int bit = 0; bit != 1<<r; bit++){
      int sum = 0;
      for(int i = 0; i < c; i++){
	int count = 0;
	for(int j = 0; j < r; j++){
	  int f = (bit & 1<<j)?1:0;
	  count += (s[j][i]+f)%2;
	}
	sum += max(count, r - count);
      }
      best = max(best, sum);
    }
    cout << best << endl;
  }
}
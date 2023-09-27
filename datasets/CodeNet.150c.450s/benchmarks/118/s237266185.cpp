#include <bits/stdc++.h>
using namespace std;

int computeDays(int y, int m, int d){
  int days = 0;
  for(int nowy=1; nowy < y; nowy++){
    if(nowy % 3 == 0){
      days += 20 * 10;
    }else{
      days += 20*5 + 19*5;
    }
  }
  for(int nowm=1; nowm < m; nowm++){
    if(y % 3 == 0){
      days += 20;
    }else{
      if(nowm % 2 == 0){
	days += 19;
      }else{
	days += 20;
      }
    }
  }
  return days + d;
}

int main(void){
  int n;
  cin >> n;
  while(n--){
    int y, m, d;
    cin >> y >> m >> d;
    cout << computeDays(1000, 1, 1) - computeDays(y, m, d) << endl;
  }
  return 0;
}
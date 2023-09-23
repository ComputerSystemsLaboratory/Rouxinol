#include <bits/stdc++.h>

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define ALL(v) (v).begin(), (v).end()
#define INF 1e9

using namespace std;

int main(){
  int n;
  cin >> n;
  REP(i, n){
    int y, m, d, days;
    cin >> y >> m >> d;
    days = 200 * (1000-y-1) + 20 * (10 - m) + 20 - d + 1;
    int leap = 1000 / 3 - (y-1) / 3 - 1;
    days -= 10 * leap;
    if(y % 3 == 1) days -= 5;
    if(y % 3 != 0) days -= 5 - (m-1)/2;
    cout << days << endl;
  }
}
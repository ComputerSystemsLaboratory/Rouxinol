#include <iostream>
#include <algorithm>
#include <vector>
#define llint long long

using namespace std;

llint N, M;
llint h[1505], w[1505];
llint sumh[1505], sumw[1505];
vector<llint> vec;

int main(void)
{
  while(1){
    cin >> N >> M;
    if(N == 0 && M == 0) break;
    for(int i = 1; i <= N; i++) cin >> h[i];
    for(int i = 1; i <= M; i++) cin >> w[i];

    for(int i = 1; i <= N; i++) sumh[i] = sumh[i-1] + h[i];
    for(int i = 1; i <= M; i++) sumw[i] = sumw[i-1] + w[i];

    vec.clear();
    for(int i = 1; i <= N; i++){
      for(int j = 1; j <= N; j++){
        if(i > j) continue;
        vec.push_back(sumh[j] - sumh[i-1]);
      }
    }
    sort(vec.begin(), vec.end());

    llint ans = 0;
    for(int i = 1; i <= M; i++){
      for(int j = 1; j <= M; j++){
        if(i > j) continue;
        llint w = sumw[j] - sumw[i-1];
        ans += upper_bound(vec.begin(), vec.end(), w) - lower_bound(vec.begin(), vec.end(), w);
      }
    }
    cout << ans << endl;
  }
  return 0;
}


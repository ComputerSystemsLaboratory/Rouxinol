#include <iostream>
#include <utility>
#include <algorithm>
#include <functional>
using namespace std;

typedef pair<int, int> pii;

int main()
{
  int N, M, ans;
  while(1){
    cin >> N >> M;
    if(N == 0 && M == 0){
      break;
    }else{
      ans = 0;
      pii DP[N];
      for(int i = 0; i < N; i++)
	cin >> DP[i].second >> DP[i].first;
      sort(DP, DP + N, greater<pii>());
      for(int i = 0; i < N; i++){
	while(DP[i].second > 0){
	  if(M)
	    DP[i].second--;
	  else
	    break;
	  M--;
	}
      }
      for(int i = 0; i < N; i++)
	ans += DP[i].first * DP[i].second; 
      cout << ans << endl;
    }
  }
}
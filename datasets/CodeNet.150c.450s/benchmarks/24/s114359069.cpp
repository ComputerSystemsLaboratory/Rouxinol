#include <algorithm>
#include <iostream>
#include <utility>
#include <functional>
#include <map>
#include <vector>
#include <string>

using namespace std;

int
main() {
  int n,m;
  do {
    cin >> n >> m;
    if (n == 0 && m == 0) break;
    vector<pair<int, int> > dp;
    for (int i=0;i<n; ++i) {
      int dx, px;
      cin >> dx >> px;
      dp.push_back(make_pair(dx, px) );
    }

    // calc
    sort(dp.begin(), dp.end(), [](pair<int,int> x, pair<int,int> y ) {
	return x.second > y.second;
      }
      );
    /*
    for (auto & x: dp) {
      cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    */
    
    auto s { m };
    auto ans { 0 };
    {
      int i=0;
      for (; i<dp.size(); ++i) {
	auto dpeek = dp[i].first;
	if (s - dpeek <= 0) break;
      
	s -= dp[i].first;
      }
      
      int rest = s;
      dp[i].first -= rest;
      
      for (; i<dp.size(); ++i) {
	ans += dp[i].first * dp[i].second;
      }
    }
    
    // output
    cout << ans << endl;
  } while (true);
    
  return 0;
}

#if 0
Local Variables:
quickrun-option-cmd-alist: ((:command . "clang++")
			    (:exec    . ("%c -std=c++11 -o %n %s -Wall -D__MAIN__"
					 "%n "))
                            (:remove  . ("%n")))
  End:
#endif
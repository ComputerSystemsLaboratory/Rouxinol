#include <iostream>
#include <vector>
using namespace std;

bool
solve(vector<int> & xs, int i, int m) {
  auto x = xs[i];

  if (m == 0) return true;  
  if (m < 0 || i == (int)xs.size() ) return false;
  
  return solve(xs, i+1, m) || solve(xs, i+1, m-x);
}
  
  
int
main() {
  // O(2^n) where n <= 20
  int n;
  cin >> n;
  vector<int> xs;
  for (int i=0; i<n;++i) {
    int x;
    cin >> x;
    xs.push_back(x);
  }
  int mx;
  cin >> mx;
  for (int i=0; i<mx; ++i) {
    int m;
    cin >> m;
    auto res = solve(xs, 0, m);
    if (res) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}


#if 0
Local Variables:
quickrun-option-cmd-alist: ((:command . "clang++")
			    (:exec    . ("%c -std=c++11 -o %n %s -Wall -Wextra -Werror -D__MAIN__"
					 "%n "))
                            (:remove  . ("%n")))
  End:
#endif
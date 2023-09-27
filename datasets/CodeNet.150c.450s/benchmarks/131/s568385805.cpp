#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt"
int main() {
  while (1) {
    int a, L; cin >> a >> L;
    if (!a&&!L)break;
    vector<int>nums(1, a);
    for (int time = 0; true;time++) {

      std::ostringstream sout;
      sout << setfill('0') << setw(L) << a;
      string st = sout.str();
      sort(st.begin(), st.end());
      const int amin = stoi(st);
      reverse(st.begin(), st.end());
      const int amax = stoi(st);
      const int next = amax - amin;
      auto it = find(nums.begin(), nums.end(), next);
      if (it != nums.end()) {
        cout << it-nums.begin() << " " << next << " " << nums.end() - it << endl;
        break;
      }
      else {
        nums.push_back(next);
        a = next;
      }
    }
  }
  return 0;
}
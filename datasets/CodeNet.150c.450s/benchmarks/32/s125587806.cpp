#include <bits/stdc++.h>


using namespace std;


// Powered by caide (code generator, tester, and library code inliner)


class Solution {
public:
  void solve(std::istream& in, std::ostream& out)
  {
    int m, nmin, nmax;
    while (in >> m >> nmin >> nmax && m && nmin && nmax) {
      vector<int> p(m);
      for (auto&& i : p) {
        in >> i;
      }
      sort(p.rbegin(), p.rend());
      int maxdist = nmax;
      for(int n = nmax; n >= nmin; n--) {
        if (p[maxdist - 1] - p[maxdist] < p[n - 1] - p[n]) {
          maxdist = n;
        }
      }
      out << maxdist << "\n";
    }
  }
};

void solve(std::istream& in, std::ostream& out)
{
  out << std::setprecision(12);
  Solution solution;
  solution.solve(in, out);
}


#include <fstream>
#include <iostream>


int main() {
  
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  istream& in = cin;


  ostream& out = cout;

  solve(in, out);
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int D,N,x;
  N=0;
  x=0;
  cin >> D;
  vector<int> c(26);
  vector<int> last(26);
  for (int i=0;i<26;i++) {
    cin >> c.at(i);
  }
  vector<vector<int>> s(D,vector<int>(26));
  for (int i=0;i<D;i++) {
    for (int j=0;j<26;j++) {
      cin >> s.at(i).at(j);
    }
  }
  vector<int> t(D);
  for (int i=0;i<D;i++) {
    cin >> t.at(i);
  }
  for (int i=0;i<D;i++) {
    N=t.at(i)-1;
    x+=s.at(i).at(N);
    last.at(N)=i+1;
    for (int j=0;j<26;j++) {
      x-=c.at(j)*(i+1-last.at(j));
    }
    cout << x << endl;
  }
}
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  while(1){
    int n;
    cin>>n;
    if(!n)break;
    vector<int> x;
    vector<int> y;
    x.push_back(0);
    y.push_back(0);
    REP(i,n-1){
      int m,d;
      cin>>m>>d;
      int di[] = {0,1,0,-1};
      int dj[] = {-1,0,1,0};
      y.push_back(y[m] + di[d]);
      x.push_back(x[m] + dj[d]);
    }
    auto pw = minmax_element(begin(x),end(x));
    auto ph = minmax_element(begin(y),end(y));
    int w=(*(pw.second) - *(pw.first)) + 1;
    int h=(*(ph.second) - *(ph.first)) + 1;
    cout << w << ' ' << h << endl;
  }
  return 0;
}
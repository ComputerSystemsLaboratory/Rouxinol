#include <iostream>
#include <vector>
using namespace std;

int main() {
  while(true) {
    int ncandid, nstone;
    cin >> ncandid >> nstone;
    if(ncandid == 0 && nstone == 0) break;
    int lastGiveStoneC = -1;
    vector<int> candides(ncandid, 0);
    int count = 0;
    while(true) {
      for(int i = 0; i < ncandid; ++i) {
        candides[(lastGiveStoneC + 1 + i) % ncandid] += nstone / ncandid;
        if(i < nstone % ncandid) {
          ++candides[(lastGiveStoneC + 1 + i) % ncandid];
        } else if(nstone / ncandid == 0) {
          break;
        }
      }
      lastGiveStoneC += nstone + 1;
      nstone = candides[lastGiveStoneC % ncandid];
      candides[lastGiveStoneC % ncandid] = 0;
      (nstone == 0) ? (++count) : (count = 0);
      if(count == ncandid - 1) break;
    }
    cout << (lastGiveStoneC + 1) % ncandid << endl;
  }
  return 0;
}
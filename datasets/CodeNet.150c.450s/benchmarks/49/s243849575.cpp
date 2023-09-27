#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
bool solve(){
  int inum;
  vector<int> idata;
  cin >> inum;
  if(!inum)return false;
  for(int i=0;i<inum;i++){
    int buf;
    cin >> buf;
    idata.push_back(buf);
  }
  idata.erase( max_element(idata.begin(), idata.end()));
  idata.erase( min_element(idata.begin(), idata.end()));
  int sum = accumulate( idata.begin(), idata.end(), 0 ) / idata.size();
  cout << sum << endl;
  return true;
}

int main(void){
  while(solve());
  return 0;
}
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
  vector<int> h(10);

  for(int i=0;i<10;++i) cin>>h[i];

  sort(begin(h),end(h),greater<int>());

  for(int i=0;i<3;++i) cout<<h[i]<<endl;
  return 0;
}
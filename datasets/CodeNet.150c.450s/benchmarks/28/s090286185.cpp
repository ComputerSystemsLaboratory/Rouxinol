#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>

#include <sstream>

using namespace std;



bool isLoadable(int n, int k, vector<int> &w, int maxp){
  // wi(0..n)
  // k??????????????????
  // maxp
  //
  int tmp=0;
  int index=0;
  for(int j=0;j<k;j++){
    tmp = 0;
    while(index < n && tmp + w[index] <= maxp){
      tmp += w[index];
      index++;
    }
  }

  if(index==n){
    return true;
  }else{
    return false;
  }
}

int binary_search(int n, int k, vector<int> &w){
  long long int Max = 100000*10000;
  int left=0;
  int right=Max;
  int mid;
  while(left < right){
    mid = (left+right)/2;
    if(isLoadable(n, k, w, mid)==false){
      left = mid+1;
    }else{
      right = mid;
    }
  }

  if(isLoadable(n, k, w, mid)==false){
    mid++;
  }
  return mid;
}
		   
		   
int main(){
  int n;
  int k;
  vector<int> w;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    int tmp;
    cin >> tmp;
    w.push_back(tmp);
  }

  // sort(w.begin(), w.end());
  // reverse(w.begin(), w.end());
  int MaxP;
  vector<int> p(k, 0);

  // MaxP = 0;
  // for(MaxP = 10;MaxP<40;MaxP++){
    // cout << MaxP << ": " << isLoadable(n, k, w, MaxP) << endl;
  // }

  int res = binary_search(n, k, w);
  cout << res << endl;
}
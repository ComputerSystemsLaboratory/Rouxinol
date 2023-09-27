#include<iostream>
#include<vector>
#include<algorithm>
#include <cstdlib> 
using namespace std;

vector<int> ans;

int main(){
  int n;

  while(cin >> n,n){
    vector<int> val;
    int ans_t=1000001;
    for(int i=0; i<n; ++i){
      int tmp;
      cin >> tmp;
      val.push_back(tmp);
    }
    sort(val.begin(),val.end(),greater<int>());
    for(int i=0; i<n-1; ++i){
      int tmp = val[i]-val[i+1];
      if(ans_t > tmp){
	ans_t = tmp;
      }
    }
    ans_t =abs(ans_t);
    ans.push_back(ans_t);
  }

  for(auto i:ans){
    cout << i << endl;
  }
  return 0;
}
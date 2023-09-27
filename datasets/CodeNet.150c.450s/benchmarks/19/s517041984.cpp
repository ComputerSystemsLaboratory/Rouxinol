#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
  int val1, val2;
  vector<pair<int,int> >v;
  while(cin >> val1 >> val2 && (val1 || val2)){
    if(val1 > val2){
      swap(val1, val2);
    }
    v.push_back(make_pair(val1, val2));
  }
  for(int i=0;i<(int)v.size();i++){
    cout << v[i].first << " " << v[i].second << endl;
  }
  return 0;
}
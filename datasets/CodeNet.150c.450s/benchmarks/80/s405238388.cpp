#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){
  int sum_a = 0,sum_b = 0;
  for(int i = 0;i < 4;i++){
    int tmp;
    cin >> tmp;
    sum_a += tmp;
  }
  for(int i = 0;i < 4;i++){
    int tmp;
    cin >> tmp;
    sum_b += tmp;
  }
  if(sum_a >= sum_b)cout << sum_a << endl;
  else cout << sum_b << endl;
  
    
  
  return 0;
}
vector<string> split(string str,string delim){
  vector<string> items;
  size_t dlm_idx;
  if(str.npos == (dlm_idx = str.find_first_of(delim))){
    items.push_back(str.substr(0,dlm_idx));
  }
  while(str.npos != (dlm_idx = str.find_first_of(delim))){
    if(str.npos == str.find_first_not_of(delim)){
      break;
    }
    items.push_back(str.substr(0,dlm_idx));
    dlm_idx++;
    str = str.erase(0,dlm_idx);
    if(str.npos == str.find_first_of(delim) && "" != str){
      items.push_back(str);
      break;
    }
  }
  return items;
}
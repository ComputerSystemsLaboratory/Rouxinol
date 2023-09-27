#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){
  vector<int> vec(30,0);
  for(int i = 0;i < 28;i++){
    int tmp;
    cin >> tmp;
    vec[tmp-1] = 1;
  }
  for(int i =0 ;i < 30;i++){
    if(vec[i] == 0)cout << i+1 << endl;
  }
  
    
  
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
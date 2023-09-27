#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
string IntToString(int);
int StringToInt(string);

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
void fill(vector<int> &a,int s,int l){
  for(int i = s;i < l;i++){
    a[i]++;
  }
}
int make_time(vector<string> &a){
  int time = 0;
  time = StringToInt(a[0])*60*60+StringToInt(a[1])*60+StringToInt(a[2]);
  return time;
}
int main(){
  while(1){
    int n;
    cin >> n;
    if(n == 0)break;
    vector<int> zone(60*60*24+1,0);
    for(int i = 0;i < n;i++){
      string tmp;
      cin >> tmp;
      vector<string> from = split(tmp,":");
      cin >> tmp;
      vector<string> to = split(tmp,":");
      fill(zone,make_time(from),make_time(to));
    }
    int ans = 0;
    for(int i = 0;i < 60*60*24+1;i++){
      ans = max(zone[i],ans);
    }
    cout << ans << endl;
      
    
  }
  return 0;
}
string IntToString(int number){
  stringstream ss;
  ss << number;
  return ss.str();
}
int StringToInt(string number){
  stringstream ss;
  ss << number;
  int numInt;
  ss >> numInt;
  return numInt;
  
}
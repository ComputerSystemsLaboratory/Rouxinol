#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

string calc(string s,int digit){
  string maxs,mins;
  maxs=mins=s;
  sort(maxs.begin(), maxs.end(),greater<int>());
  sort(mins.begin(),mins.end());
  int max=atoi(maxs.c_str());
  max*=pow(10,digit-s.length());
  int min=atoi(mins.c_str());
  string res;
  stringstream ss;
  ss << max-min;
  res = ss.str();
  return res;
}

int search(int query,vector<int> list){
  if(list.empty()==true)return 0;
  int cnt=0;
  for(int a:list){
    if(query==a)return list.size()-cnt;
    cnt++;
  }
  return 0;
}

int main(){
  int digit;
  string s;
  vector<int> list;
  while(cin>>s>>digit,digit){
    int ans;
    list.clear();
    while((ans=search(atoi(s.c_str()),list)) == 0){
      list.push_back(atoi(s.c_str()));
      s=calc(s,digit);
     }
    cout << list.size() - ans << " " << s << " " << ans << endl;
  }
  return 0;
}
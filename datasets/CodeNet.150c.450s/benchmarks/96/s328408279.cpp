#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

vector<string>split(string s){
  vector<string>res;
  int pre = 0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
      if(i-pre>0)res.push_back(s.substr(pre,i-pre));
      pre = i+1;
    }
  }
  return res;
}

int main(void){

  map<char,string>mp;
  mp['0']="";
  mp['1']=".,!? ";
  mp['2']="abc";
  mp['3']="def";
  mp['4']="ghi";
  mp['5']="jkl";
  mp['6']="mno";
  mp['7']="pqrs";
  mp['8']="tuv";
  mp['9']="wxyz";
  
  int n;
  cin >> n;

  while(n--){
    string s;
    cin >> s;
    vector<string>res = split(s);
    for(int i=0;i<res.size();i++){
      cout << mp[res[i][0]][(res[i].size()-1)%max(1,(int)mp[res[i][0]].size())];
    }
    cout << endl;
  }
  
  return 0;
}
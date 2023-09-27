#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
  int n,cnt=0;
  string s,before="",tmp,key;
  vector<string> keys{".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s;
    if (s.length()==1) {
      cout << endl;
      continue;
    }
    for(int i=0;i<s.length();i++){
      tmp = s[i];
      if (tmp!="0" && tmp==before) cnt++;
      else if (tmp==before) continue;
      else if (tmp=="0"){
        key = keys[atoi(before.c_str())-1][(cnt-1)%(keys[atoi(before.c_str())-1].length())];
        cout << key;
        cnt=0;
        before="0";
      } else {
        before =tmp;
        cnt++;
      } 
    }
    cout << endl;
    
  }
  return 0;
    
}
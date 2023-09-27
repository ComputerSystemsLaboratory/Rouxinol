#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void){
  vector<string> str;
  vector<int> cnt;
  string buf, maxstr;
  int max = 0, ans, i;

  while(cin >> buf){
    bool f = true;

    if(max < buf.length()){
      max = buf.length();
      maxstr = buf;
    }
    for(i = 0; i < str.size(); i++){
      if(str[i] == buf){
	f = false;
	break;
      }
    }
    if(f){
      str.push_back(buf);
      cnt.push_back(1);
    }
    else{
      cnt[i]++;
    }
  }

  max = 0;
  for(i = 0; i < cnt.size(); i++){
    if(cnt[i] > max){
      max = cnt[i];
      ans = i;
    }
  }

  cout << str[ans] << ' ' << maxstr << endl;

  return 0;
}
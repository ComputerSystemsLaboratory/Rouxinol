#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string str, maxlen, maxfreq;
  int freq = 0, len = 0;
  map<string, int> s;
  while(cin){
    cin >> str;
    if(s.find(str) == s.end())s[str] = 0;
    s[str]++;
    if(len < str.size()){
      len = str.size();
      maxlen = str;
    }
    if(freq < s[str]){
      freq = s[str];
      maxfreq = str;
    }
  }
  cout << maxfreq << " " << maxlen << endl;
  return 0;
}
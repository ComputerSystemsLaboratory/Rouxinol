#include <iostream>
#include <map>
using namespace std;

int main(){
  string s, maxLenS, maxCntS;
  int maxLen = 0, maxCnt = 0;
  map<string,int> cnt;

  while(cin >> s){
    if(s.size() > maxLen){
      maxLen = s.size();
      maxLenS = s;
    }

    cnt[s]++;

    if(cnt[s] > maxCnt){
      maxCnt = cnt[s];
      maxCntS = s;
    }
  }

  cout << maxCntS << " " << maxLenS << endl;
}
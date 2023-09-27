#include <iostream>
#include <map>
using namespace std;

int main(void){
  int maxCnt = 0, maxLen = 0;
  string maxCntStr,maxLenStr;
  map<string,int> cnt;
  string s;

  while(cin>>s){
    cnt[s]++;
    if(maxCnt < cnt[s]){
      maxCnt = cnt[s];
      maxCntStr = s;
    }
    if(maxLen < s.length()){
      maxLen = s.length();
      maxLenStr = s;
    }
  }
  cout<<maxCntStr<<" "<<maxLenStr<<endl;

  return 0;
}
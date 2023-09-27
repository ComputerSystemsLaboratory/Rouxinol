#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> myMap;

int getAppearedNum(string str) {
  map<string, int>::iterator itr = myMap.find(str);
  if(itr == myMap.end()) {
    myMap[str] = 0;
  }
  else {
    myMap[str] += 1;
  }
  return myMap[str];
}

int main(void) {
  string target;
  string maxLengthWord;
  int maxLength = 0;
  int nowWordLength;

  int mode = 0;
  string modeWord;
  int nowAppearedNum;

  while(cin >> target) {
    nowWordLength = target.length();
    if(maxLength < nowWordLength) {
      maxLength = nowWordLength;
      maxLengthWord = target;
    }
    
    nowAppearedNum = getAppearedNum(target);
    if(nowAppearedNum > mode) {
      mode = nowAppearedNum;
      modeWord = target;
    }
  }

  cout << modeWord << " " << maxLengthWord << endl;


  return 0;
}
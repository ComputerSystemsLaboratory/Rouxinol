#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void) {
  string mcs;
  int maxlength;
  string mls;
  map<string, int> index;
  string s;
  int flag;
  flag = 0;
  maxlength = -1;
  while(cin >> s) {
    index[s]++;
    if((int)s.length() > maxlength) {
      maxlength = s.length();
      mls = s;
    }
    if(flag) {
      if(index[s] > index[mcs]) {
	mcs = s;
      }
    }else {
      mcs = s;
      flag = 1;
    }
  }
  cout << mcs << " " << mls << endl;

  return 0;
}
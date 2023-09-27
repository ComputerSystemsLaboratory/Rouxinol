#include <fstream>
#include <sstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

vector<string> split(const string &str, char delim){
  istringstream iss(str); string tmp; vector<string> res;
  while(getline(iss, tmp, delim)) res.push_back(tmp);
  return res;
}

int main() {
  string snt;
  getline(cin, snt);

  vector<string> words = split(snt, ' ');
  words[0][0] = tolower( words[0][0] );

  // for (int i = 0; i < words.size(); i++)
  //   cout << words[i] << endl;

  map<string, int> cnt;

  int M = words.size();
  int l;
  int mx_len = 0;
  for (int i = 0; i < M; i++) {
    // 最頻値
    if (cnt.count(words[i])) {
      cnt[ words[i] ]++;
    } else {
      cnt[ words[i] ] = 0;
    }
    // 最大長さの単語
    if (words[i].length() > mx_len) {
      mx_len = words[i].length();
      l = i;
    }
  }

  int f;
  int mx_f = 0;
  for (int i = 0; i < M; i++) {
    if (mx_f < cnt[ words[i] ]) {
      f = i;
      mx_f = cnt[ words[i] ];
    }
  }

  cout << words[f] << " " << words[l] << endl;
}
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Pii;
typedef pair<string, string> Pss;

map <string, Pii> dic;

int main() {
  string str;
  Pss result;
  while ( cin >> str ) {
    dic[str].first++;
    dic[str].second = str.size();

    if ( dic[result.first].first < dic[str].first ) result.first = str;
    if ( dic[result.second].second < dic[str].second ) result.second = str;

  }

  cout << result.first << " " << result.second << endl;
  return 0;
}
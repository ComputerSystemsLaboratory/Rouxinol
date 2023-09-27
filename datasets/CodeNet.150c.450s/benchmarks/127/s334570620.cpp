#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(){
  int m;
  cin >> m;

  for(int i=0;i<m;i++){
    set<string> pattern;
    string arrival;
    cin >> arrival;
    for(int j=1;j<arrival.size();j++){
      string train[2];
      train[0]=arrival.substr(0,j);
      train[1]=arrival.substr(j);

      pattern.insert(train[0]+train[1]);
      pattern.insert(train[1]+train[0]);
      
      reverse(train[0].begin(),train[0].end());
      pattern.insert(train[0]+train[1]);
      pattern.insert(train[1]+train[0]);

      reverse(train[1].begin(),train[1].end());
      pattern.insert(train[0]+train[1]);
      pattern.insert(train[1]+train[0]);

      reverse(train[0].begin(),train[0].end());
      pattern.insert(train[0]+train[1]);
      pattern.insert(train[1]+train[0]);      
    }
    cout << pattern.size() << endl;
  }

  return 0;
}
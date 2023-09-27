#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;

typedef pair<int, int> lake;

int main(void){
  int n, q;
  cin >> n;
  vector<int> s(n);
  for(int i=0;i<n;i++) cin >> s[i];
  cin >> q;
  vector<int> t(q);
  for(int i=0;i<q;i++) cin >> t[i];
  //sort(s.begin(), s.end());
  //sort(t.begin(), t.end());
  int count =0;
  for(int i=0;i<q;i++){
    for(int j=0;j<n;j++){
      if(t[i] == s[j]){
        count++;
        break;
      }
    }
  }
  cout << count << endl;
  return 0;
}
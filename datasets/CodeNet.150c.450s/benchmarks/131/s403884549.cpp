#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define fr first
#define sc second
#define mp make_pair

typedef pair< int, int > iP;
typedef pair< iP, int > iiP;

int main(){
  
  int L; string S;
  while(cin >> S >> L, L) {
    while(S.size() < L) S = "0" + S;
    vector< int > used(1000000, -1);
    for(int i = 0; ; i++) {
      if(~used[atoi(S.c_str())]) {
        cout << used[atoi(S.c_str())] << " " << atoi(S.c_str()) << " " <<  i - used[atoi(S.c_str())] << endl;
        break;
      }
      used[atoi(S.c_str())] = i;
      sort(S.begin(), S.end());
      int mini = atoi(S.c_str());
      reverse(S.begin(), S.end());
      int maxi = atoi(S.c_str());
      stringstream sss;
      sss << maxi - mini;
      S = sss.str();
      while(S.size() < L) S = "0" + S;
    }
  }
}
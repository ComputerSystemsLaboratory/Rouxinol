#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
  stack<int> S1;
  stack<pair<int, int> > S2;
  int S = 0, i = 0, j, a, b;
  char D[20000];

  cin >> D;
  while ( D[i] != '\0' ){
    if ( D[i] == '\\' ) S1.push(i);
    else if ( D[i] == '/' ){
      if ( !S1.empty() ) {
        j = S1.top();
        a = i - j;
        S += a;
        if ( S2.empty() || S2.top().first < j ){
          S2.push(make_pair(j, a));
        } else {
          b = 0;
          while ( !S2.empty() && S2.top().first > j ){
            b += S2.top().second;
            S2.pop();
          }
          b += a;
          S2.push(make_pair(j, b));
        }
        S1.pop();
      }
    }
    i++;
  }
  cout << S << endl;
  cout << S2.size();
  vector<int> p;
  while ( !S2.empty() ){
    p.push_back(S2.top().second);
    S2.pop();
  }
  for ( int cnt = p.size() - 1; cnt >= 0; cnt-- ){
    cout << " " << p[cnt];
  }
  cout << endl;

  return 0;
}

  

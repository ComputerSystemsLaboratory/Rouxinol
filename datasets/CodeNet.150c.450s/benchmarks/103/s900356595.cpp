#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<cassert>
using namespace std;
int inf = 1000000000;
int n, s;

int cnt = 0;

int func(string m, vector<bool> b, int num){
  if( m.size() == n ){
    int tmp = 0;
    for(int i=0; i<n; i++) tmp += m[i]-'0';
    if( tmp == s ) cnt++;
    // if( tmp == s ) cerr << m << endl;
    return 0;
  }

  for(int i=num+1; i<10; i++){
    if( b[i] ) continue;
    b[i] = true;
    func( m + to_string(i), b, i);
    b[i] = false;
  }
  return 0;
}

int main(void) {


  while(cin >> n >> s){
    if( n == 0 && s == 0 ) break;

    vector<bool> b(10, false);
    for(int i=0; i<10; i++){
      b[i] = true;
      func(to_string(i), b, i);
      b[i] = false;
    }
    cout << cnt << endl;
    cnt = 0;
  }

  return 0;
}


// EOF
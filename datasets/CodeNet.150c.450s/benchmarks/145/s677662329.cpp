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

int main(void) {

  string s;
  getline(cin, s);
  s += ' ';
  string tmp = "";
  string maxword = "";
  vector< pair<string, int> > p;
  for(int i=0; i<s.size(); i++){
    if( s[i] != ' ' ) tmp += s[i];
    else{
      if( maxword.size() < tmp.size() ) maxword = tmp;
      bool f = false;
      for(int j=0; j<p.size(); j++){
        if( p[j].first == tmp ){
          f = true;
          p[j].second++;
        }
      }
      if( !f ) p.push_back( make_pair(tmp, 1) );
      tmp = "";
    }
  }
  int mx = 0;
  string med;
  for(int i=0; i<p.size(); i++){
    if( mx < p[i].second ){
      mx = p[i].second;
      med = p[i].first;
    }
  }
  cout << med << " " << maxword << endl;

  return 0;
}


// EOF
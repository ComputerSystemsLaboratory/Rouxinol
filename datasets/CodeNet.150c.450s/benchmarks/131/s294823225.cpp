#include<bits/stdc++.h>
using namespace std;

string get(int a, int keta){
  string ret = "";
  if(a > 9 || keta > 1) ret += get(a / 10, keta - 1);
  ret += (char)('0' + a % 10);
  return ret;
}
int toint(string s){
  return(atoi(s.c_str()));
}


int main(){
  int a, L;
  while(cin >> a >> L, a|L){
    map< string, int > used;
    int cnt = 0;
    while(used.count(get( a, L)) == 0){
      string xx = get( a, L), yy = xx;
      used.insert(make_pair(xx,cnt));
      sort( xx.begin(), xx.end());
      sort( yy.rbegin(), yy.rend());
      a = toint(yy) - toint(xx);
      cnt++;
    }
    cout << used[get(a,L)] << " " << toint(get( a, L)) << " " << cnt - used[get(a,L)] << endl;
  }
}
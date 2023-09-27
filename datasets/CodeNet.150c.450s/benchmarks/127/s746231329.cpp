#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000



int main(){
  int n;
  cin >> n;

  while(n-->0){
    string s;
    cin >> s;
    string rs = string(s);
    reverse(s.begin(), s.end());
    int sz=s.size();
    
    set<string> m;
    m.insert(s);
    m.insert(rs);
    rep(i,sz){
      if(i==0)continue;
      string s1=s.substr(0,i), //ab
	s2=s.substr(i,sz-i),   //cd
	s3=rs.substr(sz-i,i),  //ba
	s4=rs.substr(0,sz-i);  //dc

      m.insert(s1+s4);
      m.insert(s3+s2);
      m.insert(s3+s4);
      m.insert(s2+s1);
      m.insert(s2+s3);
      m.insert(s4+s1);
    }
/*
    for(auto it : m)
      cout << it << endl;
*/
    cout << m.size() << endl;
  }

}
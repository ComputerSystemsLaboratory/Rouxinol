#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#define FOR(i, a, b)  for(int i=a; i<b; ++i)
#define rFOR(i, a, b) for(int i=a-1; i>=b; --i)
#define REP(i, n) for(int i=0; i<n; ++i)
#define rREP(i, n) for(int i=n-1; i>=0; --i)
#define all(a)  a.begin(), a.end()
#define MAXNUM 5000
using namespace std;
typedef long long ll;

int main(){
  int m;  cin >> m;
  REP(i, m){
    map<string, int> mp;
    string train; cin >> train;

    REP(i, train.length()-1){
      string sub;
      sub = train.substr(0, i+1);
      string a(sub);
      reverse(sub.begin(), sub.end());
      string r_a(sub);

      sub = train.substr(i+1, train.length()-(i+1));
      string b(sub);
      reverse(sub.begin(), sub.end());
      string r_b(sub);

      mp[a+b]++;
      mp[b+a]++;
      mp[r_a+b]++;
      mp[b+r_a]++;
      mp[a+r_b]++;
      mp[r_b+a]++;
      mp[r_a+r_b]++;
      mp[r_b+r_a]++;

    }
    cout << mp.size() << endl;
  }
  return 0;
}

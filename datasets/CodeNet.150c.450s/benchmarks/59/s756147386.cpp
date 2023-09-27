#include <bits/stdc++.h>

#define REP(i ,n) for(int i=0 ;i < n; i++)
#define REPB(i ,n) for(int i=n; i >= 0; i--)
#define FOR(i ,m ,n) for(int i=m; i < n; i++)
#define FORB(i, m, n) for(int i=m; i>= m; i--)
#define ll long long
#define pb push_back
#define popb pop_back
using namespace std;

string output(vector<int> z){
    string s,st;
    int zs = z.size() - 1;
    REP(k, zs){
        st = to_string(z[k]);
        s = s + st + " ";
      }
      st = to_string(z[zs]);
      s = s + st;
      return s;
  }
int main(){
  int n,at,v,j;
  vector<int> a;
  string ans;
  cin >> n;
  REP(c, n){
      cin >> at;
      a.pb(at);
    }
    REP(i, n){
        j = i - 1;
        v = a[i];
        while(j >= 0 && a[j] > v){
            a[j + 1] = a[j];
            j--;
          a[j+1] = v;
        }
     ans = output(a);
     cout << ans << endl;
     
    }
    }


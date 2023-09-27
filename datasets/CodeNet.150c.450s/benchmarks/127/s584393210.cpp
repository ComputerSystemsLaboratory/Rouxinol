#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  string s;
  set<string> st[n];
  for(int i=0;i<n;i++){
    cin >> s;
    int len=s.length();
    for(int j=0;j<len-1;j++){
      string s1="",s2="",revs1="",revs2="";
      for(int k=0;k<=j;k++){
        s1 += s[k];
        revs1 += s[j-k];
      }
      for(int k=j+1;k<=len-1;k++){
        s2 += s[k];
        revs2 += s[len+j-k];
      }
      st[i].insert(s1+s2);
      st[i].insert(s1+revs2);
      st[i].insert(s2+s1);
      st[i].insert(s2+revs1);
      st[i].insert(revs1+s2);
      st[i].insert(revs1+revs2);
      st[i].insert(revs2+s1);
      st[i].insert(revs2+revs1);
    }
    cout << st[i].size() << endl;
  }
}
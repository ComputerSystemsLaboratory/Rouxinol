/*
1: . , ! ? (????????????)
2: a b c
3: d e f
4: g h i
5: j k l
6: m n o
7: p q r s
8: t u v
9: w x y z
*/

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

  vector<int> v[9];
  int cnt=0;
  v[0].push_back('.');v[0].push_back(',');v[0].push_back('!');v[0].push_back('?');v[0].push_back(' ');
  for(int i=1;i<=5;i++){
      for(int j=0;j<3;j++){
          v[i].push_back('a'+cnt);
          cnt++;
      }
  }
  v[6].push_back('p');v[6].push_back('q');v[6].push_back('r');v[6].push_back('s');
  v[7].push_back('t');v[7].push_back('u');v[7].push_back('v');
  v[8].push_back('w');v[8].push_back('x');v[8].push_back('y');v[8].push_back('z');

  int n;
  cin >> n;
  string s;
  for(int i=0;i<n;i++){
      string res="";
    cin >> s;
    int pre=0,num=0;
    for(int j=0;j<(int)s.length();j++){
      if(s[j]=='0'){
          if(num==0&&pre==0) continue;
          res.push_back(v[pre-1][num%(v[pre-1].size())]);
          //cout<<res<<endl;
          num=0;pre=0;
      }
      else{
          if(pre) num++;
          else pre=(s[j]-'0');
      }
    }
    cout<<res<<endl;
  }
}
#include<bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; i++)
#define repo(i, n) for(int i=1; i<=n; i++)
#define INF 1001001001
#define INFll 100100100100100
// debug用
#define PrintVec(x) for (auto elementPrintVec: x) { cout << elementPrintVec << " "; } cout << endl;

using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  string s;
  vector<int> a(4);
  rep(i, n){
    cin >> s;
    if(s[0]=='A'){
      a[0]++;
    } else if(s[0]=='W'){
      a[1]++;
    } else if(s[0]=='T'){
      a[2]++;
    } else if(s[0]=='R'){
      a[3]++;
    }
  }
  cout << "AC x " << a[0] << endl;
  cout << "WA x " << a[1] << endl;
  cout << "TLE x " << a[2] << endl;
  cout << "RE x " << a[3] << endl;
  return 0;
}

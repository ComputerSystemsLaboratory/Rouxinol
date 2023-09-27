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
  while(true){
    cin >> n;
    if(n==0) break;
    string s[n+1];
    for(int i=0;i<n;i++) cin >>s[i];
    int res=0;
    for(int i=0;i<n/2;i++){
      if(s[2*i]=="lu" && s[2*i+1]=="ru") res++;
      else if(s[2*i+1]=="lu" && s[2*i]=="ru") res++;
      else if(s[2*i+1]=="ld" && s[2*i]=="rd") res++;
      else if(s[2*i]=="ld" && s[2*i+1]=="rd") res++;
    }
    cout << res <<endl;
  }
}
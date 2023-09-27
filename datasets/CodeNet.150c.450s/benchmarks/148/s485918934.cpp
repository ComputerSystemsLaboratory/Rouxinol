#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using pii = pair<int,int>;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define pb push_back

int main() {
  int n; cin>>n;
  string s;
  int a,b,c,d;
  a=b=c=d=0;
  rep(i,n) {
    cin>>s;
    if(s=="AC") a++;
    else if(s=="WA") b++;
    else if(s=="TLE") c++;
    else d++;
  }
  printf("AC x %d\n",a);
  printf("WA x %d\n",b);
  printf("TLE x %d\n",c);
  printf("RE x %d\n",d);
}

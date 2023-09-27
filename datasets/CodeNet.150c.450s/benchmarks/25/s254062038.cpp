#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
  int cnt[26] = {0};
  while(1){
    char c = getchar();
    if(c==EOF) break;
    if('A'<=c&&c<='Z'){
      cnt[c-'A']++; 
    }else if('a'<=c&&c<='z'){
      cnt[c-'a']++;
    }
  }
  REP(i,26){
    cout << (char)('a'+i )<< " : " << cnt[i] << endl;
  }
  return 0;
}
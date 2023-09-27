#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdio>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

#define all(v) v.begin(),v.end()
#define INF 1<<30
#define mp
#define pb push_back

#define fi first
#define se second

#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)

typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> pii;
typedef vector<pair<int, int> > vp;
typedef vector<string> vs;

typedef long long ll;

int main(){
  vi a(1001,0);
  REP(i,2,1000){
    REP(j,1,1000){
      int su = 0;
      rep(k,i){
        su += j + k;
      }
      if(su>1000) break;
      a[su]++;
    }
  }

  while(1){
    int n; cin>>n;
    if(n==0) break;
    cout<<a[n]<<endl;
  }
  return 0;
}


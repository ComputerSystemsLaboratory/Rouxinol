#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<climits>
using namespace std;
#define REP(i,a,n) for(int i = a ; i < n ; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

int t[5002];

int main(){
  int n;

  while(cin>>n,n){
    rep(i,n){
      cin>>t[i];
    }

    int ans = INT_MIN;
    rep(i,n){
      int sum = 0;
      REP(j,i,n){
        sum += t[j];
        if(ans < sum){
          ans = sum;
        }
      }
    }

    cout<<ans<<endl;
  }
}
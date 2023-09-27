#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep_1 (i,j,n) for(int i=j;i<n;i++)
typedef long long ll;
typedef long l;
const ll l_INF = 1010101010101010;
const int INF = 1010101010;
const int dx[] = {-1,0,1,0,-1,-1,1,1};
const int dy[] = {0,-1,0,1,1,-1,1,-1};

int main(){
  int n; cin>>n;
  cout<<n<<":";
  bool judge=false;
  rep(i,100000){
    if(i==0||i==1) continue;
    while(n%i==0){
      n/=i;
      cout<<" "<<i;
      judge=true;
    }
    if(n==1){
      cout<<endl;
      return 0;
    }
  }
  if(!judge) cout<<" "<<n<<endl;
}


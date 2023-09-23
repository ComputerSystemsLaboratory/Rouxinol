#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef pair<ll,ll> pll;

#define reps(i,f,n) for(int i = int(f); i <= int(n); i++)
#define rep(i,n) reps(i,0,int(n)-1)
#define rrep(i,n) for(int i = n-1; i >= 0; i--)

#define all(x) (x).begin(),(x).end()
#define X first
#define Y second

#define sz size()
#define eb emplace_back

int s[1024];

int main(void){
  int n;
  reps(i,1,999){
    int sum = i;
    reps(j,i+1,1000){
      sum += j;
      if( sum > 1000)break;
      s[sum]++;
    }
  }

  while(cin >> n,n){
    cout << s[n] << endl;
  }


  return 0;
}
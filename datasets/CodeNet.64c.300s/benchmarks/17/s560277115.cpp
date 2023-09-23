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


int main(void){
  int x,y,z;

  while(cin >> x >> y >> z,x+y+z){
    int ma=0;
    rep(i,z){
      rep(j,z){
        if(i==0||j==0)continue;
        int xa = int(i*(x+100))/100 + int(j*(x+100))/100;
        if(xa == z){
          ma = max(ma, int( i * ( y + 100 ) )/100 + int( j * ( y + 100 ) )/100);
        }
      }
    }
    cout << ma << endl;
  }


  return 0;
}
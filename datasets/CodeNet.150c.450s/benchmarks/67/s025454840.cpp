#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <cctype>
#include <cmath>
#include <map>
#include <set>
#define rep(i, m, n) for(int i = m;i < n;i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define ll long long
#define ull unsigned long long
#define pb(a) push_back(a)
#define popb(a) pop_back(a)
#define debug(x) cout<<#x<<": "<<x<<endl
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define INF 999999999
#define PI 3.14159265358979
using namespace std;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main(){
  ull n,sum=0,cnt=0;
  
  while(1){
    cin>>n;
    if(n==0){
      return 0;
    }
    rep(i,1,n){
      sum=i;
      rep(j,i+1,n){
       sum+=j;
        if(sum==n){
          cnt++;
          sum=0;
          break;
        }else if(sum>n){
          sum=0;
          break;
        }
      }
    }
    cout<<cnt<<endl;
    cnt=0;
  }
}
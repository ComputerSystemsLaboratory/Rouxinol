#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <stdio.h>
#include <list>
#include <numeric>
#include <stack>
#include <queue>
#include <tuple>
#include <bitset>
#include <map>
#include <math.h>
//ceil(a/b)   (a + (b - 1))/ b
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<int,int> P;
const int inf=1000000007;
const ll mod=1000000007;
const double PI=3.14159265358979323846;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

ll gcd(ll a, ll b){
  if (b==0) return a;
  else return gcd(b,a%b);
}

int cans(bool f){
  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}





int main(){
  vector<ll> mp(100010,0);
  ll N,Q;
  cin >> N;
  ll A[N];
  ll sum = 0;
  rep(i,N) {
	cin >> A[i];
	mp[A[i]] += 1;
	sum += A[i];
  }
  cin >> Q;
  vector<ll> ans;

  

  rep(i,Q) {
	ll b,c;
	cin >> b >> c;
	ll mul = mp[b];
	mp[c] += mp[b];
	mp[b] = 0;
	sum = sum + (c-b) * mul;
	ans.push_back(sum);
  }
  rep(i,Q) cout << ans[i] << endl;
	
  return 0;
}



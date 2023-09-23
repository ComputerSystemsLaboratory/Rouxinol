#include <cstring>
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <complex>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <bitset>

#define rep(i,a) for(int i = 0;i < (a); i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)
#define repd(i,a,b) for(int i = (a); i >= (b); i--)
#define repit(i,a) for(__typeof((a).begin()) i = (a).begin(); i != (a).end(); i++)
#define all(u) (u).begin(),(u).end()
#define rall(u) (u).rbegin(),(u).rend()
#define UNIQUE(u) (u).erase(unique(all(u)),(u).end())
#define pb push_back
#define mp make_pair
#define INF 1e10
#define EPS 1e-10
#define PI acos(-1.0)

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
  int n;
  while(cin>>n,n){
    bool gem[21][21] = {false};
    rep(i,n){
      int x, y;
      cin >> x >> y;
      gem[x][y] = true;
    }
    int m, cnt = 0;
    int rx = 10, ry = 10;
    cin >> m;
    rep(i,m){
      char d;
      int l;
      cin >> d >> l;
      if(d=='N'){
	while(l--){
	  ry++;
	  if(gem[rx][ry]){
	    cnt++;
	    gem[rx][ry] = false;
	  }
	}
      }else if(d=='E'){
	while(l--){
	  rx++;
	  if(gem[rx][ry]){
	    cnt++;
	    gem[rx][ry] = false;
	  }
	}
      }else if(d=='S'){
	while(l--){
	  ry--;
	  if(gem[rx][ry]){
	    cnt++;
	    gem[rx][ry] = false;
	  }
	}
      }else if(d=='W'){
	while(l--){
	  rx--;
	  if(gem[rx][ry]){
	    cnt++;
	    gem[rx][ry] = false;
	  }
	}
      }
    }
    if(cnt==n) cout << "Yes\n";
    else cout << "No\n";
  }
}
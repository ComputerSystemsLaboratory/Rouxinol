#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000

int main(){
  while(true){
    int n;
    cin >> n;
    if(n==0)break;
    if(n==3){ cout << 1 << endl; continue; }

    int res=0;
    int a=1,b=2,s=1; // s = sum [a,b)
    while(b<n){
      while(s<n){
	s += b;
	b++;
      }
      if(s==n){
	res++;
	s+=b;
	b++;
      }
      
      while(s>n){
	s -= a;
	a++;
      }
      if(s==n){
	res++;
	s-=a;
	a++;
      }
    }
    cout << res << endl;
  }
}
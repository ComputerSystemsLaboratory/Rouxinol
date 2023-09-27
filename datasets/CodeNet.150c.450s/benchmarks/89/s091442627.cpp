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
#define MAX 1000000

// sieve of Eratosthenes (prime num)
bool p[MAX+3]; //prime number=false
void prime(int n){
  rep(i,n+1) p[i]=false;
  p[1]=true;
  for(int i=2;i<=n;i++){
    if(!p[i]){
      for(int j=i*2; j<=n; j+=i){
	p[j]=true;
      }
    }
  }
}

int main(){
  prime(MAX+2);

  while(true){
    int a,d,n;
    scanf("%d %d %d", &a, &d, &n);
    if(n==0)break;

    int cnt=0;
    while(true){
      if(!p[a]){
	cnt++;
	if(cnt>=n) break;
      }
      a+=d;
    }
    cout << a << endl;

  }
}